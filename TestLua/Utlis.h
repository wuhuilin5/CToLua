#pragma once
#ifndef __UTLIS_H__
#define __UTLIS_H__

class Utlis
{
public:
	Utlis(void);
	~Utlis(void);
	static void stackDump( lua_State *l );
};

#endif
