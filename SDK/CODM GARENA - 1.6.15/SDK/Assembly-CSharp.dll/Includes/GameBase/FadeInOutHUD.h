#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FadeInOutHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FadeInOutHUD"));
	}

	template <typename T = uintptr_t> T& spriteBG() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_FadeInTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeInFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeOutFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBlackScreenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T FadeIn(float blackScreenTime, float fadeTime) {
		return ((T (*)(FadeInOutHUD*, float, float))(Il2CppBase() + 0x31D2E30))(this, blackScreenTime, fadeTime);
	}
	template <typename T = void> T BlackScreen() {
		return ((T (*)(FadeInOutHUD*))(Il2CppBase() + 0x31D3190))(this);
	}
	template <typename T = void> T FadeOut(float fadeTime) {
		return ((T (*)(FadeInOutHUD*, float))(Il2CppBase() + 0x31D33C4))(this, fadeTime);
	}
	template <typename T = void> T InternalFadeIn() {
		return ((T (*)(FadeInOutHUD*))(Il2CppBase() + 0x31D3238))(this);
	}
	template <typename T = void> T InternalFadeOut(float fadeOutTime) {
		return ((T (*)(FadeInOutHUD*, float))(Il2CppBase() + 0x31D347C))(this, fadeOutTime);
	}
	template <typename T = void> T OnFadeInFinished() {
		return ((T (*)(FadeInOutHUD*))(Il2CppBase() + 0x31D3748))(this);
	}
	template <typename T = void> T OnFadeOutFinished() {
		return ((T (*)(FadeInOutHUD*))(Il2CppBase() + 0x31D3810))(this);
	}
	template <typename T = void> T SetBlackScreenAlpha(float alpha) {
		return ((T (*)(FadeInOutHUD*, float))(Il2CppBase() + 0x31D3620))(this, alpha);
	}
	template <typename T = void> T ValidateSize() {
		return ((T (*)(FadeInOutHUD*))(Il2CppBase() + 0x31D2FC4))(this);
	}

};

}
