#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickControllerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickControllerBase"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& CurSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& TrasientTotalCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataListByMerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnArrowOpenBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnArrowCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpperItemHightlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadArrowOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadArrowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBaseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActualBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDyingLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClimbLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpperBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStandbyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MasterSlotType() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetBaseItemData() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0ED64))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataList() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0EE44))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataListByMerge() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0EF60))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0F07C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0F4A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0F558))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0F724))(this);
	}
	template <typename T = void> T OnArrowOpenBtnClick() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0F8F0))(this);
	}
	template <typename T = void> T OnArrowCloseBtnClick() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0FC30))(this);
	}
	template <typename T = bool> T OnGamepadBtnClick() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0FCEC))(this);
	}
	template <typename T = bool> T OnGamepadMoveNext() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B0FDA0))(this);
	}
	template <typename T = bool> T OnGamepadMoveForward() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B100B4))(this);
	}
	template <typename T = void> T SetUpperItemHightlight(int32_t index) {
		return ((T (*)(BRQuickControllerBase*, int32_t))(Il2CppBase() + 0x1B0FF40))(this, index);
	}
	template <typename T = bool> T OnGamepadArrowOpen() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B1024C))(this);
	}
	template <typename T = bool> T OnGamepadArrowClose() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10430))(this);
	}
	template <typename T = void> T OnBaseBtnClick() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10570))(this);
	}
	template <typename T = void> T OnActualBtnClick() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B109B0))(this);
	}
	template <typename T = void> T OnDyingLimit() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10A48))(this);
	}
	template <typename T = void> T OnClimbLimit() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10B08))(this);
	}
	template <typename T = void> T OnUpperBtnClick(int32_t index) {
		return ((T (*)(BRQuickControllerBase*, int32_t))(Il2CppBase() + 0x1B10BC8))(this, index);
	}
	template <typename T = void> T OnStandbyBtnClick(int32_t index) {
		return ((T (*)(BRQuickControllerBase*, int32_t))(Il2CppBase() + 0x1B10E5C))(this, index);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10EFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10FEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10FF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B10FFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRQuickControllerBase*))(Il2CppBase() + 0x1B11004))(this);
	}

};

}
