#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class UIWhiteScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "UIWhiteScreen"));
	}

	template <typename T = uintptr_t> T& WhiteSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ScreenTexture() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& WhiteTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& WhiteAlphaTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& ScreenAlphaTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& WhiteScreenSound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& WhiteScreenSoundStopParameter() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_TimeScale() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& renderTexture() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& mBangAlpha() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_EnableScreenTexture() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_TextureTweener() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ScreenTweener() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_LastBeginKeepAlplaZeroTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_LastKeepAlphaZeroDuration() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_CurrentBlurAmount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_Coroutine() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleScreenTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaptureCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDizzyBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D94748))(this);
	}
	template <typename T = void> T SetTimeScale(float timeScale) {
		return ((T (*)(UIWhiteScreen*, float))(Il2CppBase() + 0x3D94894))(this, timeScale);
	}
	template <typename T = void> T ToggleScreenTexture(bool open) {
		return ((T (*)(UIWhiteScreen*, bool))(Il2CppBase() + 0x3D94940))(this, open);
	}
	template <typename T = void> T SetIntensity(float intensity) {
		return ((T (*)(UIWhiteScreen*, float))(Il2CppBase() + 0x3D949EC))(this, intensity);
	}
	template <typename T = void> T Show(float timeScal, float intensity, bool open) {
		return ((T (*)(UIWhiteScreen*, float, float, bool))(Il2CppBase() + 0x3D94AE4))(this, timeScal, intensity, open);
	}
	template <typename T = void> T StopCoroutine() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D94DD4))(this);
	}
	template <typename T = void> T ShowOver() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D94FBC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D951DC))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D95294))(this);
	}
	template <typename T = uintptr_t> T CaptureCamera() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D94EDC))(this);
	}
	template <typename T = void> T UpdateDizzyBlur() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D953CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D95634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D9563C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(UIWhiteScreen*))(Il2CppBase() + 0x3D95644))(this);
	}

};

}
