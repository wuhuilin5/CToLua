// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>

// TODO: 在此处引用程序需要的其他头文件

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