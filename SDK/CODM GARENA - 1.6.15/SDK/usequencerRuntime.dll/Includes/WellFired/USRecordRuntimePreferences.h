#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USRecordRuntimePreferences
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USRecordRuntimePreferences"));
	}

	template <typename T = Il2CppString*> static T& resolutionPref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& frameRatePref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& upscaleAmountPref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& pathPref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& presetNamePref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& presetPref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& selectedPresetPref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& defaultResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& defaultFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& defaultUpscaling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& defaultPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& defaultSelectedPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = int32_t> static T get_SelectedPreset() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A918))(0);
	}
	template <typename T = void> static T set_SelectedPreset(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x486AA90))(0, value);
	}
	template <typename T = Il2CppString*> static T get_PresetName() {
		return ((T (*)(void *))(Il2CppBase() + 0x486AB54))(0);
	}
	template <typename T = void> static T set_PresetName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x486ACE4))(0, value);
	}
	template <typename T = uintptr_t> static T get_Resolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A0EC))(0);
	}
	template <typename T = void> static T set_Resolution(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486ADA8))(0, value);
	}
	template <typename T = uintptr_t> static T get_FrameRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A3E4))(0);
	}
	template <typename T = void> static T set_FrameRate(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486AE6C))(0, value);
	}
	template <typename T = uintptr_t> static T get_UpscaleAmount() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A61C))(0);
	}
	template <typename T = void> static T set_UpscaleAmount(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486AF30))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CapturePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x486AFF4))(0);
	}
	template <typename T = void> static T set_CapturePath(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x486B2A0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Presets() {
		return ((T (*)(void *))(Il2CppBase() + 0x486B364))(0);
	}
	template <typename T = void> static T set_Presets(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x486B4DC))(0, value);
	}
	template <typename T = Il2CppString*> static T GetDefaultCapturePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x486B174))(0);
	}
	template <typename T = void> static T SetNewPreset(int32_t newSelectedPreset) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x486B5A0))(0, newSelectedPreset);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x486BC8C))(0);
	}
	template <typename T = void> static T Destroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x486BE14))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetPresetInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x486B734))(0);
	}
	template <typename T = void> static T SaveAsNewPreset(Il2CppString* name, Il2CppString* capturePath, uintptr_t upscaleAmount, uintptr_t frameRate) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x486BFB8))(0, name, capturePath, upscaleAmount, frameRate);
	}
	template <typename T = void> static T DeletePreset() {
		return ((T (*)(void *))(Il2CppBase() + 0x486C608))(0);
	}
	template <typename T = void> static T SavePresets(Il2CppList<uintptr_t>* presets) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x486CB6C))(0, presets);
	}
	template <typename T = Il2CppString*> static T UniqifyName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x486C298))(0, name);
	}

};

}
