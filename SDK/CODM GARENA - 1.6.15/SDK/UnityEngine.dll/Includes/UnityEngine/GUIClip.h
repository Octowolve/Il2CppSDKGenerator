#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIClip"));
	}


	template <typename T = void> static T Push(Il2CppRect screenRect, Il2CppVector2 scrollOffset, Il2CppVector2 renderOffset, bool resetOffset) {
		return ((T (*)(void *, Il2CppRect, Il2CppVector2, Il2CppVector2, bool))(Il2CppBase() + 0x477EA70))(0, screenRect, scrollOffset, renderOffset, resetOffset);
	}
	template <typename T = void> static T Pop() {
		return ((T (*)(void *))(Il2CppBase() + 0x477ED7C))(0);
	}
	template <typename T = Il2CppVector2> static T Unclip(Il2CppVector2 pos) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x478AB44))(0, pos);
	}
	template <typename T = void> static T Internal_Push(Il2CppRect screenRect, Il2CppVector2 scrollOffset, Il2CppVector2 renderOffset, bool resetOffset) {
		return ((T (*)(void *, Il2CppRect, Il2CppVector2, Il2CppVector2, bool))(Il2CppBase() + 0x478AAF0))(0, screenRect, scrollOffset, renderOffset, resetOffset);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_Push(uintptr_t screenRect, uintptr_t scrollOffset, uintptr_t renderOffset, bool resetOffset) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x478AB74))(0, screenRect, scrollOffset, renderOffset, resetOffset);
	}
	template <typename T = void> static T Internal_Pop() {
		return ((T (*)(void *))(Il2CppBase() + 0x4780B90))(0);
	}
	template <typename T = void> static T Unclip_Vector2(uintptr_t pos) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478AB70))(0, pos);
	}
	template <typename T = void> static T INTERNAL_CALL_Unclip_Vector2(uintptr_t pos) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478AC24))(0, pos);
	}
	template <typename T = uintptr_t> static T GetMatrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x4777ED8))(0);
	}
	template <typename T = void> static T INTERNAL_CALL_GetMatrix(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x478ACBC))(0, value);
	}
	template <typename T = void> static T SetMatrix(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4778000))(0, m);
	}
	template <typename T = void> static T INTERNAL_CALL_SetMatrix(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478AD54))(0, m);
	}

};

}
