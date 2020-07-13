#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.UnityComponents {

class UIPlayAudioEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.UnityComponents", "UIPlayAudioEvent"));
	}

	template <typename T = Il2CppString*> T& AudioEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsOver() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _isPlayedOnEnable() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_canPlay() {
		return ((T (*)(UIPlayAudioEvent*))(Il2CppBase() + 0x4508358))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlayAudioEvent*))(Il2CppBase() + 0x4508474))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPlayAudioEvent*))(Il2CppBase() + 0x4508638))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIPlayAudioEvent*, bool))(Il2CppBase() + 0x4508790))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIPlayAudioEvent*, bool))(Il2CppBase() + 0x45088D8))(this, isPressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPlayAudioEvent*))(Il2CppBase() + 0x4508A20))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPlayAudioEvent*, bool))(Il2CppBase() + 0x4508B28))(this, isSelected);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UIPlayAudioEvent*))(Il2CppBase() + 0x450854C))(this);
	}
	template <typename T = void> T Play_1(Il2CppString* strEvent) {
		return ((T (*)(UIPlayAudioEvent*, Il2CppString*))(Il2CppBase() + 0x4508C40))(this, strEvent);
	}

};

}
