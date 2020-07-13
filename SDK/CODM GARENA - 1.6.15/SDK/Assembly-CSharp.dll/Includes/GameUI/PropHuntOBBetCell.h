#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PropHuntOBBetCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PropHuntOBBetCell"));
	}

	template <typename T = uintptr_t> T& TotalCoinLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BetRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BetCoinLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NotEnoughMoneyTips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NotTips() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NotedRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NotedCoinLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& kNormalTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kWarningTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> T& m_NoteCoin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNotEnoughMoneyTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMoneyEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntOBBetCell*))(Il2CppBase() + 0x3A9D368))(this);
	}
	template <typename T = void> T UpdateViewData(bool isNoted) {
		return ((T (*)(PropHuntOBBetCell*, bool))(Il2CppBase() + 0x3A9D56C))(this, isNoted);
	}
	template <typename T = void> T ShowBetTips(bool flag) {
		return ((T (*)(PropHuntOBBetCell*, bool))(Il2CppBase() + 0x3A9D938))(this, flag);
	}
	template <typename T = void> T ShowNotEnoughMoneyTip(bool flag) {
		return ((T (*)(PropHuntOBBetCell*, bool))(Il2CppBase() + 0x3A9DA5C))(this, flag);
	}
	template <typename T = bool> T IsMoneyEnough() {
		return ((T (*)(PropHuntOBBetCell*))(Il2CppBase() + 0x3A9DB80))(this);
	}

};

}
