#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PopupWindowBlur
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PopupWindowBlur"));
	}

	template <typename T = int32_t> T& downsample() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& blurSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_CurrentBlurSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& blurIterations() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& blurType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& blurMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CacheTexture() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_CaptureScreen() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_RenderTexture() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_RenderTexture2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_ScreenShot() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& iScreenW() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& iScreenH() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& RT_FORMAT() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Screen() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaptureScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlurTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRTPixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PopupWindowBlur*))(Il2CppBase() + 0x3A98764))(this);
	}
	template <typename T = void> T StartBlur(uintptr_t texture) {
		return ((T (*)(PopupWindowBlur*, uintptr_t))(Il2CppBase() + 0x3A989D4))(this, texture);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PopupWindowBlur*))(Il2CppBase() + 0x3A98D28))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(PopupWindowBlur*))(Il2CppBase() + 0x3A98EF4))(this);
	}
	template <typename T = uintptr_t> T CaptureScreen() {
		return ((T (*)(PopupWindowBlur*))(Il2CppBase() + 0x3A99658))(this);
	}
	template <typename T = void> T BlurTexture(uintptr_t source, uintptr_t uiTexture) {
		return ((T (*)(PopupWindowBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A991EC))(this, source, uiTexture);
	}
	template <typename T = uintptr_t> static T GetRTPixels(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A99740))(0, rt);
	}

};

}
