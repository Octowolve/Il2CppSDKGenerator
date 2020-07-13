#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicSeasonTabView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicSeasonTabView"));
	}

	template <typename T = uintptr_t> T& SeasonInfoTemplete() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SeasonInfoScrollView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SeasonInfoGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ComicSeasonTableChildList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AddBtn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SubBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AddSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SubSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeekTableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeasonIdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BattlePassComicSeasonTabView*))(Il2CppBase() + 0x328048C))(this);
	}
	template <typename T = void> T SetSeasonInfo() {
		return ((T (*)(BattlePassComicSeasonTabView*))(Il2CppBase() + 0x327B1FC))(this);
	}
	template <typename T = void> T ResetPostion() {
		return ((T (*)(BattlePassComicSeasonTabView*))(Il2CppBase() + 0x3280954))(this);
	}
	template <typename T = void> T SetWeekTableView(int32_t SeasonId) {
		return ((T (*)(BattlePassComicSeasonTabView*, int32_t))(Il2CppBase() + 0x327C6DC))(this, SeasonId);
	}
	template <typename T = void> T OnSeasonIdChange(int32_t index) {
		return ((T (*)(BattlePassComicSeasonTabView*, int32_t))(Il2CppBase() + 0x3280A2C))(this, index);
	}
	template <typename T = void> T OnSubBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassComicSeasonTabView*, uintptr_t))(Il2CppBase() + 0x3280BC0))(this, go);
	}
	template <typename T = void> T OnAddBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassComicSeasonTabView*, uintptr_t))(Il2CppBase() + 0x3280C60))(this, go);
	}
	template <typename T = void> T SetSeasonInfom__0() {
		return ((T (*)(BattlePassComicSeasonTabView*))(Il2CppBase() + 0x3280D00))(this);
	}

};

}
