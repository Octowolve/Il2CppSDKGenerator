#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickMedicineController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickMedicineController"));
	}

	template <typename T = float> T& m_LastHP() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActualBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStandbyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCompleteSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickMedicineChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickMedicineBloodChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHPChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPLevelChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddOrRemoveChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestExchangeMedicinePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonsEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpperBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataListByMerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B11198))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B1123C))(this);
	}
	template <typename T = uintptr_t> T get_MasterSlotType() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B11244))(this);
	}
	template <typename T = void> T UseMedicine(uintptr_t data) {
		return ((T (*)(BRQuickMedicineController*, uintptr_t))(Il2CppBase() + 0x1B1124C))(this, data);
	}
	template <typename T = void> T OnActualBtnClick() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B11384))(this);
	}
	template <typename T = void> T OnStandbyBtnClick(int32_t index) {
		return ((T (*)(BRQuickMedicineController*, int32_t))(Il2CppBase() + 0x1B1157C))(this, index);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B1161C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B118FC))(this);
	}
	template <typename T = void> T OnGamepadCompleteSelection() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B11B54))(this);
	}
	template <typename T = void> T OnQuickMedicineChanged(uintptr_t msg) {
		return ((T (*)(BRQuickMedicineController*, uintptr_t))(Il2CppBase() + 0x1B11C04))(this, msg);
	}
	template <typename T = void> T OnQuickMedicineBloodChanged(uintptr_t _) {
		return ((T (*)(BRQuickMedicineController*, uintptr_t))(Il2CppBase() + 0x1B12194))(this, _);
	}
	template <typename T = void> T CheckHPChanged(float last, float current) {
		return ((T (*)(BRQuickMedicineController*, float, float))(Il2CppBase() + 0x1B12260))(this, last, current);
	}
	template <typename T = void> T OnHPLevelChanged(uintptr_t level) {
		return ((T (*)(BRQuickMedicineController*, uintptr_t))(Il2CppBase() + 0x1B12390))(this, level);
	}
	template <typename T = void> T OnAddOrRemoveChanged() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B11EA4))(this);
	}
	template <typename T = void> T RequestExchangeMedicinePos(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(BRQuickMedicineController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1B12698))(this, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = void> T SetButtonsEnable(bool enable) {
		return ((T (*)(BRQuickMedicineController*, bool))(Il2CppBase() + 0x1B127B8))(this, enable);
	}
	template <typename T = void> T OnUpperBtnClick(int32_t index) {
		return ((T (*)(BRQuickMedicineController*, int32_t))(Il2CppBase() + 0x1B12A50))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataList() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B12F84))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataListByMerge() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B130E8))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B13358))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B1344C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnActualBtnClick() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B13454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStandbyBtnClick(int32_t P0) {
		return ((T (*)(BRQuickMedicineController*, int32_t))(Il2CppBase() + 0x1B13458))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B1345C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B13460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpperBtnClick(int32_t P0) {
		return ((T (*)(BRQuickMedicineController*, int32_t))(Il2CppBase() + 0x1B13464))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetUpperItemDataList() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B13468))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetUpperItemDataListByMerge() {
		return ((T (*)(BRQuickMedicineController*))(Il2CppBase() + 0x1B1346C))(this);
	}

};

}
