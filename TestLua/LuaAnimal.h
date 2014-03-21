#pragma once

#ifndef __LUA_ANIMAL__
#define __LUA_ANIMAL__

class Animal;

class LuaAnimal
{
public:
	~LuaAnimal(void);
	static void Register( lua_State *l );
private:
	static const char *className;
	static const luaL_reg methods[];
	static const luaL_reg methods_f[];

	static int create( lua_State *l );
	static int gc_animal( lua_State *l );
	static Animal *getAnimal( lua_State *l );

	static int sound( lua_State *l );
	static int setAge(lua_State *l);
	static int getAge(lua_State *l);
};

#endif

