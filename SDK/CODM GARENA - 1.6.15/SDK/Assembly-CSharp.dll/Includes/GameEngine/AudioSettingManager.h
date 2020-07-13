#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioSettingManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioSettingManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHrtfImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainVolumeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUiVolumeSwitchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBgmVolumeSwitchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSfxVolumeSwitchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceSpeakerSwitchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceMicrophoneSwitchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUiImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgmImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSfxImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpeakerImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMicrophoneImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x35DF790))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DF8A4))(this);
	}
	template <typename T = void> T SetHrtfImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DFF3C))(this);
	}
	template <typename T = bool> T get_HrtfSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0080))(this);
	}
	template <typename T = void> T set_HrtfSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E0338))(this, value);
	}
	template <typename T = float> T get_LocalMainVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0434))(this);
	}
	template <typename T = void> T set_LocalMainVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E057C))(this, value);
	}
	template <typename T = float> T get_LocalUiVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0A10))(this);
	}
	template <typename T = void> T set_LocalUiVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E0B58))(this, value);
	}
	template <typename T = float> T get_LocalBgmVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0C54))(this);
	}
	template <typename T = void> T set_LocalBgmVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E0D9C))(this, value);
	}
	template <typename T = float> T get_LocalSfxVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0E98))(this);
	}
	template <typename T = void> T set_LocalSfxVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E0FE0))(this, value);
	}
	template <typename T = float> T get_LocalSpeakerVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E10DC))(this);
	}
	template <typename T = void> T set_LocalSpeakerVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E1224))(this, value);
	}
	template <typename T = float> T get_LocalMicrophoneVolume() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E1320))(this);
	}
	template <typename T = void> T set_LocalMicrophoneVolume(float value) {
		return ((T (*)(AudioSettingManager*, float))(Il2CppBase() + 0x35E1468))(this, value);
	}
	template <typename T = bool> T get_MainVolumeSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E1564))(this);
	}
	template <typename T = void> T set_MainVolumeSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E16BC))(this, value);
	}
	template <typename T = bool> T get_UiVolumeSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E18C0))(this);
	}
	template <typename T = void> T set_UiVolumeSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E1A18))(this, value);
	}
	template <typename T = bool> T get_BgmVolumeSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E1BF4))(this);
	}
	template <typename T = void> T set_BgmVolumeSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E1D4C))(this, value);
	}
	template <typename T = bool> T get_SfxVolumeSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E1F28))(this);
	}
	template <typename T = void> T set_SfxVolumeSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E2080))(this, value);
	}
	template <typename T = bool> T get_VoiceSpeakerSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E225C))(this);
	}
	template <typename T = void> T set_VoiceSpeakerSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E23B4))(this, value);
	}
	template <typename T = bool> T get_VoiceMicrophoneSwitch() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E2590))(this);
	}
	template <typename T = void> T set_VoiceMicrophoneSwitch(bool value) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E26E8))(this, value);
	}
	template <typename T = void> T OnMainVolumeChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E17BC))(this, isOpen);
	}
	template <typename T = void> T OnUiVolumeSwitchChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E1B18))(this, isOpen);
	}
	template <typename T = void> T OnBgmVolumeSwitchChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E1E4C))(this, isOpen);
	}
	template <typename T = void> T OnSfxVolumeSwitchChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E2180))(this, isOpen);
	}
	template <typename T = void> T OnVoiceSpeakerSwitchChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E24B4))(this, isOpen);
	}
	template <typename T = void> T OnVoiceMicrophoneSwitchChange(bool isOpen) {
		return ((T (*)(AudioSettingManager*, bool))(Il2CppBase() + 0x35E27E8))(this, isOpen);
	}
	template <typename T = void> T SetMainImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DF998))(this);
	}
	template <typename T = void> T SetUiImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DFAF8))(this);
	}
	template <typename T = void> T SetBgmImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DFC64))(this);
	}
	template <typename T = void> T SetSfxImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35DFDD0))(this);
	}
	template <typename T = void> T SetSpeakerImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E06A0))(this);
	}
	template <typename T = void> T SetMicrophoneImpl() {
		return ((T (*)(AudioSettingManager*))(Il2CppBase() + 0x35E0858))(this);
	}

};

}
