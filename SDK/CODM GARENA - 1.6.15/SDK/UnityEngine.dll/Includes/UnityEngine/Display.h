#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Display
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Display"));
	}

	template <typename T = uintptr_t> T& nativeDisplay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& displays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _mainDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& onDisplaysUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_renderingWidth() {
		return ((T (*)(Display*))(Il2CppBase() + 0x4DA6244))(this);
	}
	template <typename T = int32_t> T get_renderingHeight() {
		return ((T (*)(Display*))(Il2CppBase() + 0x4DA63B0))(this);
	}
	template <typename T = int32_t> T get_systemWidth() {
		return ((T (*)(Display*))(Il2CppBase() + 0x4DA6474))(this);
	}
	template <typename T = int32_t> T get_systemHeight() {
		return ((T (*)(Display*))(Il2CppBase() + 0x4DA65E0))(this);
	}
	template <typename T = Il2CppVector3> static T RelativeMouseAt(Il2CppVector3 inputMouseCoordinates) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4DA66A4))(0, inputMouseCoordinates);
	}
	template <typename T = void> static T RecreateDisplayList(Il2CppArray<uintptr_t>* nativeDisplay) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA685C))(0, nativeDisplay);
	}
	template <typename T = void> static T FireDisplaysUpdated() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA6AEC))(0);
	}
	template <typename T = void> static T GetSystemExtImpl(uintptr_t nativeDisplay, uintptr_t* w, uintptr_t* h) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DA6538))(0, nativeDisplay, w, h);
	}
	template <typename T = void> static T GetRenderingExtImpl(uintptr_t nativeDisplay, uintptr_t* w, uintptr_t* h) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DA6308))(0, nativeDisplay, w, h);
	}
	template <typename T = int32_t> static T RelativeMouseAtImpl(int32_t x, int32_t y, uintptr_t* rx, uintptr_t* ry) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DA67AC))(0, x, y, rx, ry);
	}

};

}
