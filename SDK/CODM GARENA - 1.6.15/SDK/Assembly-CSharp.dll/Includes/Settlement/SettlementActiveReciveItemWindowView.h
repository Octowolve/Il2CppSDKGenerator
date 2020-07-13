#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementActiveReciveItemWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementActiveReciveItemWindowView"));
	}

	template <typename T = uintptr_t> T& WeaponSetRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WeaponSetTitle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ItemIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WeaponSetNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BaseAddNum() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TotalNum() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& totalNumLabelEffect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ConsumeRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& scoreDetail() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScoreAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_settlementDS() {
		return ((T (*)(SettlementActiveReciveItemWindowView*))(Il2CppBase() + 0x3B57578))(this);
	}
	template <typename T = void> T SetItemInfo(uintptr_t detail) {
		return ((T (*)(SettlementActiveReciveItemWindowView*, uintptr_t))(Il2CppBase() + 0x3B56FA0))(this, detail);
	}
	template <typename T = uintptr_t> T ScoreAnim() {
		return ((T (*)(SettlementActiveReciveItemWindowView*))(Il2CppBase() + 0x3B57614))(this);
	}

};

}
