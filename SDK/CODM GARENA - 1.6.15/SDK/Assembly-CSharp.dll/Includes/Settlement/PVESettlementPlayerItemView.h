#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementPlayerItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementPlayerItemView"));
	}

	template <typename T = uintptr_t> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LabelSurvive() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelBossDamage() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelAllDamage() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelDamage() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& BtnDrops() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& GoNoDrops() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& GoWithDrops() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gains() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGainClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVESettlementPlayerItemView*))(Il2CppBase() + 0x3B35894))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVESettlementPlayerItemView*))(Il2CppBase() + 0x3B35A34))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t playerInfo, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(PVESettlementPlayerItemView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3B2EDD8))(this, playerInfo, matchGuid, gameMode);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(PVESettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B35BD4))(this, playerInfo, gameMode);
	}
	template <typename T = void> T OnBtnGainClick() {
		return ((T (*)(PVESettlementPlayerItemView*))(Il2CppBase() + 0x3B35F58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVESettlementPlayerItemView*))(Il2CppBase() + 0x3B36128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVESettlementPlayerItemView*))(Il2CppBase() + 0x3B36130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVESettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B36138))(this, P0, P1);
	}

};

}
