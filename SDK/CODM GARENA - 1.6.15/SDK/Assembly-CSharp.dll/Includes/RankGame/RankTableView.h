#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankTableView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankTableView"));
	}

	template <typename T = uintptr_t> T& RankTabObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BrGrid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SpvpGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ZbGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrTableList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpvpTableList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ZbTableList() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitRankTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTableActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RankTableView*))(Il2CppBase() + 0x38172C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RankTableView*))(Il2CppBase() + 0x38173A4))(this);
	}
	template <typename T = void> T InitRankTab() {
		return ((T (*)(RankTableView*))(Il2CppBase() + 0x38174B8))(this);
	}
	template <typename T = void> T SetRankTableView(uintptr_t modeType, uintptr_t tab) {
		return ((T (*)(RankTableView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3817610))(this, modeType, tab);
	}
	template <typename T = void> T SetRankTabList(uintptr_t tabGrid, Il2CppDictionary<int32_t, Il2CppString*>* Tablist, Il2CppList<uintptr_t>* tableList) {
		return ((T (*)(RankTableView*, uintptr_t, Il2CppDictionary<int32_t, Il2CppString*>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3817958))(this, tabGrid, Tablist, tableList);
	}
	template <typename T = void> T SetRankTableActive(bool isBr, bool isSpvp, bool isZb) {
		return ((T (*)(RankTableView*, bool, bool, bool))(Il2CppBase() + 0x3817E8C))(this, isBr, isSpvp, isZb);
	}

};

}
