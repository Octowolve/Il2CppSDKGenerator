#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectCheck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectCheck"));
	}


	template <typename T = bool> T Invoke(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheck*, uintptr_t, int32_t))(Il2CppBase() + 0xF51A88))(this, L, idx);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, int32_t idx, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectCheck*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF51B14))(this, L, idx, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectCheck*, uintptr_t))(Il2CppBase() + 0xF51BF4))(this, result);
	}

};

}
