#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyQuickItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyQuickItemView"));
	}

	template <typename T = uintptr_t> T& ItemBrifeLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& HighlightBG() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CommonBG() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIBrife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCountLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB310))(this);
	}
	template <typename T = uintptr_t> T get_DerivedData() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB31C))(this);
	}
	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB3E0))(this);
	}
	template <typename T = void> T RefreshUIBrife() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB498))(this);
	}
	template <typename T = void> T SwitchHighlight() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB6C4))(this);
	}
	template <typename T = void> T RefreshCountLabel() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABB7FC))(this);
	}
	template <typename T = void> T OnListenerClick(uintptr_t go) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABB9C8))(this, go);
	}
	template <typename T = void> T OnListenerDragStart(uintptr_t go) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBA68))(this, go);
	}
	template <typename T = void> T OnListenerDragEnd(uintptr_t go) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBB08))(this, go);
	}
	template <typename T = void> T OnListenerDragOut(uintptr_t go) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBBA8))(this, go);
	}
	template <typename T = void> T OnListenerDragOver(uintptr_t go) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBC48))(this, go);
	}
	template <typename T = void> T OnListenerDrop(uintptr_t go, uintptr_t other) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ABBCE8))(this, go, other);
	}
	template <typename T = void> T OnListenerPress(uintptr_t go, bool state) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t, bool))(Il2CppBase() + 0x1ABBD9C))(this, go, state);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABBE50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUIFull() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABBFC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshCountLabel() {
		return ((T (*)(BRNearbyQuickItemView*))(Il2CppBase() + 0x1ABBFCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerClick(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBFD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDragStart(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBFDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDragEnd(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBFE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDragOut(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBFEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDragOver(uintptr_t P0) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t))(Il2CppBase() + 0x1ABBFF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDrop(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ABBFFC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerPress(uintptr_t P0, bool P1) {
		return ((T (*)(BRNearbyQuickItemView*, uintptr_t, bool))(Il2CppBase() + 0x1ABC004))(this, P0, P1);
	}

};

}
