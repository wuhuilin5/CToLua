/*
** Lua binding: tolua
** Generated automatically by tolua++-1.0.92 on 03/21/14 11:22:33.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tolua_open (lua_State* tolua_S);

#include "stdafx.h"
#include "Animal.h"
#include "Utlis.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Animal (lua_State* tolua_S)
{
 Animal* self = (Animal*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Animal");
}

/* method: new of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_new00
static int tolua_tolua_Animal_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Animal* tolua_ret = (Animal*)  Mtolua_new((Animal)(name));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Animal");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_new00_local
static int tolua_tolua_Animal_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Animal* tolua_ret = (Animal*)  Mtolua_new((Animal)(name));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Animal");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAge of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_setAge00
static int tolua_tolua_Animal_setAge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animal* self = (Animal*)  tolua_tousertype(tolua_S,1,0);
  int age = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAge'", NULL);
#endif
  {
   self->setAge(age);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAge of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_getAge00
static int tolua_tolua_Animal_getAge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animal* self = (Animal*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAge'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAge();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sound of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_sound00
static int tolua_tolua_Animal_sound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animal* self = (Animal*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sound'", NULL);
#endif
  {
   self->sound();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Animal */
#ifndef TOLUA_DISABLE_tolua_tolua_Animal_delete00
static int tolua_tolua_Animal_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animal* self = (Animal*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tolua_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Animal","Animal","",tolua_collect_Animal);
  #else
  tolua_cclass(tolua_S,"Animal","Animal","",NULL);
  #endif
  Utlis::stackDump( tolua_S);

  tolua_beginmodule(tolua_S,"Animal");
   tolua_function(tolua_S,"new",tolua_tolua_Animal_new00);
   tolua_function(tolua_S,"new_local",tolua_tolua_Animal_new00_local);
   tolua_function(tolua_S,".call",tolua_tolua_Animal_new00_local);
   tolua_function(tolua_S,"setAge",tolua_tolua_Animal_setAge00);
   tolua_function(tolua_S,"getAge",tolua_tolua_Animal_getAge00);
   tolua_function(tolua_S,"sound",tolua_tolua_Animal_sound00);
   tolua_function(tolua_S,"delete",tolua_tolua_Animal_delete00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tolua (lua_State* tolua_S) {
 return tolua_tolua_open(tolua_S);
};
#endif

