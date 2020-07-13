#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BuyResourceWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BuyResourceWindow"));
	}

	template <typename T = uintptr_t> T& BuyOnce() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BuyMore() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_BuyGoldToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_BuyExpertPointToggle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_BuyWeaponPointToggle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& m_TabChangeSound() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_DescribeTipUp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_DescribeTipDown() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BuyMutiBuyNum() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_QuitBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_BuyOnceFavorableSprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_BuyMoreFavorableSprite() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BuyOnceCost() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& BuyMutiCost() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BuyOnceGain() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BuyMutiGain() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMutiBuyNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyOnceCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyMutiCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyOnceGainNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyMutiGainNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetMutiBuyNum(int32_t inNum) {
		return ((T (*)(BuyResourceWindow*, int32_t))(Il2CppBase() + 0x3DD9990))(this, inNum);
	}
	template <typename T = void> T SetBuyOnceCost(int32_t inNum) {
		return ((T (*)(BuyResourceWindow*, int32_t))(Il2CppBase() + 0x3DD9A78))(this, inNum);
	}
	template <typename T = void> T SetBuyMutiCost(int32_t inNum) {
		return ((T (*)(BuyResourceWindow*, int32_t))(Il2CppBase() + 0x3DD9B60))(this, inNum);
	}
	template <typename T = void> T SetBuyOnceGainNum(int32_t inNum) {
		return ((T (*)(BuyResourceWindow*, int32_t))(Il2CppBase() + 0x3DD9C48))(this, inNum);
	}
	template <typename T = void> T SetBuyMutiGainNum(int32_t inNum) {
		return ((T (*)(BuyResourceWindow*, int32_t))(Il2CppBase() + 0x3DD9D30))(this, inNum);
	}

};

}
