#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentEachPropertyGridItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentEachPropertyGridItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mCurProgress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowComingAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetControllerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_CurProgress() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C59864))(this);
	}
	template <typename T = void> T set_CurProgress(int32_t value) {
		return ((T (*)(EquipmentEachPropertyGridItemController*, int32_t))(Il2CppBase() + 0x4C5986C))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C59874))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C59918))(this);
	}
	template <typename T = void> T SetCurProgress(bool isNormal) {
		return ((T (*)(EquipmentEachPropertyGridItemController*, bool))(Il2CppBase() + 0x4C59A24))(this, isNormal);
	}
	template <typename T = void> T ShowComingAnimation(Il2CppVector3 from, Il2CppVector3 to, float duration) {
		return ((T (*)(EquipmentEachPropertyGridItemController*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4C59C0C))(this, from, to, duration);
	}
	template <typename T = void> T SetStatus(uintptr_t type) {
		return ((T (*)(EquipmentEachPropertyGridItemController*, uintptr_t))(Il2CppBase() + 0x4C59E44))(this, type);
	}
	template <typename T = Il2CppVector3> T GetViewPosition() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C59F08))(this);
	}
	template <typename T = uintptr_t> T GetControllerView() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C5A050))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C5A0F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EquipmentEachPropertyGridItemController*))(Il2CppBase() + 0x4C5A0F8))(this);
	}

};

}
