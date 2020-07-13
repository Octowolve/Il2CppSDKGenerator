#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMainView"));
	}

	template <typename T = uintptr_t> T& GuildIconSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GuildNameLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GuildLevelInfoLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& GuildExpLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& GuildLevelProgress() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& GuildLevelInfoBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GuildSeasonRankLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& GuildWeekRankLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MemberInfoLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SettingBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SelfNameLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SelfSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SelfLadder() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SelfLv() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DailyActiveLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& WeeklyActiveLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SeasonalActiveLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BillboardInput() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BillboardEditBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& WeekStarPanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& StarView_1() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& StarView_2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& StarView_3() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& InviteBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& TextHtml() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ChatBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildStar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeeklyStarInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableBoardInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdateGuildInfo() {
		return ((T (*)(GuildMainView*))(Il2CppBase() + 0x3BC6EE8))(this);
	}
	template <typename T = void> T UpdateGuildStar() {
		return ((T (*)(GuildMainView*))(Il2CppBase() + 0x3BC73DC))(this);
	}
	template <typename T = void> T SetWeeklyStarInfo(uintptr_t itemView, uintptr_t memberDataStore, int32_t index) {
		return ((T (*)(GuildMainView*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3BC9EF8))(this, itemView, memberDataStore, index);
	}
	template <typename T = void> T UpdateLevelProgress(uintptr_t dataStore) {
		return ((T (*)(GuildMainView*, uintptr_t))(Il2CppBase() + 0x3BC99AC))(this, dataStore);
	}
	template <typename T = void> T SetLadderIcon(int32_t ladder, uintptr_t icon) {
		return ((T (*)(GuildMainView*, int32_t, uintptr_t))(Il2CppBase() + 0x3BC9724))(this, ladder, icon);
	}
	template <typename T = void> T EnableBoardInput(bool enable) {
		return ((T (*)(GuildMainView*, bool))(Il2CppBase() + 0x3BC86E8))(this, enable);
	}

};

}
