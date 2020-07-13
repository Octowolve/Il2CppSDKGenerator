#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class LayoutUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "LayoutUtility"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = float> static T GetMinSize(uintptr_t rect, int32_t axis) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D0EBD0))(0, rect, axis);
	}
	template <typename T = float> static T GetPreferredSize(uintptr_t rect, int32_t axis) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D0EBE0))(0, rect, axis);
	}
	template <typename T = float> static T GetFlexibleSize(uintptr_t rect, int32_t axis) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D1DCB4))(0, rect, axis);
	}
	template <typename T = float> static T GetMinWidth(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34CE4))(0, rect);
	}
	template <typename T = float> static T GetPreferredWidth(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34F24))(0, rect);
	}
	template <typename T = float> static T GetFlexibleWidth(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35354))(0, rect);
	}
	template <typename T = float> static T GetMinHeight(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D34E04))(0, rect);
	}
	template <typename T = float> static T GetPreferredHeight(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D3513C))(0, rect);
	}
	template <typename T = float> static T GetFlexibleHeight(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35474))(0, rect);
	}
	template <typename T = float> static T GetLayoutProperty(uintptr_t rect, void* property, float defaultValue) {
		return ((T (*)(void *, uintptr_t, void*, float))(Il2CppBase() + 0x3D35594))(0, rect, property, defaultValue);
	}
	template <typename T = float> static T GetLayoutProperty_1(uintptr_t rect, void* property, float defaultValue, uintptr_t* source) {
		return ((T (*)(void *, uintptr_t, void*, float, uintptr_t*))(Il2CppBase() + 0x3D355BC))(0, rect, property, defaultValue, source);
	}
	template <typename T = float> static T GetMinWidthm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35A0C))(0, e);
	}
	template <typename T = float> static T GetPreferredWidthm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35AFC))(0, e);
	}
	template <typename T = float> static T GetPreferredWidthm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35BEC))(0, e);
	}
	template <typename T = float> static T GetFlexibleWidthm__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35CDC))(0, e);
	}
	template <typename T = float> static T GetMinHeightm__4(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35DCC))(0, e);
	}
	template <typename T = float> static T GetPreferredHeightm__5(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35EBC))(0, e);
	}
	template <typename T = float> static T GetPreferredHeightm__6(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D35FAC))(0, e);
	}
	template <typename T = float> static T GetFlexibleHeightm__7(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D3609C))(0, e);
	}

};

}
