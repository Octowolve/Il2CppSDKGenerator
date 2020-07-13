#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaBase"));
	}

	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& luaReference() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& luaEnv() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(LuaBase*))(Il2CppBase() + 0xF3BDC0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LuaBase*))(Il2CppBase() + 0xF3BE2C))(this);
	}
	template <typename T = void> T Dispose_1(bool disposeManagedResources) {
		return ((T (*)(LuaBase*, bool))(Il2CppBase() + 0xF3BE64))(this, disposeManagedResources);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(LuaBase*, uintptr_t))(Il2CppBase() + 0xF3C33C))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LuaBase*))(Il2CppBase() + 0xF3C658))(this);
	}
	template <typename T = void> T push(uintptr_t L) {
		return ((T (*)(LuaBase*, uintptr_t))(Il2CppBase() + 0xF3C7E8))(this, L);
	}

};

}
