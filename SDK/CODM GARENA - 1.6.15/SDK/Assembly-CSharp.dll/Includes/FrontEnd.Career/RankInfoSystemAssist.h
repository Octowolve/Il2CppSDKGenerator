#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class RankInfoSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "RankInfoSystemAssist"));
	}

	template <typename T = uintptr_t> T& m_CacheLevelType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bNeedShowFinishedUpgrade() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FinishedUpgradeLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FinishedUpgradePeakLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpgradeRankNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnlockAfterRankUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockSystemLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnUpgradeRankNotify(uintptr_t res) {
		return ((T (*)(RankInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x2918354))(this, res);
	}
	template <typename T = void> T CheckUnlockAfterRankUp(int32_t level) {
		return ((T (*)(RankInfoSystemAssist*, int32_t))(Il2CppBase() + 0x2918630))(this, level);
	}
	template <typename T = void> T CheckShowLevelUp(uintptr_t* levelUp, uintptr_t* apvpRankUp, uintptr_t* spvpRankUp) {
		return ((T (*)(RankInfoSystemAssist*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x291915C))(this, levelUp, apvpRankUp, spvpRankUp);
	}
	template <typename T = Il2CppString*> T GetUnlockSystemLabel(uintptr_t system) {
		return ((T (*)(RankInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x29193BC))(this, system);
	}
	template <typename T = bool> static T CheckUnlockAfterRankUpm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2919674))(0, it);
	}
	template <typename T = bool> static T CheckUnlockAfterRankUpm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29196A4))(0, it);
	}
	template <typename T = bool> static T CheckUnlockAfterRankUpm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2919774))(0, it);
	}

};

}
