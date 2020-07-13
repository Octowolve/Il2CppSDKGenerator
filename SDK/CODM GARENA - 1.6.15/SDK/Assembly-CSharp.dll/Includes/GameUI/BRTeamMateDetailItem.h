#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateDetailItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateDetailItem"));
	}

	template <typename T = int32_t> T& SeatIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ColorBg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& HighLighGroup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DeadState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DivingState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& HP() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& HPSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HasUlt() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SkillIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SkillDesc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& SkillName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SkillBar() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& UsingSkillIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& UsingSkillGroup() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& NickName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Career() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& HeadHp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ClothHp() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& HeadPercentBar() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ClothPercentBar() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Assist() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Perk() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Need() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& WantedItemTemplate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WantedItemList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_MaxUltErengy() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CalcWantedList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& HELMET1_ID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& HELMET2_ID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& HELMET3_ID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& VEST1_ID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& VEST2_ID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& VEST3_ID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& BACKPACK1_ID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& BACKPACK2_ID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& BACKPACK3_ID() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& MAGFOR_AR_EX() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& MAGFOR_AR_FAST() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& MAGFOR_SMG_EX() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& MAGFOR_SMG_FAST() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& MAGFOR_SR_EX() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& MAGFOR_SR_FAST() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& MAGFOR_PISTOL_EX() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& MAGFOR_PISTOL_FAST() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& MAGFOR_SG_EX() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& MAGFOR_SG_FAST() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNeedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopThreeWantedItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_SeatIndex() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DCF9E8))(this);
	}
	template <typename T = void> T set_SeatIndex(int32_t value) {
		return ((T (*)(BRTeamMateDetailItem*, int32_t))(Il2CppBase() + 0x3DD0CC0))(this, value);
	}
	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DD0AD0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DD0CC8))(this);
	}
	template <typename T = void> T InitContent(uintptr_t info) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t))(Il2CppBase() + 0x3DCFCF8))(this, info);
	}
	template <typename T = void> T UpdateInfo(uintptr_t info) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t))(Il2CppBase() + 0x3DD0684))(this, info);
	}
	template <typename T = void> T SetNeedInfo() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DD0DE4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DD11B8))(this);
	}
	template <typename T = void> T UpdateState(uintptr_t info) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t))(Il2CppBase() + 0x3DD1720))(this, info);
	}
	template <typename T = void> T UpdateHp(uintptr_t info) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t))(Il2CppBase() + 0x3DD159C))(this, info);
	}
	template <typename T = void> T OnSkillPress(uintptr_t obj, bool bPress) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t, bool))(Il2CppBase() + 0x3DD1854))(this, obj, bPress);
	}
	template <typename T = void> T RemoveOwn(uintptr_t pool) {
		return ((T (*)(BRTeamMateDetailItem*, uintptr_t))(Il2CppBase() + 0x3DD1944))(this, pool);
	}
	template <typename T = Il2CppList<int32_t>*> T GetTopThreeWantedItem() {
		return ((T (*)(BRTeamMateDetailItem*))(Il2CppBase() + 0x3DD2024))(this);
	}

};

}
