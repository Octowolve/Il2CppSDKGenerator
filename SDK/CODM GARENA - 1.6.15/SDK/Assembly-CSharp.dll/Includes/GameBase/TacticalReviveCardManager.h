#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalReviveCardManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalReviveCardManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& reviveCardSpriteList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& reviveCardsInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReviveCardSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReviveCardSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalReviveCardManager*))(Il2CppBase() + 0x27AD0B0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalReviveCardManager*))(Il2CppBase() + 0x27AD2E8))(this);
	}
	template <typename T = void> T UpdateReviveCardSprite() {
		return ((T (*)(TacticalReviveCardManager*))(Il2CppBase() + 0x27AD3AC))(this);
	}
	template <typename T = void> T UpdateReviveCardSpriteInfo(uintptr_t inReviveCardSprite, uintptr_t inCardInfo) {
		return ((T (*)(TacticalReviveCardManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ADE2C))(this, inReviveCardSprite, inCardInfo);
	}
	template <typename T = void> T UpdateTeamShowOnMap(uintptr_t inSprite, uintptr_t inCardInfo, bool isOutBounds) {
		return ((T (*)(TacticalReviveCardManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27AE0AC))(this, inSprite, inCardInfo, isOutBounds);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalReviveCardManager*))(Il2CppBase() + 0x27AE2D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalReviveCardManager*))(Il2CppBase() + 0x27AE2E0))(this);
	}

};

}
