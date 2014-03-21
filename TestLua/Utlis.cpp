#include "stdafx.h"
#include "Utlis.h"


Utlis::Utlis(void)
{
}


Utlis::~Utlis(void)
{
}

void Utlis::stackDump( lua_State *l )
{
	int i;
	int top = lua_gettop( l );
	printf("------start-----%d\n", top);

	for( i = 1; i <= top; i++ )
	{
		int t = lua_type( l, i );
		printf("type: %s value:", lua_typename(l,t));

		switch (t)
		{
		case LUA_TSTRING:
			printf("%s", lua_tostring(l,i));
			break;
		case LUA_TBOOLEAN:
			printf( lua_toboolean(l,i)? "true" : "false" );
			break;
		case LUA_TNUMBER:
			printf("%g", lua_tonumber(l,i));
			break;

		default:
			printf("%s", lua_typename(l,t));
			break;
		}
		printf("\n");
	}

	printf("------end----\n" );
}