#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class BRReportWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "BRReportWindowView"));
	}

	template <typename T = uintptr_t> T& BRObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BRGrid() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BRScrollView() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BRTeamMateTemplate() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& BRHitterTemplate() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BRPlayer1Template() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BRPlayer2Template() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& MPObj() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& MPGrid() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& MPScrollView() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& MPTeamMateTemplate() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& MPHitterTemplate() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& MPPlayerTemplate() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& FFAObj() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& FFAGrid() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& FFAScrollView() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& FFAHitterTemplate() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& FFAPlayer1Template() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& FFAPlayer2Template() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& FFAPlayer3Template() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FFAPlayerOtherTemplate() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& IsFirstItem() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRDropedPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRReportWindowView*))(Il2CppBase() + 0x3ABEC28))(this);
	}
	template <typename T = void> T ShowContent(Il2CppList<uintptr_t>* Hitters, Il2CppList<uintptr_t>* Teammates, bool IsBR, bool IsMP, bool IsFFA) {
		return ((T (*)(BRReportWindowView*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x3ABD8DC))(this, Hitters, Teammates, IsBR, IsMP, IsFFA);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRReportWindowView*))(Il2CppBase() + 0x3ABF850))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRReportWindowView*))(Il2CppBase() + 0x3ABF8F8))(this);
	}
	template <typename T = void> T InitPlayers(Il2CppList<uintptr_t>* Hitters, Il2CppList<uintptr_t>* Teammates, bool IsBR, bool IsMP, bool IsFFA) {
		return ((T (*)(BRReportWindowView*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x3ABECCC))(this, Hitters, Teammates, IsBR, IsMP, IsFFA);
	}
	template <typename T = bool> T IsBRDropedPlayer(uintptr_t data) {
		return ((T (*)(BRReportWindowView*, uintptr_t))(Il2CppBase() + 0x3AC0D78))(this, data);
	}
	template <typename T = void> T InitPlayerItems(uintptr_t grid, Il2CppList<uintptr_t>* data, uintptr_t Template, bool IsBR, bool IsMP, bool IsFFA) {
		return ((T (*)(BRReportWindowView*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x3ABFCD8))(this, grid, data, Template, IsBR, IsMP, IsFFA);
	}
	template <typename T = void> static T InitPlayerItemsm__0(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3AC1058))(0, o);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRReportWindowView*))(Il2CppBase() + 0x3AC125C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRReportWindowView*))(Il2CppBase() + 0x3AC1264))(this);
	}

};

}
