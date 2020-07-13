#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenShotHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenShotHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ScreenShotScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScreenShotScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoScreenShot_Coroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoScreenShot_Immediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShareOnCaptureShownView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T ScreenShotScreen(void* callback, uintptr_t showCaptureInfo) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x3C02710))(0, callback, showCaptureInfo);
	}
	template <typename T = void> static T ScreenShotScreen_1(void* callback, uintptr_t transformLeftBottom, uintptr_t transformRightBottom) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C02A28))(0, callback, transformLeftBottom, transformRightBottom);
	}
	template <typename T = void> static T ScreenCapture(Il2CppRect rect, void* callback) {
		return ((T (*)(void *, Il2CppRect, void*))(Il2CppBase() + 0x3C02C28))(0, rect, callback);
	}
	template <typename T = void> static T DoScreenShot(void* callback, Il2CppRect rect, uintptr_t showCaptureInfo) {
		return ((T (*)(void *, void*, Il2CppRect, uintptr_t))(Il2CppBase() + 0x3C0283C))(0, callback, rect, showCaptureInfo);
	}
	template <typename T = uintptr_t> static T DoScreenShot_Coroutine(void* callback, Il2CppRect rect, uintptr_t showCaptureInfo) {
		return ((T (*)(void *, void*, Il2CppRect, uintptr_t))(Il2CppBase() + 0x3C02EA8))(0, callback, rect, showCaptureInfo);
	}
	template <typename T = uintptr_t> static T DoScreenShot_Immediately(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x3C02FD0))(0, rect);
	}
	template <typename T = uintptr_t> static T FillTexture(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x3C030AC))(0, rect);
	}
	template <typename T = void> static T OnPreScreenCapture(uintptr_t showCaptureInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C02D0C))(0, showCaptureInfo);
	}
	template <typename T = void> static T OnPostScreenCapture(uintptr_t showCaptureInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C03420))(0, showCaptureInfo);
	}
	template <typename T = void> static T ShowShareOnCaptureShownView(bool active, uintptr_t showCaptureInfo) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x3C03244))(0, active, showCaptureInfo);
	}

};

}
