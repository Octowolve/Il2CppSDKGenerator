#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAudioAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAudioAnimation"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& audioSpriteList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& audioStaticSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& originalSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& cacheTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& cacheIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isShowing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& AUDIO_SPRITE_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& spriteShowDeltaTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& voiceName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& voiceType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ShowAnimation() {
		return ((T (*)(UIAudioAnimation*))(Il2CppBase() + 0x29C7C60))(this);
	}
	template <typename T = void> T PlaySound() {
		return ((T (*)(UIAudioAnimation*))(Il2CppBase() + 0x29C7DE8))(this);
	}
	template <typename T = void> T HideAnimation() {
		return ((T (*)(UIAudioAnimation*))(Il2CppBase() + 0x29C7F2C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIAudioAnimation*))(Il2CppBase() + 0x29C80B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIAudioAnimation*))(Il2CppBase() + 0x29C8244))(this);
	}

};

}
