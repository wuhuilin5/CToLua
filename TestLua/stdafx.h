// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�

#ifdef __cplusplus
extern "C" {
#endif

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

#include "tolua++.h"

#ifdef __cplusplus
}
#endif

TOLUA_API int tolua_tolua_open( lua_State *l );

#pragma comment(lib, "lua51.lib") 
#pragma comment(lib, "tolua++.lib")