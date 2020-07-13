#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyPassView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyPassView"));
	}

	template <typename T = uintptr_t> T& NormalCell() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PlusCell() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BgSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SeasonSpecial() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelSample() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NormalGrid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PlusGrid() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& itemSample() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalPriceAndCutOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusPriceAndCutOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetNormalPriceAndCutOff(bool isInCurTime, uintptr_t chargeConf) {
		return ((T (*)(BattlePassBuyPassView*, bool, uintptr_t))(Il2CppBase() + 0x326E3B0))(this, isInCurTime, chargeConf);
	}
	template <typename T = void> T SetPlusPriceAndCutOff(bool isInCurTime, uintptr_t chargeConf) {
		return ((T (*)(BattlePassBuyPassView*, bool, uintptr_t))(Il2CppBase() + 0x326E6E4))(this, isInCurTime, chargeConf);
	}

};

}
