#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementWindowRankItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementWindowRankItemView"));
	}

	template <typename T = uintptr_t> T& BtnAdd() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GoMvp() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GoFMvp() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SelfBG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelKill() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LabelNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteNum() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PlayAgainAgreeSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PlayAgainRefuseSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& Reward1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Reward2() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RewardEmpty1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RewardEmpty2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& INFPlayerRankLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CatPlayerRankLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& InfRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CatRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& INF_HumanIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& INF_InfectedIcon() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint64_t> T& m_playerId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& ColorSelfName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NumColorList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpRewardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayAgainState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementWindowRankItemView*))(Il2CppBase() + 0x297FA90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementWindowRankItemView*))(Il2CppBase() + 0x297FC60))(this);
	}
	template <typename T = void> T OnBtnAddClicked() {
		return ((T (*)(SettlementWindowRankItemView*))(Il2CppBase() + 0x297FE30))(this);
	}
	template <typename T = void> T SetUpPlayerInfo(uintptr_t data, bool IsLocalPlayer, bool IsFriend, bool IsInBlack, bool IsSingleTeam, bool IsApplying, bool IsObserver, uintptr_t itemType) {
		return ((T (*)(SettlementWindowRankItemView*, uintptr_t, bool, bool, bool, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x297FFEC))(this, data, IsLocalPlayer, IsFriend, IsInBlack, IsSingleTeam, IsApplying, IsObserver, itemType);
	}
	template <typename T = void> T SetScoreInfo(Il2CppString* score) {
		return ((T (*)(SettlementWindowRankItemView*, Il2CppString*))(Il2CppBase() + 0x2980BA0))(this, score);
	}
	template <typename T = void> T SetUpRewardInfo(Il2CppList<uintptr_t>* items) {
		return ((T (*)(SettlementWindowRankItemView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2980D54))(this, items);
	}
	template <typename T = void> T SetPlayAgainState(uintptr_t state) {
		return ((T (*)(SettlementWindowRankItemView*, uintptr_t))(Il2CppBase() + 0x2981384))(this, state);
	}
	template <typename T = int32_t> static T SetUpRewardInfom__0(uintptr_t i1, uintptr_t i2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2981674))(0, i1, i2);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementWindowRankItemView*))(Il2CppBase() + 0x2981794))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementWindowRankItemView*))(Il2CppBase() + 0x298179C))(this);
	}

};

}
