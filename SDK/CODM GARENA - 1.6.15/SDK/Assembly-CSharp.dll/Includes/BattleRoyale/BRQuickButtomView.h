#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickButtomView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickButtomView"));
	}

	template <typename T = uintptr_t> T& UpperBG() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPassSameSlotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperItemDataListByMerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RefreshBottomDetail(uintptr_t baseItemData, Il2CppList<uintptr_t>* upperItemDataList) {
		return ((T (*)(BRQuickButtomView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B0CB18))(this, baseItemData, upperItemDataList);
	}
	template <typename T = bool> T CheckPassSameSlotItem() {
		return ((T (*)(BRQuickButtomView*))(Il2CppBase() + 0x1B0CDB4))(this);
	}
	template <typename T = void> T RefreshUI(uintptr_t baseItemData, Il2CppList<uintptr_t>* upperItemDataList) {
		return ((T (*)(BRQuickButtomView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B0CE54))(this, baseItemData, upperItemDataList);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUpperItemDataListByMerge(Il2CppList<uintptr_t>* upperItemDataList) {
		return ((T (*)(BRQuickButtomView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B0DDD4))(this, upperItemDataList);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUI(uintptr_t P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(BRQuickButtomView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B0E120))(this, P0, P1);
	}

};

}
