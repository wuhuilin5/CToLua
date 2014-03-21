#include "stdafx.h"
#include "LuaAnimal.h"
#include "Animal.h"
#include "Utlis.h"

const char *LuaAnimal::className = "Animal";
const luaL_reg LuaAnimal::methods[] = {
	{"sound", LuaAnimal::sound },
	{"setAge", LuaAnimal::setAge},
	{"getAge", LuaAnimal::getAge},
	{"__gc", LuaAnimal::gc_animal},
	{NULL,NULL}
};

const luaL_reg LuaAnimal::methods_f[] = {
	{ "create", LuaAnimal::create },
	{ NULL, NULL}
};

LuaAnimal::~LuaAnimal(void)
{
}

void LuaAnimal::Register( lua_State *l )
{
	//1. new method table for l to save functions
	lua_newtable(l);
	int methodTable = lua_gettop(l);

	//2.new metatable for L to save "__metatable", "__index",  "__gc", etc
	luaL_newmetatable(l, className );
	int metaTable = lua_gettop(l);

	//3.0 metatable["__metatable"] = methodtable;
	lua_pushliteral( l, "__metatable" );  //remove \0
	lua_pushvalue( l, methodTable );
	lua_settable( l, metaTable );

	//4.0 metatable["__index"] = methodtable
	lua_pushliteral( l, "__index" );
	lua_pushvalue( l, methodTable );
	lua_rawset( l, metaTable );  // the same as lua_settable(1,metatable)
	
	//5.0 metatable["__gc"] = gc_animal  //will be called when lua_close(l)
	lua_pushliteral( l, "__gc" ); 
	lua_pushcfunction( l, LuaAnimal::gc_animal );
	lua_rawset( l, metaTable );

	lua_pop(l,1);	//drop metatable

	/*6.0¡¡for object
	name -- null set object funtion to methodtable( the table on top );
	eg: Animal a = Animal("xxx")
		a:func in this methodtable
	*/ 
	 //fill methodtable, is libname is not null, will create a table use the libname and push the table to stack
	luaL_openlib( l, NULL, methods, 0 ); 
	lua_pop(l,1);		//drop methodtable

	/*7.1 for class:
	name = className, so this set function to "method_f"
	eg: Animal a = Animal:create( "xx" );
		Animal:create() in this method_f tables
	*/
	luaL_openlib( l, className, methods_f, 0 );  //push table[className] to stack
	lua_pop(l,1); //drop table[className]

	/*7.2 for class:
	add global function "className", so we Animal() is a global function now
	eg: Animal a = Animal("xx")
		function Animal() in lua will call create in C++
	*/
	//lua_register(l, className, LuaAnimal::create );
}

int LuaAnimal::create( lua_State *l )
{
	const char *name = lua_tostring(l,-1);

	Animal *a = new Animal(name);
	void **p = (void**)lua_newuserdata( l, sizeof(void*)); 
	*p = a;

	luaL_getmetatable( l, className );
	lua_setmetatable( l, -2 );

	return 1;
}

Animal* LuaAnimal::getAnimal( lua_State *l )
{
	luaL_checktype( l, 1, LUA_TUSERDATA ); //indicate what type to check
	void *ud = luaL_checkudata( l, 1, className );
	if( !ud )
		luaL_typerror( l, 1, className );

	return *(Animal**)ud;
}

int LuaAnimal::gc_animal( lua_State *l )
{
	Utlis::stackDump(l);

	Animal *a = (Animal*)(*(void**)lua_touserdata(l,-1));
	delete a;
	return 0;
}

int LuaAnimal::getAge( lua_State *l )
{
	Animal *a = getAnimal(l);
	lua_pushinteger(l, a->getAge());
	return 1;
}

int LuaAnimal::setAge( lua_State *l )
{
	Utlis::stackDump(l);

	Animal *a = getAnimal(l);
	int age = luaL_checkint(l,2);
	a->setAge( age );
	return 0;
}

int LuaAnimal::sound( lua_State *l )
{
	Animal *a = getAnimal(l);
	a->sound();
	return 0;
}