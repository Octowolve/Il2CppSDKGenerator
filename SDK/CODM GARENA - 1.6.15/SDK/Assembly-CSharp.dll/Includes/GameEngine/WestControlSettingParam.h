#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WestControlSettingParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WestControlSettingParam"));
	}

	template <typename T = uintptr_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& TutorialdvanceControlSet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mEnableAdvanceControl() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppDictionary<int32_t, bool>*> T& CategoryFireModeDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CategoryFireModeArr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Getkey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Getkey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCategoryFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCategoryFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCategoryFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEmulatorInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> T Getkey(uintptr_t ctg) {
		return ((T (*)(WestControlSettingParam*, uintptr_t))(Il2CppBase() + 0x33C4624))(this, ctg);
	}
	template <typename T = Il2CppString*> T Getkey_1(Il2CppString* key) {
		return ((T (*)(WestControlSettingParam*, Il2CppString*))(Il2CppBase() + 0x33C4774))(this, key);
	}
	template <typename T = void> T SetValue(uintptr_t ctg, bool value) {
		return ((T (*)(WestControlSettingParam*, uintptr_t, bool))(Il2CppBase() + 0x33C4868))(this, ctg, value);
	}
	template <typename T = bool> T get_EnableAdvanceControl() {
		return ((T (*)(WestControlSettingParam*))(Il2CppBase() + 0x33C49A8))(this);
	}
	template <typename T = void> T set_EnableAdvanceControl(bool value) {
		return ((T (*)(WestControlSettingParam*, bool))(Il2CppBase() + 0x33C49B0))(this, value);
	}
	template <typename T = void> T InitCategoryFireMode(uintptr_t type) {
		return ((T (*)(WestControlSettingParam*, uintptr_t))(Il2CppBase() + 0x33C4B8C))(this, type);
	}
	template <typename T = void> T SetCategoryFireMode(uintptr_t type, bool flag) {
		return ((T (*)(WestControlSettingParam*, uintptr_t, bool))(Il2CppBase() + 0x33C51C0))(this, type, flag);
	}
	template <typename T = bool> T GetCategoryFireMode(uintptr_t type) {
		return ((T (*)(WestControlSettingParam*, uintptr_t))(Il2CppBase() + 0x33C52C0))(this, type);
	}
	template <typename T = void> T ReadSetting(uintptr_t type) {
		return ((T (*)(WestControlSettingParam*, uintptr_t))(Il2CppBase() + 0x33C53A0))(this, type);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WestControlSettingParam*))(Il2CppBase() + 0x33C54EC))(this);
	}
	template <typename T = void> T CheckEmulatorInit(uintptr_t type) {
		return ((T (*)(WestControlSettingParam*, uintptr_t))(Il2CppBase() + 0x33C4EB4))(this, type);
	}

};

}
