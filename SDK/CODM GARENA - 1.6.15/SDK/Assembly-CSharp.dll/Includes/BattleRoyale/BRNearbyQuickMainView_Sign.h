#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyQuickMainViewSign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyQuickMainView_Sign"));
	}

	template <typename T = uintptr_t> T& MarkBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& LocalOrigPos() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragEnd_Sign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEasyTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOverPickupItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignSystemEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRNearbyQuickMainViewSign*))(Il2CppBase() + 0x1ABE8A4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRNearbyQuickMainViewSign*))(Il2CppBase() + 0x1ABEBC8))(this);
	}
	template <typename T = void> T EasyTouch_On_DragStart(uintptr_t gesture) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABECE0))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_DragEnd_Sign(uintptr_t gesture) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABEDB0))(this, gesture);
	}
	template <typename T = bool> T CanEasyTouchDrag(uintptr_t pickObj) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF2E0))(this, pickObj);
	}
	template <typename T = void> T EasyTouch_On_Drag(uintptr_t gesture) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF3F4))(this, gesture);
	}
	template <typename T = void> T UpdateMarkUI(bool IsMarkBtnSelceted) {
		return ((T (*)(BRNearbyQuickMainViewSign*, bool))(Il2CppBase() + 0x1ABE050))(this, IsMarkBtnSelceted);
	}
	template <typename T = void> T OnDragOverPickupItemView(uintptr_t PickupItemView) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF6F0))(this, PickupItemView);
	}
	template <typename T = bool> T MarkPickupItem(uint32_t ActorID, int32_t ItemID, bool IsInBox) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uint32_t, int32_t, bool))(Il2CppBase() + 0x1ABF114))(this, ActorID, ItemID, IsInBox);
	}
	template <typename T = bool> T IsSignSystemEnable() {
		return ((T (*)(BRNearbyQuickMainViewSign*))(Il2CppBase() + 0x1ABEA70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRNearbyQuickMainViewSign*))(Il2CppBase() + 0x1ABF790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRNearbyQuickMainViewSign*))(Il2CppBase() + 0x1ABF798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_DragStart(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF7A0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanEasyTouchDrag(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF7A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_Drag(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickMainViewSign*, uintptr_t))(Il2CppBase() + 0x1ABF7B0))(this, P0);
	}

};

}
