#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassConf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& chargeConfList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& timeLimitConfList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& curTimeLimitConf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& curChargeConf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mMaxLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mSuperStarRoleID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mAreaId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mSplitLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mLevelCanBuyPassGift() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassConfData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurBattlePassConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurBattlePassChargeConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurBattlePassTimeLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassAreaId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuickBuyPriceConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3261F08))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(BattlePassConf*, int32_t))(Il2CppBase() + 0x3280EE4))(this, value);
	}
	template <typename T = int32_t> T get_SuperStarRoleID() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3262348))(this);
	}
	template <typename T = void> T set_SuperStarRoleID(int32_t value) {
		return ((T (*)(BattlePassConf*, int32_t))(Il2CppBase() + 0x3280EEC))(this, value);
	}
	template <typename T = int32_t> T get_AreaId() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3280EF4))(this);
	}
	template <typename T = void> T set_AreaId(int32_t value) {
		return ((T (*)(BattlePassConf*, int32_t))(Il2CppBase() + 0x3280EFC))(this, value);
	}
	template <typename T = int32_t> T get_SplitLevel() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3280F04))(this);
	}
	template <typename T = void> T set_SplitLevel(int32_t value) {
		return ((T (*)(BattlePassConf*, int32_t))(Il2CppBase() + 0x3280F0C))(this, value);
	}
	template <typename T = int32_t> T get_LevelCanBuyPassGift() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x326AD7C))(this);
	}
	template <typename T = void> T set_LevelCanBuyPassGift(int32_t value) {
		return ((T (*)(BattlePassConf*, int32_t))(Il2CppBase() + 0x3280F14))(this, value);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3280F1C))(this);
	}
	template <typename T = void> T SetBattlePassConfData(Il2CppList<uintptr_t>* chargeConfList, Il2CppList<uintptr_t>* timeLimitConfList) {
		return ((T (*)(BattlePassConf*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x325B44C))(this, chargeConfList, timeLimitConfList);
	}
	template <typename T = void> T UpdateCurBattlePassConf() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3280FE8))(this);
	}
	template <typename T = void> T SetCurBattlePassChargeConf() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3281A38))(this);
	}
	template <typename T = void> T SetCurBattlePassTimeLimit() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3281108))(this);
	}
	template <typename T = void> T SetBattlePassAreaId() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3281CAC))(this);
	}
	template <typename T = uintptr_t> T GetQuickBuyPriceConf() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3281EC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(BattlePassConf*))(Il2CppBase() + 0x3282140))(this);
	}

};

}
