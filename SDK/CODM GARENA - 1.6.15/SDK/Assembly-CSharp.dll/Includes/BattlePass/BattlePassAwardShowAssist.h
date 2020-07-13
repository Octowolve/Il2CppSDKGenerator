#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardShowAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardShowAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_PreLevelForShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CurLevelForShow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonBpAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBpAwardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLevelChangeCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowLevelUpByTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAwardView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BattlePassAwardShowAssist*))(Il2CppBase() + 0x326426C))(this);
	}
	template <typename T = void> T SetLevelCache(int32_t pre, int32_t cur) {
		return ((T (*)(BattlePassAwardShowAssist*, int32_t, int32_t))(Il2CppBase() + 0x3264344))(this, pre, cur);
	}
	template <typename T = void> T ShowCommonBpAward(bool bHasAward, bool bFirstLevel) {
		return ((T (*)(BattlePassAwardShowAssist*, bool, bool))(Il2CppBase() + 0x3259210))(this, bHasAward, bFirstLevel);
	}
	template <typename T = bool> T CheckCanShow(bool bHasAward) {
		return ((T (*)(BattlePassAwardShowAssist*, bool))(Il2CppBase() + 0x3264438))(this, bHasAward);
	}
	template <typename T = bool> T CheckShowBpAwardData(bool bHasAward) {
		return ((T (*)(BattlePassAwardShowAssist*, bool))(Il2CppBase() + 0x3264BC0))(this, bHasAward);
	}
	template <typename T = bool> T CheckLevelChangeCache() {
		return ((T (*)(BattlePassAwardShowAssist*))(Il2CppBase() + 0x3264888))(this);
	}
	template <typename T = bool> T CheckShowLevelUpByTutorial() {
		return ((T (*)(BattlePassAwardShowAssist*))(Il2CppBase() + 0x326497C))(this);
	}
	template <typename T = void> T OpenAwardView(bool bFristLevel) {
		return ((T (*)(BattlePassAwardShowAssist*, bool))(Il2CppBase() + 0x32645AC))(this, bFristLevel);
	}

};

}
