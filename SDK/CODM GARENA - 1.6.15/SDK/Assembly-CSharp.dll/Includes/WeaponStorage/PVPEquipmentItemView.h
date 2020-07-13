#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPEquipmentItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPEquipmentItemView"));
	}

	template <typename T = uintptr_t> T& EquipmentName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NoContentText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelectYes() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LevelLock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ComsumeLock() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ComsumeNum() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ScoreNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SelectBg() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& NormalBg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& UnlockBg() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& NoContentBg() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelLockOrConsumLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVPEquipmentItemView*))(Il2CppBase() + 0x4C5E1D0))(this);
	}
	template <typename T = void> T SetBgStatus(uintptr_t type) {
		return ((T (*)(PVPEquipmentItemView*, uintptr_t))(Il2CppBase() + 0x4C5E32C))(this, type);
	}
	template <typename T = void> T SetLevelLockOrConsumLock(bool isReachLevel) {
		return ((T (*)(PVPEquipmentItemView*, bool))(Il2CppBase() + 0x4C5E43C))(this, isReachLevel);
	}
	template <typename T = void> T SetNoContent(bool bNoContent) {
		return ((T (*)(PVPEquipmentItemView*, bool))(Il2CppBase() + 0x4C5E568))(this, bNoContent);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPEquipmentItemView*))(Il2CppBase() + 0x4C5E7B0))(this);
	}

};

}
