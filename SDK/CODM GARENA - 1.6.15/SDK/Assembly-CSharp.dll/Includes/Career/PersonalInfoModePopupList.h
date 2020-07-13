#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoModePopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoModePopupList"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MatchRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RankRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MatchGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RankGrid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OpenTrigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ShowingLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PendingTemplate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cacheTypes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPGameModeTypeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVP_MatchOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVP_RankOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PersonalInfoModePopupList*))(Il2CppBase() + 0x5321434))(this);
	}
	template <typename T = Il2CppString*> static T GetPVPGameModeTypeString(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x53215BC))(0, type);
	}
	template <typename T = void> T SetPVP_MatchOptions() {
		return ((T (*)(PersonalInfoModePopupList*))(Il2CppBase() + 0x53216E8))(this);
	}
	template <typename T = void> T SetPVP_RankOptions() {
		return ((T (*)(PersonalInfoModePopupList*))(Il2CppBase() + 0x5321E54))(this);
	}
	template <typename T = void> T InitPendingItems(uintptr_t grid) {
		return ((T (*)(PersonalInfoModePopupList*, uintptr_t))(Il2CppBase() + 0x53218FC))(this, grid);
	}
	template <typename T = void> T RefreshContent() {
		return ((T (*)(PersonalInfoModePopupList*))(Il2CppBase() + 0x5322270))(this);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(PersonalInfoModePopupList*, uintptr_t))(Il2CppBase() + 0x532241C))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(PersonalInfoModePopupList*, uintptr_t))(Il2CppBase() + 0x53224FC))(this, obj);
	}
	template <typename T = void> T OnClickItem(uintptr_t type) {
		return ((T (*)(PersonalInfoModePopupList*, uintptr_t))(Il2CppBase() + 0x53220A0))(this, type);
	}

};

}
