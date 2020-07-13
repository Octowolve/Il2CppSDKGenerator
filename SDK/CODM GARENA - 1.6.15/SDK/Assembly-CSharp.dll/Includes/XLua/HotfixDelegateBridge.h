#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class HotfixDelegateBridge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "HotfixDelegateBridge"));
	}


	template <typename T = bool> static T xlua_get_hotfix_flag(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xF3A834))(0, idx);
	}
	template <typename T = uintptr_t> static T Get(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xF3A974))(0, idx);
	}
	template <typename T = void> static T Set(int32_t idx, uintptr_t val) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0xF3AA58))(0, idx, val);
	}

};

}
