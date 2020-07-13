#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Screen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Screen"));
	}


	template <typename T = uintptr_t> static T get_currentResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7DB4C))(0);
	}
	template <typename T = void> static T SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate) {
		return ((T (*)(void *, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x4E7DBDC))(0, width, height, fullscreen, preferredRefreshRate);
	}
	template <typename T = void> static T SetResolution_1(int32_t width, int32_t height, bool fullscreen) {
		return ((T (*)(void *, int32_t, int32_t, bool))(Il2CppBase() + 0x4E7DC8C))(0, width, height, fullscreen);
	}
	template <typename T = int32_t> static T get_width() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7DCAC))(0);
	}
	template <typename T = int32_t> static T get_height() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7DD3C))(0);
	}
	template <typename T = float> static T get_dpi() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7DDCC))(0);
	}
	template <typename T = bool> static T get_fullScreen() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7DE5C))(0);
	}
	template <typename T = void> static T set_autorotateToPortrait(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4E7DEEC))(0, value);
	}
	template <typename T = void> static T set_autorotateToPortraitUpsideDown(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4E7DF84))(0, value);
	}
	template <typename T = void> static T set_autorotateToLandscapeLeft(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4E7E01C))(0, value);
	}
	template <typename T = void> static T set_autorotateToLandscapeRight(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4E7E0B4))(0, value);
	}
	template <typename T = uintptr_t> static T get_orientation() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7E14C))(0);
	}
	template <typename T = void> static T set_orientation(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7E1DC))(0, value);
	}
	template <typename T = void> static T set_sleepTimeout(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7E274))(0, value);
	}

};

}
