#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Sprites {

class DataUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Sprites", "DataUtility"));
	}


	template <typename T = uintptr_t> static T GetInnerUV(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E86410))(0, sprite);
	}
	template <typename T = void> static T INTERNAL_CALL_GetInnerUV(uintptr_t sprite, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E86448))(0, sprite, value);
	}
	template <typename T = uintptr_t> static T GetOuterUV(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E864E8))(0, sprite);
	}
	template <typename T = void> static T INTERNAL_CALL_GetOuterUV(uintptr_t sprite, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E86520))(0, sprite, value);
	}
	template <typename T = uintptr_t> static T GetPadding(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E865C0))(0, sprite);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPadding(uintptr_t sprite, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E865F8))(0, sprite, value);
	}
	template <typename T = Il2CppVector2> static T GetMinSize(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E86698))(0, sprite);
	}
	template <typename T = void> static T Internal_GetMinSize(uintptr_t sprite, uintptr_t* output) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E866D4))(0, sprite, output);
	}

};

}
