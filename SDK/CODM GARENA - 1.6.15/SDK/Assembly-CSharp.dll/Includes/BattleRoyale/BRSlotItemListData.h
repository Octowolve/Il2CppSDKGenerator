#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSlotItemListData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSlotItemListData"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TotalCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinCountSlotItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Add(uintptr_t data) {
		return ((T (*)(BRSlotItemListData*, uintptr_t))(Il2CppBase() + 0x260AEE4))(this, data);
	}
	template <typename T = uintptr_t> T GetMinCountSlotItemData() {
		return ((T (*)(BRSlotItemListData*))(Il2CppBase() + 0x260B110))(this);
	}

};

}
