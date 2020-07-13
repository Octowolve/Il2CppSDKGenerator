#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmFirstReChargeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmFirstReChargeView"));
	}

	template <typename T = uintptr_t> T& BonusTip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BonusDesc1() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BonusDesc2() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BuyTip() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GoTo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Close() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BottomTip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodmFirstReChargeView*))(Il2CppBase() + 0x3DE5AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmFirstReChargeView*))(Il2CppBase() + 0x3DE5B8C))(this);
	}

};

}
