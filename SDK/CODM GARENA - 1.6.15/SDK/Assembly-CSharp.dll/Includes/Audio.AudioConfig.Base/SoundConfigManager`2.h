#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class SoundConfigManager2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "SoundConfigManager`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mDictPawnSoundConfigs() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> static T& kOmitedLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ReadConfigs(Il2CppString* strConfigFilePath) {
		return ((T (*)(SoundConfigManager2*, Il2CppString*))(Il2CppBase() + 0x471C69C))(this, strConfigFilePath);
	}
	template <typename T = void> T ReadConfigs_1(Il2CppString* strConfigFilePath, uintptr_t retSoundConfigs) {
		return ((T (*)(SoundConfigManager2*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x471C7CC))(this, strConfigFilePath, retSoundConfigs);
	}
	template <typename T = void> T ReleaseConfigs() {
		return ((T (*)(SoundConfigManager2*))(Il2CppBase() + 0x471D3C8))(this);
	}
	template <typename T = bool> T HasConfig(uintptr_t iID) {
		return ((T (*)(SoundConfigManager2*, uintptr_t))(Il2CppBase() + 0x471D450))(this, iID);
	}
	template <typename T = uintptr_t> T GetConfig(uintptr_t iID) {
		return ((T (*)(SoundConfigManager2*, uintptr_t))(Il2CppBase() + 0x471D5FC))(this, iID);
	}

};

}
