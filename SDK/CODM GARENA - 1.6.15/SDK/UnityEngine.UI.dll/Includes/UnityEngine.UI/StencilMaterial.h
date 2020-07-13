#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class StencilMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "StencilMaterial"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& m_List() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T Add(uintptr_t baseMat, int32_t stencilID, uintptr_t operation, uintptr_t compareFunction, uintptr_t colorWriteMask) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E3B390))(0, baseMat, stencilID, operation, compareFunction, colorWriteMask);
	}
	template <typename T = uintptr_t> static T Add_1(uintptr_t baseMat, int32_t stencilID, uintptr_t operation, uintptr_t compareFunction, uintptr_t colorWriteMask, int32_t readMask, int32_t writeMask) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4E3B460))(0, baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask);
	}
	template <typename T = void> static T Remove(uintptr_t customMat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E3C278))(0, customMat);
	}

};

}
