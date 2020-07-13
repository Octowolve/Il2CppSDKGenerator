#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ConfigUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ConfigUtils"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponConfigFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponConfigData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetWeaponConfigFile(int32_t inItemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A2244))(0, inItemID);
	}
	template <typename T = uintptr_t> static T GetWeaponConfigData(int32_t inItemID, uintptr_t dataType, Il2CppString* configOverride) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x335056C))(0, inItemID, dataType, configOverride);
	}

};

}
