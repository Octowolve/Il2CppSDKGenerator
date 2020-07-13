#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRInGameSettlementPlayerItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRInGameSettlementPlayerItemView"));
	}

	template <typename T = uintptr_t> T& LabelKill() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& SpriteDead() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& SpriteEscape() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& SpriteSeperator() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& bLocalTeam() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetPlayerStats(uintptr_t data, uint64_t gsp_Guid, uintptr_t gameMode) {
		return ((T (*)(BRInGameSettlementPlayerItemView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3C16184))(this, data, gsp_Guid, gameMode);
	}
	template <typename T = void> T SetBgWidgets(bool isLocalPlayer, uintptr_t camp) {
		return ((T (*)(BRInGameSettlementPlayerItemView*, bool, uintptr_t))(Il2CppBase() + 0x3C162E8))(this, isLocalPlayer, camp);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(BRInGameSettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C16460))(this, playerInfo, gameMode);
	}
	template <typename T = void> T xLuaBaseProxy_SetBgWidgets(bool P0, uintptr_t P1) {
		return ((T (*)(BRInGameSettlementPlayerItemView*, bool, uintptr_t))(Il2CppBase() + 0x3C166B4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRInGameSettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C166BC))(this, P0, P1);
	}

};

}
