#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PersonalInfoModePopupItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PersonalInfoModePopupItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOperationDifficultyData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEMapsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetPVPData(uintptr_t type) {
		return ((T (*)(PersonalInfoModePopupItem*, uintptr_t))(Il2CppBase() + 0x3A8E508))(this, type);
	}
	template <typename T = void> T SetBRData(uintptr_t type) {
		return ((T (*)(PersonalInfoModePopupItem*, uintptr_t))(Il2CppBase() + 0x3A8E7AC))(this, type);
	}
	template <typename T = void> T SetPVEData(int32_t GroupId) {
		return ((T (*)(PersonalInfoModePopupItem*, int32_t))(Il2CppBase() + 0x3A8E8FC))(this, GroupId);
	}
	template <typename T = void> T SetOperationDifficultyData(uintptr_t diff) {
		return ((T (*)(PersonalInfoModePopupItem*, uintptr_t))(Il2CppBase() + 0x3A8EA14))(this, diff);
	}
	template <typename T = void> T SetPVEMapsData(Il2CppString* MapName) {
		return ((T (*)(PersonalInfoModePopupItem*, Il2CppString*))(Il2CppBase() + 0x3A8EB64))(this, MapName);
	}
	template <typename T = void> T SetUI(Il2CppString* iconStr, Il2CppString* nameStr) {
		return ((T (*)(PersonalInfoModePopupItem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3A8E620))(this, iconStr, nameStr);
	}

};

}
