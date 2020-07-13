#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.LuaDLL {

class luaCSFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.LuaDLL", "lua_CSFunction"));
	}


	template <typename T = int32_t> T Invoke(uintptr_t L) {
		return ((T (*)(luaCSFunction*, uintptr_t))(Il2CppBase() + 0xF40EA0))(this, L);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, uintptr_t callback, uintptr_t object) {
		return ((T (*)(luaCSFunction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF40F10))(this, L, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(luaCSFunction*, uintptr_t))(Il2CppBase() + 0xF40FCC))(this, result);
	}

};

}
