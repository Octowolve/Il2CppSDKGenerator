#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareBaseWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareBaseWindowView"));
	}

	template <typename T = uintptr_t> T& platformContainer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& captureBGObj() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& captureTexture() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& saveBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& weaponDescObj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& roleDescObj() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& featureRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& playerHead() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& playerNameLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& logoComponent() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& containerWidget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& captureRectWidget() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& containerWidgetWidth() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& containerWidgetHeight() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& captureWidgetWidth() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& captureWidgetHeight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adaptation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCaptureTextureSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Adaptation(bool isTextureFromCDN) {
		return ((T (*)(ShareBaseWindowView*, bool))(Il2CppBase() + 0x44930FC))(this, isTextureFromCDN);
	}
	template <typename T = void> T GetCaptureTextureSize(bool isTextureFromCDN, uintptr_t captureWidth, uintptr_t captureHeight) {
		return ((T (*)(ShareBaseWindowView*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x44986E8))(this, isTextureFromCDN, captureWidth, captureHeight);
	}
	template <typename T = bool> T AdaptationWidget(uintptr_t widget, int32_t width, int32_t height) {
		return ((T (*)(ShareBaseWindowView*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x44984F8))(this, widget, width, height);
	}

};

}
