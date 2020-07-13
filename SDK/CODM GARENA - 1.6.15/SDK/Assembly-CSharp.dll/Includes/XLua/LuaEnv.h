#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaEnv
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaEnv"));
	}

	template <typename T = Il2CppString*> static T& CSHARP_NAMESPACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MAIN_SHREAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rawL() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _G() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& translator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& errorFuncRef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& luaLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LIB_VERSION_EXPECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<void*>*> static T& initers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& last_check_point() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& max_check_per_tick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& object_valid_checker() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& refQueue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& init_xlua() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& customLoaders() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& buildin_initer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_L() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xC22FD4))(this);
	}
	template <typename T = uintptr_t> T get_luaEnvLock() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xC22FCC))(this);
	}
	template <typename T = void> static T AddIniter(void* initer) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xC24060))(0, initer);
	}
	template <typename T = uintptr_t> T get_Global() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF44E0C))(this);
	}
	template <typename T = uintptr_t> T LoadString(Il2CppArray<uintptr_t>* chunk, Il2CppString* chunkName, uintptr_t env) {
		return ((T (*)(LuaEnv*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3395B04))(this, chunk, chunkName, env);
	}
	template <typename T = uintptr_t> T LoadString_1(Il2CppString* chunk, Il2CppString* chunkName, uintptr_t env) {
		return ((T (*)(LuaEnv*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E40FAC))(this, chunk, chunkName, env);
	}
	template <typename T = uintptr_t> T LoadString_2(Il2CppString* chunk, Il2CppString* chunkName, uintptr_t env) {
		return ((T (*)(LuaEnv*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF44E14))(this, chunk, chunkName, env);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DoString(Il2CppArray<uintptr_t>* chunk, Il2CppString* chunkName, uintptr_t env) {
		return ((T (*)(LuaEnv*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF44EBC))(this, chunk, chunkName, env);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DoString_1(Il2CppString* chunk, Il2CppString* chunkName, uintptr_t env) {
		return ((T (*)(LuaEnv*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF43FE8))(this, chunk, chunkName, env);
	}
	template <typename T = void> T AddSearcher(uintptr_t searcher, int32_t index) {
		return ((T (*)(LuaEnv*, uintptr_t, int32_t))(Il2CppBase() + 0xF43DEC))(this, searcher, index);
	}
	template <typename T = void> T Alias(uintptr_t type, Il2CppString* alias) {
		return ((T (*)(LuaEnv*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF45184))(this, type, alias);
	}
	template <typename T = bool> static T ObjectValidCheck(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF451AC))(0, obj);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF452D4))(this);
	}
	template <typename T = void> T GC() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF45794))(this);
	}
	template <typename T = uintptr_t> T NewTable() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF45798))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF45950))(this);
	}
	template <typename T = void> T Dispose_1(bool dispose) {
		return ((T (*)(LuaEnv*, bool))(Il2CppBase() + 0xF45A44))(this, dispose);
	}
	template <typename T = void> T ThrowExceptionFromError(int32_t oldTop) {
		return ((T (*)(LuaEnv*, int32_t))(Il2CppBase() + 0xC233D0))(this, oldTop);
	}
	template <typename T = void> T equeueGCAction(uintptr_t action) {
		return ((T (*)(LuaEnv*, uintptr_t))(Il2CppBase() + 0xF3C22C))(this, action);
	}
	template <typename T = void> T AddLoader(uintptr_t loader) {
		return ((T (*)(LuaEnv*, uintptr_t))(Il2CppBase() + 0xF46138))(this, loader);
	}
	template <typename T = void> T AddBuildin(Il2CppString* name, uintptr_t initer) {
		return ((T (*)(LuaEnv*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF440DC))(this, name, initer);
	}
	template <typename T = int32_t> T get_GcPause() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF461D8))(this);
	}
	template <typename T = void> T set_GcPause(int32_t value) {
		return ((T (*)(LuaEnv*, int32_t))(Il2CppBase() + 0xF4628C))(this, value);
	}
	template <typename T = int32_t> T get_GcStepmul() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF4632C))(this);
	}
	template <typename T = void> T set_GcStepmul(int32_t value) {
		return ((T (*)(LuaEnv*, int32_t))(Il2CppBase() + 0xF463E0))(this, value);
	}
	template <typename T = void> T FullGc() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF459AC))(this);
	}
	template <typename T = void> T StopGc() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF46480))(this);
	}
	template <typename T = void> T RestartGc() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF46518))(this);
	}
	template <typename T = bool> T GcStep(int32_t data) {
		return ((T (*)(LuaEnv*, int32_t))(Il2CppBase() + 0xF465B0))(this, data);
	}
	template <typename T = int32_t> T get_Memroy() {
		return ((T (*)(LuaEnv*))(Il2CppBase() + 0xF46658))(this);
	}

};

}
