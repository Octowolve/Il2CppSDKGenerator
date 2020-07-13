#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HotUpdateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HotUpdateHelper"));
	}


	template <typename T = bool> static T IsNull(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3700950))(0, o);
	}
	template <typename T = uint64_t> static T ToUInt64(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37009FC))(0, i);
	}
	template <typename T = uint32_t> static T ToUInt32(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3700A0C))(0, i);
	}
	template <typename T = int64_t> static T ToInt64(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3700A14))(0, i);
	}
	template <typename T = uintptr_t> static T ConvertToArray(uintptr_t arr, uintptr_t elementType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3700A24))(0, arr, elementType);
	}

};

}
