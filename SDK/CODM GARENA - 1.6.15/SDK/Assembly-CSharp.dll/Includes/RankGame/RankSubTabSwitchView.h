#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankSubTabSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankSubTabSwitchView"));
	}

	template <typename T = uintptr_t> T& RankTabChildObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TabChildScrollView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BrTabChildGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpvpTabChildGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ZbTabChildGrid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrTableChildList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpvpTableChildList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ZbTableChildList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTableChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRankTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTabChildList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTableActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RankSubTabSwitchView*))(Il2CppBase() + 0x3816014))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RankSubTabSwitchView*))(Il2CppBase() + 0x3816100))(this);
	}
	template <typename T = void> T SetTableChild(uintptr_t modeType, int32_t tabChild) {
		return ((T (*)(RankSubTabSwitchView*, uintptr_t, int32_t))(Il2CppBase() + 0x381636C))(this, modeType, tabChild);
	}
	template <typename T = void> T InitRankTab() {
		return ((T (*)(RankSubTabSwitchView*))(Il2CppBase() + 0x3816214))(this);
	}
	template <typename T = void> T SetRankTabChildList(uintptr_t tabGrid, Il2CppDictionary<int32_t, Il2CppString*>* Tablist, Il2CppList<uintptr_t>* tableList) {
		return ((T (*)(RankSubTabSwitchView*, uintptr_t, Il2CppDictionary<int32_t, Il2CppString*>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3816874))(this, tabGrid, Tablist, tableList);
	}
	template <typename T = void> T SetRankTableActive(bool isBr, bool isSpvp, bool isZb) {
		return ((T (*)(RankSubTabSwitchView*, bool, bool, bool))(Il2CppBase() + 0x38165CC))(this, isBr, isSpvp, isZb);
	}

};

}
