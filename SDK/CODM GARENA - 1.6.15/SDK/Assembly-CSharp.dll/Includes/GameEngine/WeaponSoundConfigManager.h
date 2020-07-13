#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSoundConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSoundConfigManager"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uint64_t, uintptr_t>*>*> T& m_GameMode2ConfigItemMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBankBeenDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T SearchConfig(uint64_t Key) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x33BB06C))(0, Key);
	}
	template <typename T = bool> static T HasBankBeenDownload(Il2CppString* bankName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33BB2C0))(0, bankName);
	}
	template <typename T = void> T ReadConfigs(Il2CppString* strConfigFilePath) {
		return ((T (*)(WeaponSoundConfigManager*, Il2CppString*))(Il2CppBase() + 0x33BB3E4))(this, strConfigFilePath);
	}
	template <typename T = uintptr_t> T GetConfig(uint64_t iID) {
		return ((T (*)(WeaponSoundConfigManager*, uint64_t))(Il2CppBase() + 0x33BB590))(this, iID);
	}

};

}
