#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectCast
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectCast"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCast*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4C4F4))(this, L, idx, target);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, int32_t idx, uintptr_t target, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectCast*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4C59C))(this, L, idx, target, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectCast*, uintptr_t))(Il2CppBase() + 0xF4C67C))(this, result);
	}

};

}
