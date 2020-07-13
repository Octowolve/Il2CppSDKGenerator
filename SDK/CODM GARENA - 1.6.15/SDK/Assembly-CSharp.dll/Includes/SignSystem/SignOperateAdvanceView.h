#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignOperateAdvanceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignOperateAdvanceView"));
	}

	template <typename T = bool> T& IsOperateOnPickup() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CurrTouchingItemView() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentInParents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouchingItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemSigned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnDragStart(uintptr_t obj) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EB9A4))(this, obj);
	}
	template <typename T = void> T OnDragEnd(uintptr_t obj) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EC23C))(this, obj);
	}
	template <typename T = void> T GetHitItemInfo(uintptr_t Hit, uintptr_t ActorID, uintptr_t ItemID, uintptr_t IsInBox, uintptr_t* HitItemView) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x38EC9E4))(this, Hit, ActorID, ItemID, IsInBox, HitItemView);
	}
	template <typename T = uintptr_t> T GetComponentInParents(uintptr_t StartTran, int32_t MaxLevel) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t, int32_t))(Il2CppBase() + 0x335F4E0))(this, StartTran, MaxLevel);
	}
	template <typename T = bool> T CanDrag(uintptr_t pickObj) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38ECE60))(this, pickObj);
	}
	template <typename T = void> T OnDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x38ECF74))(this, obj, delta);
	}
	template <typename T = void> T OnTouchingItemView(uintptr_t HitItemView) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EC7BC))(this, HitItemView);
	}
	template <typename T = bool> T MarkPickupItem(uint32_t ActorID, int32_t ItemID, bool IsInBox) {
		return ((T (*)(SignOperateAdvanceView*, uint32_t, int32_t, bool))(Il2CppBase() + 0x38E201C))(this, ActorID, ItemID, IsInBox);
	}
	template <typename T = bool> T IsItemSigned(int32_t actorId) {
		return ((T (*)(SignOperateAdvanceView*, int32_t))(Il2CppBase() + 0x38EDEC4))(this, actorId);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragStart(uintptr_t P0) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EE508))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragEnd(uintptr_t P0) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EE50C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanDrag(uintptr_t P0) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t))(Il2CppBase() + 0x38EE510))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDrag(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(SignOperateAdvanceView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x38EE658))(this, P0, P1);
	}

};

}
