#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.LuaDLL {

class Lua
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.LuaDLL", "Lua"));
	}

	template <typename T = Il2CppString*> static T& LUADLL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T lua_tothread(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3C850))(0, L, index);
	}
	template <typename T = int32_t> static T xlua_get_lib_version() {
		return ((T (*)(void *))(Il2CppBase() + 0xF3C938))(0);
	}
	template <typename T = int32_t> static T lua_gc(uintptr_t L, uintptr_t what, int32_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF3CA08))(0, L, what, data);
	}
	template <typename T = uintptr_t> static T lua_getupvalue(uintptr_t L, int32_t funcindex, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3CAF8))(0, L, funcindex, n);
	}
	template <typename T = uintptr_t> static T lua_setupvalue(uintptr_t L, int32_t funcindex, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3CBE8))(0, L, funcindex, n);
	}
	template <typename T = int32_t> static T lua_pushthread(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3CCD8))(0, L);
	}
	template <typename T = bool> static T lua_isfunction(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC235B4))(0, L, stackPos);
	}
	template <typename T = bool> static T lua_islightuserdata(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3CE98))(0, L, stackPos);
	}
	template <typename T = bool> static T lua_istable(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3CEB8))(0, L, stackPos);
	}
	template <typename T = bool> static T lua_isthread(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3CED8))(0, L, stackPos);
	}
	template <typename T = int32_t> static T luaL_error(uintptr_t L, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xC22330))(0, L, message);
	}
	template <typename T = int32_t> static T lua_setfenv(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3D00C))(0, L, stackPos);
	}
	template <typename T = uintptr_t> static T luaL_newstate() {
		return ((T (*)(void *))(Il2CppBase() + 0xF3D0F4))(0);
	}
	template <typename T = void> static T lua_close(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3D1C4))(0, L);
	}
	template <typename T = void> static T luaopen_xlua(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3D2A0))(0, L);
	}
	template <typename T = void> static T luaL_openlibs(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3D37C))(0, L);
	}
	template <typename T = uint32_t> static T xlua_objlen(uintptr_t L, int32_t stackPos) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3D458))(0, L, stackPos);
	}
	template <typename T = void> static T lua_createtable(uintptr_t L, int32_t narr, int32_t nrec) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3D540))(0, L, narr, nrec);
	}
	template <typename T = void> static T lua_newtable(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3D630))(0, L);
	}
	template <typename T = int32_t> static T xlua_getglobal(uintptr_t L, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF3D650))(0, L, name);
	}
	template <typename T = int32_t> static T xlua_setglobal(uintptr_t L, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF3D764))(0, L, name);
	}
	template <typename T = void> static T xlua_getloaders(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3D878))(0, L);
	}
	template <typename T = void> static T lua_settop(uintptr_t L, int32_t newTop) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC23988))(0, L, newTop);
	}
	template <typename T = void> static T lua_pop(uintptr_t L, int32_t amount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC1D5E0))(0, L, amount);
	}
	template <typename T = void> static T lua_insert(uintptr_t L, int32_t newTop) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3D954))(0, L, newTop);
	}
	template <typename T = void> static T lua_remove(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC236BC))(0, L, index);
	}
	template <typename T = int32_t> static T lua_rawget(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DA3C))(0, L, index);
	}
	template <typename T = void> static T lua_rawset(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DB24))(0, L, index);
	}
	template <typename T = int32_t> static T lua_setmetatable(uintptr_t L, int32_t objIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DC0C))(0, L, objIndex);
	}
	template <typename T = int32_t> static T lua_rawequal(uintptr_t L, int32_t index1, int32_t index2) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3C56C))(0, L, index1, index2);
	}
	template <typename T = void> static T lua_pushvalue(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC235D4))(0, L, index);
	}
	template <typename T = void> static T lua_pushcclosure(uintptr_t L, uintptr_t fn, int32_t n) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF3DCF4))(0, L, fn, n);
	}
	template <typename T = void> static T lua_replace(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DDE4))(0, L, index);
	}
	template <typename T = int32_t> static T lua_gettop(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC1D504))(0, L);
	}
	template <typename T = uintptr_t> static T lua_type(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3CDB4))(0, L, index);
	}
	template <typename T = bool> static T lua_isnil(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DECC))(0, L, index);
	}
	template <typename T = bool> static T lua_isnumber(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DEEC))(0, L, index);
	}
	template <typename T = bool> static T lua_isboolean(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DFDC))(0, L, index);
	}
	template <typename T = int32_t> static T luaL_ref(uintptr_t L, int32_t registryIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3DFF4))(0, L, registryIndex);
	}
	template <typename T = int32_t> static T luaL_ref_1(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3E0D8))(0, L);
	}
	template <typename T = void> static T xlua_rawgeti(uintptr_t L, int32_t tableIndex, int64_t index) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0xF3E1B0))(0, L, tableIndex, index);
	}
	template <typename T = void> static T xlua_rawseti(uintptr_t L, int32_t tableIndex, int64_t index) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0xF3E2A0))(0, L, tableIndex, index);
	}
	template <typename T = void> static T lua_getref(uintptr_t L, int32_t reference) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC231A8))(0, L, reference);
	}
	template <typename T = int32_t> static T pcall_prepare(uintptr_t L, int32_t error_func_ref, int32_t func_ref) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xC24A54))(0, L, error_func_ref, func_ref);
	}
	template <typename T = void> static T luaL_unref(uintptr_t L, int32_t registryIndex, int32_t reference) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3E390))(0, L, registryIndex, reference);
	}
	template <typename T = void> static T lua_unref(uintptr_t L, int32_t reference) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3E480))(0, L, reference);
	}
	template <typename T = bool> static T lua_isstring(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3E4B0))(0, L, index);
	}
	template <typename T = bool> static T lua_isinteger(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3E5A0))(0, L, index);
	}
	template <typename T = void> static T lua_pushnil(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3E690))(0, L);
	}
	template <typename T = void> static T lua_pushstdcallcfunction(uintptr_t L, uintptr_t function, int32_t n) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF3E76C))(0, L, function, n);
	}
	template <typename T = int32_t> static T xlua_upvalueindex(int32_t n) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xF3E924))(0, n);
	}
	template <typename T = int32_t> static T lua_pcall(uintptr_t L, int32_t nArgs, int32_t nResults, int32_t errfunc) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0xC237A4))(0, L, nArgs, nResults, errfunc);
	}
	template <typename T = double> static T lua_tonumber(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC24DBC))(0, L, index);
	}
	template <typename T = int32_t> static T xlua_tointeger(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC22344))(0, L, index);
	}
	template <typename T = uint32_t> static T xlua_touint(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC3F7F0))(0, L, index);
	}
	template <typename T = bool> static T lua_toboolean(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC23898))(0, L, index);
	}
	template <typename T = uintptr_t> static T lua_topointer(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3C700))(0, L, index);
	}
	template <typename T = uintptr_t> static T lua_tolstring(uintptr_t L, int32_t index, uintptr_t* strLen) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xF3EA00))(0, L, index, strLen);
	}
	template <typename T = Il2CppString*> static T lua_tostring(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC278CC))(0, L, index);
	}
	template <typename T = uintptr_t> static T lua_atpanic(uintptr_t L, uintptr_t panicf) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3EB00))(0, L, panicf);
	}
	template <typename T = void> static T lua_pushnumber(uintptr_t L, double number) {
		return ((T (*)(void *, uintptr_t, double))(Il2CppBase() + 0xC24CCC))(0, L, number);
	}
	template <typename T = void> static T lua_pushboolean(uintptr_t L, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0xC25FF8))(0, L, value);
	}
	template <typename T = void> static T xlua_pushinteger(uintptr_t L, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC253F4))(0, L, value);
	}
	template <typename T = void> static T xlua_pushuint(uintptr_t L, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0xC22530))(0, L, value);
	}
	template <typename T = void> static T lua_pushstring(uintptr_t L, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xC24FA8))(0, L, str);
	}
	template <typename T = void> static T xlua_pushlstring(uintptr_t L, Il2CppArray<uintptr_t>* str, int32_t size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xF3EC00))(0, L, str, size);
	}
	template <typename T = void> static T xlua_pushasciistring(uintptr_t L, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xC231E0))(0, L, str);
	}
	template <typename T = void> static T lua_pushstring_1(uintptr_t L, Il2CppArray<uintptr_t>* str) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xC40F30))(0, L, str);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T lua_tobytes(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC45734))(0, L, index);
	}
	template <typename T = int32_t> static T luaL_newmetatable(uintptr_t L, Il2CppString* meta) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF3ECF8))(0, L, meta);
	}
	template <typename T = int32_t> static T xlua_pgettable(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC232E8))(0, L, idx);
	}
	template <typename T = int32_t> static T xlua_psettable(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3EE0C))(0, L, idx);
	}
	template <typename T = void> static T luaL_getmetatable(uintptr_t L, Il2CppString* meta) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF3EEF4))(0, L, meta);
	}
	template <typename T = int32_t> static T xluaL_loadbuffer(uintptr_t L, Il2CppArray<uintptr_t>* buff, int32_t size, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0xF3EF18))(0, L, buff, size, name);
	}
	template <typename T = int32_t> static T luaL_loadbuffer(uintptr_t L, Il2CppString* buff, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF3F03C))(0, L, buff, name);
	}
	template <typename T = int32_t> static T xlua_tocsobj_safe(uintptr_t L, int32_t obj) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3F134))(0, L, obj);
	}
	template <typename T = int32_t> static T xlua_tocsobj_fast(uintptr_t L, int32_t obj) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3F21C))(0, L, obj);
	}
	template <typename T = int32_t> static T lua_error(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3F304))(0, L);
	}
	template <typename T = bool> static T lua_checkstack(uintptr_t L, int32_t extra) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3F3F4))(0, L, extra);
	}
	template <typename T = int32_t> static T lua_next(uintptr_t L, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3F4E4))(0, L, index);
	}
	template <typename T = void> static T lua_pushlightuserdata(uintptr_t L, uintptr_t udata) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xC6BE18))(0, L, udata);
	}
	template <typename T = uintptr_t> static T xlua_tag() {
		return ((T (*)(void *))(Il2CppBase() + 0xF3F5C8))(0);
	}
	template <typename T = void> static T luaL_where(uintptr_t L, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3F698))(0, L, level);
	}
	template <typename T = int32_t> static T xlua_tryget_cachedud(uintptr_t L, int32_t key, int32_t cache_ref) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3F780))(0, L, key, cache_ref);
	}
	template <typename T = void> static T xlua_pushcsobj(uintptr_t L, int32_t key, int32_t meta_ref, bool need_cache, int32_t cache_ref) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0xF3F870))(0, L, key, meta_ref, need_cache, cache_ref);
	}
	template <typename T = int32_t> static T gen_obj_indexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3F96C))(0, L);
	}
	template <typename T = int32_t> static T gen_obj_newindexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FA48))(0, L);
	}
	template <typename T = int32_t> static T gen_cls_indexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FB24))(0, L);
	}
	template <typename T = int32_t> static T gen_cls_newindexer(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FC00))(0, L);
	}
	template <typename T = int32_t> static T get_error_func_ref(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FCDC))(0, L);
	}
	template <typename T = int32_t> static T load_error_func(uintptr_t L, int32_t Ref) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC230C0))(0, L, Ref);
	}
	template <typename T = int32_t> static T luaopen_i64lib(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FDB8))(0, L);
	}
	template <typename T = int32_t> static T luaopen_socket_core(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3FE94))(0, L);
	}
	template <typename T = void> static T lua_pushint64(uintptr_t L, int64_t n) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xC22618))(0, L, n);
	}
	template <typename T = void> static T lua_pushuint64(uintptr_t L, uint64_t n) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0xC2242C))(0, L, n);
	}
	template <typename T = bool> static T lua_isint64(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF3FF70))(0, L, idx);
	}
	template <typename T = bool> static T lua_isuint64(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF40060))(0, L, idx);
	}
	template <typename T = int64_t> static T lua_toint64(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC6A390))(0, L, idx);
	}
	template <typename T = uint64_t> static T lua_touint64(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC6A5F0))(0, L, idx);
	}
	template <typename T = void> static T xlua_push_csharp_function(uintptr_t L, uintptr_t fn, int32_t n) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF3E834))(0, L, fn, n);
	}
	template <typename T = int32_t> static T xlua_csharp_str_error(uintptr_t L, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF3CEF8))(0, L, message);
	}
	template <typename T = int32_t> static T xlua_csharp_error(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF3F318))(0, L);
	}
	template <typename T = bool> static T xlua_pack_int8_t(uintptr_t buff, int32_t offset, unsigned char field) {
		return ((T (*)(void *, uintptr_t, int32_t, unsigned char))(Il2CppBase() + 0xC1FF84))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_int8_t(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20094))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_pack_int16_t(uintptr_t buff, int32_t offset, int16_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int16_t))(Il2CppBase() + 0xC20200))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_int16_t(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20310))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_pack_int32_t(uintptr_t buff, int32_t offset, int32_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xC2047C))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_int32_t(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC2058C))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_pack_int64_t(uintptr_t buff, int32_t offset, int64_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0xC20700))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_int64_t(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20810))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_pack_float(uintptr_t buff, int32_t offset, float field) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0xC20990))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_float(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20AA0))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_pack_double(uintptr_t buff, int32_t offset, double field) {
		return ((T (*)(void *, uintptr_t, int32_t, double))(Il2CppBase() + 0xC20BC8))(0, buff, offset, field);
	}
	template <typename T = bool> static T xlua_unpack_double(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20CD4))(0, buff, offset, field);
	}
	template <typename T = uintptr_t> static T xlua_pushstruct(uintptr_t L, uint32_t size, int32_t meta_ref) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0xF40150))(0, L, size, meta_ref);
	}
	template <typename T = void> static T xlua_pushcstable(uintptr_t L, uint32_t field_count, int32_t meta_ref) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0xF40240))(0, L, field_count, meta_ref);
	}
	template <typename T = uintptr_t> static T lua_touserdata(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xC6CE40))(0, L, idx);
	}
	template <typename T = int32_t> static T xlua_gettypeid(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF40330))(0, L, idx);
	}
	template <typename T = int32_t> static T xlua_get_registry_index() {
		return ((T (*)(void *))(Il2CppBase() + 0xF40418))(0);
	}
	template <typename T = int32_t> static T xlua_pgettable_bypath(uintptr_t L, int32_t idx, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0xF404E8))(0, L, idx, path);
	}
	template <typename T = int32_t> static T xlua_psettable_bypath(uintptr_t L, int32_t idx, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0xF40604))(0, L, idx, path);
	}
	template <typename T = bool> static T xlua_pack_float2(uintptr_t buff, int32_t offset, float f1, float f2) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float))(Il2CppBase() + 0xC1D608))(0, buff, offset, f1, f2);
	}
	template <typename T = bool> static T xlua_unpack_float2(uintptr_t buff, int32_t offset, uintptr_t* f1, uintptr_t* f2) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xC1D81C))(0, buff, offset, f1, f2);
	}
	template <typename T = bool> static T xlua_pack_float3(uintptr_t buff, int32_t offset, float f1, float f2, float f3) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float, float))(Il2CppBase() + 0xC1DBB0))(0, buff, offset, f1, f2, f3);
	}
	template <typename T = bool> static T xlua_unpack_float3(uintptr_t buff, int32_t offset, uintptr_t* f1, uintptr_t* f2, uintptr_t* f3) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xC1DDF0))(0, buff, offset, f1, f2, f3);
	}
	template <typename T = bool> static T xlua_pack_float4(uintptr_t buff, int32_t offset, float f1, float f2, float f3, float f4) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float, float, float))(Il2CppBase() + 0xC1E218))(0, buff, offset, f1, f2, f3, f4);
	}
	template <typename T = bool> static T xlua_unpack_float4(uintptr_t buff, int32_t offset, uintptr_t* f1, uintptr_t* f2, uintptr_t* f3, uintptr_t* f4) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xC1E470))(0, buff, offset, f1, f2, f3, f4);
	}
	template <typename T = bool> static T xlua_pack_float5(uintptr_t buff, int32_t offset, float f1, float f2, float f3, float f4, float f5) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float, float, float, float))(Il2CppBase() + 0xF40720))(0, buff, offset, f1, f2, f3, f4, f5);
	}
	template <typename T = bool> static T xlua_unpack_float5(uintptr_t buff, int32_t offset, uintptr_t* f1, uintptr_t* f2, uintptr_t* f3, uintptr_t* f4, uintptr_t* f5) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xF40838))(0, buff, offset, f1, f2, f3, f4, f5);
	}
	template <typename T = bool> static T xlua_pack_float6(uintptr_t buff, int32_t offset, float f1, float f2, float f3, float f4, float f5, float f6) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float, float, float, float, float))(Il2CppBase() + 0xF4099C))(0, buff, offset, f1, f2, f3, f4, f5, f6);
	}
	template <typename T = bool> static T xlua_unpack_float6(uintptr_t buff, int32_t offset, uintptr_t* f1, uintptr_t* f2, uintptr_t* f3, uintptr_t* f4, uintptr_t* f5, uintptr_t* f6) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xF40ABC))(0, buff, offset, f1, f2, f3, f4, f5, f6);
	}
	template <typename T = bool> static T xlua_pack_decimal(uintptr_t buff, int32_t offset, uintptr_t dec) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC20E18))(0, buff, offset, dec);
	}
	template <typename T = bool> static T xlua_unpack_decimal(uintptr_t buff, int32_t offset, uintptr_t* scale, uintptr_t* sign, uintptr_t* hi32, uintptr_t* lo64) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0xC20FCC))(0, buff, offset, scale, sign, hi32, lo64);
	}
	template <typename T = bool> static T xlua_is_eq_str(uintptr_t L, int32_t index, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0xF40C34))(0, L, index, str);
	}
	template <typename T = bool> static T xlua_is_eq_str_1(uintptr_t L, int32_t index, Il2CppString* str, int32_t str_len) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF40C88))(0, L, index, str, str_len);
	}
	template <typename T = uintptr_t> static T xlua_gl(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF40DB4))(0, L);
	}

};

}
