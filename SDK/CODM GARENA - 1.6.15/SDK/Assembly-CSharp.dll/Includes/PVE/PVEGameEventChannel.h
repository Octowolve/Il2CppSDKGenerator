#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDiscaredItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKilledEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncWeaponSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncWeaponSkillStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVEGameEventChannel*))(Il2CppBase() + 0x438BDC4))(this);
	}
	template <typename T = void> T OnNotifyDiscaredItem(uintptr_t msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438C0D8))(this, msg);
	}
	template <typename T = void> T OnKilledEnemy(uintptr_t msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438C254))(this, msg);
	}
	template <typename T = void> T OnSkillUsed(uintptr_t msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438C420))(this, msg);
	}
	template <typename T = void> T OnAddArea(uintptr_t msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438C4C0))(this, msg);
	}
	template <typename T = void> T OnDelArea(uintptr_t msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438CB68))(this, msg);
	}
	template <typename T = void> T OnNtfFeedBack(uintptr_t Msg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438CC2C))(this, Msg);
	}
	template <typename T = void> T OnSyncWeaponSkill(uintptr_t matchMsg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438D990))(this, matchMsg);
	}
	template <typename T = void> T OnSyncWeaponSkillStat(uintptr_t matchMsg) {
		return ((T (*)(PVEGameEventChannel*, uintptr_t))(Il2CppBase() + 0x438DAFC))(this, matchMsg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEGameEventChannel*))(Il2CppBase() + 0x438DC5C))(this);
	}

};

}
