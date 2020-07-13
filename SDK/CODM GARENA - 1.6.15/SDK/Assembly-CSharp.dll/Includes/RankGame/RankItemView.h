#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankItemView"));
	}

	template <typename T = uintptr_t> T& rankLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& rankPercentLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& rankLabelAll() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& noRankLable() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RankTop3() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rankLogoList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& headIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& nameLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& gradeLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& gradeLogoSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& levelLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& param1Label() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& extraObj() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& extraSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& extraLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& rankMain() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& selectRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& avatorBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& mindex() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& iconPosition() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelLable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380C6D8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380C7D0))(this);
	}
	template <typename T = void> T SetEasyListData(uintptr_t data, bool isMyRank, uintptr_t tabCsv) {
		return ((T (*)(RankItemView*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x380C918))(this, data, isMyRank, tabCsv);
	}
	template <typename T = void> T SetRankLabel(uintptr_t data, bool isMyRank, uintptr_t tabCsv) {
		return ((T (*)(RankItemView*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x380D564))(this, data, isMyRank, tabCsv);
	}
	template <typename T = void> T SetRankParam(uintptr_t data) {
		return ((T (*)(RankItemView*, uintptr_t))(Il2CppBase() + 0x380D6FC))(this, data);
	}
	template <typename T = void> T SetSelect(bool isSelect) {
		return ((T (*)(RankItemView*, bool))(Il2CppBase() + 0x380E9A4))(this, isSelect);
	}
	template <typename T = void> T ShowRankPercent(uint32_t rankPercent) {
		return ((T (*)(RankItemView*, uint32_t))(Il2CppBase() + 0x380EAF0))(this, rankPercent);
	}
	template <typename T = void> T ShowRankLogo(uint32_t rank) {
		return ((T (*)(RankItemView*, uint32_t))(Il2CppBase() + 0x380ECC8))(this, rank);
	}
	template <typename T = void> T SetLevelLable(Il2CppString* Level) {
		return ((T (*)(RankItemView*, Il2CppString*))(Il2CppBase() + 0x380CED0))(this, Level);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380F318))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(RankItemView*, float))(Il2CppBase() + 0x380F320))(this, dt);
	}
	template <typename T = void> T AdaptationView(int32_t inWidth) {
		return ((T (*)(RankItemView*, int32_t))(Il2CppBase() + 0x380BF58))(this, inWidth);
	}
	template <typename T = void> T AddAnimationTimeGroup() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380B7F0))(this);
	}
	template <typename T = bool> static T SetRankParamm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x380F450))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380F530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(RankItemView*))(Il2CppBase() + 0x380F538))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(RankItemView*, float))(Il2CppBase() + 0x380F540))(this, P0);
	}

};

}
