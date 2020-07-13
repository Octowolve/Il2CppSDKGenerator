#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyItemData"));
	}

	template <typename T = bool> T& IsInBox() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BoxActorID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& AutoPickUpTarget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsRecommend() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& HasDropped() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = float> T& LastCalcDropTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateAutoPickUpTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHasDropped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_ItemDataType() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB29E0))(this);
	}
	template <typename T = bool> T get_IsInBox() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB29E8))(this);
	}
	template <typename T = void> T set_IsInBox(bool value) {
		return ((T (*)(BRNearbyItemData*, bool))(Il2CppBase() + 0x1AB29C8))(this, value);
	}
	template <typename T = int32_t> T get_BoxActorID() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB29F0))(this);
	}
	template <typename T = void> T set_BoxActorID(int32_t value) {
		return ((T (*)(BRNearbyItemData*, int32_t))(Il2CppBase() + 0x1AB29D8))(this, value);
	}
	template <typename T = int32_t> T get_AutoPickUpTarget() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB29F8))(this);
	}
	template <typename T = void> T set_AutoPickUpTarget(int32_t value) {
		return ((T (*)(BRNearbyItemData*, int32_t))(Il2CppBase() + 0x1AB2A00))(this, value);
	}
	template <typename T = bool> T get_IsRecommend() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB2A08))(this);
	}
	template <typename T = void> T set_IsRecommend(bool value) {
		return ((T (*)(BRNearbyItemData*, bool))(Il2CppBase() + 0x1AB2A10))(this, value);
	}
	template <typename T = bool> T get_HasDropped() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB2A18))(this);
	}
	template <typename T = void> T set_HasDropped(bool value) {
		return ((T (*)(BRNearbyItemData*, bool))(Il2CppBase() + 0x1AB2A20))(this, value);
	}
	template <typename T = float> T get_LastCalcDropTime() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB2A28))(this);
	}
	template <typename T = void> T set_LastCalcDropTime(float value) {
		return ((T (*)(BRNearbyItemData*, float))(Il2CppBase() + 0x1AB29D0))(this, value);
	}
	template <typename T = bool> T CalculateAutoPickUpTarget() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB2A30))(this);
	}
	template <typename T = bool> T UpdateHasDropped(bool dropped) {
		return ((T (*)(BRNearbyItemData*, bool))(Il2CppBase() + 0x1AB2B34))(this, dropped);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(BRNearbyItemData*, uintptr_t))(Il2CppBase() + 0x1AB2BEC))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB2FDC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BRNearbyItemData*))(Il2CppBase() + 0x1AB3334))(this);
	}

};

}
