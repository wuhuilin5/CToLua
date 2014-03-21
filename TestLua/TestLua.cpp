// TestLua.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Utlis.h"
#include "LuaAnimal.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	lua_State *l = lua_open();
	luaL_openlibs(l);
	
	///LuaAnimal::Register(l);
	Utlis::stackDump(l);
	tolua_tolua_open(l);

	if( luaL_dofile( l, "main.lua" )){  // load and call
		Utlis::stackDump(l);
	}
	Utlis::stackDump(l);

	system("pause");
	lua_close(l);

	return 0;
}