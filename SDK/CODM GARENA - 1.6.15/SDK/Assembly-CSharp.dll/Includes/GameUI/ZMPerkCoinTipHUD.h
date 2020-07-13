#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMPerkCoinTipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMPerkCoinTipHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& coinSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& coinNameLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& distanceLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& machine() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& TipHeight() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t perkCoinMachine) {
		return ((T (*)(ZMPerkCoinTipHUD*, uintptr_t))(Il2CppBase() + 0x2A5F1A0))(this, perkCoinMachine);
	}
	template <typename T = void> T SetCoin(uint32_t coinID) {
		return ((T (*)(ZMPerkCoinTipHUD*, uint32_t))(Il2CppBase() + 0x2A5F25C))(this, coinID);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMPerkCoinTipHUD*))(Il2CppBase() + 0x2A5F3C8))(this);
	}

};

}
