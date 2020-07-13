#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildBuildOrEditView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildBuildOrEditView"));
	}

	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FlagAnimator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CreateBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CreateConsumeNum() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CreateConsumeIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& IconEditBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& QuitGuildBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LevelUpBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LevelDownBtn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ModeList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& NoRestrictToggle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ApplyByMsgToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& EnjoinToggle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GuildNameInput() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GuildNameInputColider() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& GuildBoardInput() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GuildBoardInputColider() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LocationObj() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ProvinceListBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& CityListBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ProvinceLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& CityLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ProvinceListScrollView() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ProvinceListScrollBar() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CityListScrollView() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& CityListScrollBar() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ProvinceGameObject() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& CityGameObject() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProvincePopupSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& CityPopupSprite() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ProvinceBtnBC() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& CityBtnBC() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ProvinceSelectSprite() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& CitySelectSprite() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> static T& MIN_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& m_JoinLevel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_press_time() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_is_press() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& m_is_add() {
		return *(T*)((uintptr_t)this + 0x115);
	}
	template <typename T = float> T& m_press_interval() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& m_level_interval() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBuildView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEditView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllowJoinToggled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedApprovalToggled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuildConsume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetJoinLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Refresh() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E41B10))(this);
	}
	template <typename T = void> T ShowBuildView(uintptr_t dataStore) {
		return ((T (*)(GuildBuildOrEditView*, uintptr_t))(Il2CppBase() + 0x3E44C48))(this, dataStore);
	}
	template <typename T = void> T ShowEditView(uintptr_t dataStore) {
		return ((T (*)(GuildBuildOrEditView*, uintptr_t))(Il2CppBase() + 0x3E44DF0))(this, dataStore);
	}
	template <typename T = void> T ShowInfoView(uintptr_t dataStore) {
		return ((T (*)(GuildBuildOrEditView*, uintptr_t))(Il2CppBase() + 0x3E44F24))(this, dataStore);
	}
	template <typename T = void> T ShowSelf(uintptr_t baseInfo, bool is_edit, bool is_create) {
		return ((T (*)(GuildBuildOrEditView*, uintptr_t, bool, bool))(Il2CppBase() + 0x3E45054))(this, baseInfo, is_edit, is_create);
	}
	template <typename T = uintptr_t> T BuildGuildInfo() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E42F9C))(this);
	}
	template <typename T = uintptr_t> T GetGuildLabel() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E45C74))(this);
	}
	template <typename T = bool> T IsAllowJoinToggled() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E45D68))(this);
	}
	template <typename T = bool> T IsNeedApprovalToggled() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E45E78))(this);
	}
	template <typename T = void> T SetBuildConsume() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E459D4))(this);
	}
	template <typename T = void> T SetJoinLevel(int32_t change, int32_t orignal) {
		return ((T (*)(GuildBuildOrEditView*, int32_t, int32_t))(Il2CppBase() + 0x3E42578))(this, change, orignal);
	}
	template <typename T = void> T HandleLongPress(bool is_press, bool is_add) {
		return ((T (*)(GuildBuildOrEditView*, bool, bool))(Il2CppBase() + 0x3E444F0))(this, is_press, is_add);
	}
	template <typename T = void> T LevelUpdate() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E45F64))(this);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E46090))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(GuildBuildOrEditView*))(Il2CppBase() + 0x3E46098))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GuildBuildOrEditView*, float))(Il2CppBase() + 0x3E460A0))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GuildBuildOrEditView*, float))(Il2CppBase() + 0x3E46220))(this, P0);
	}

};

}
