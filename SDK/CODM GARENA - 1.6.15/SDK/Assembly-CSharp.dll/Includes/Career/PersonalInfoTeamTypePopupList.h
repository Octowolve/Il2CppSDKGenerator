#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoTeamTypePopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoTeamTypePopupList"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OpenTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ShowingLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PendingTemplate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cacheTypes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BRTeamTypeOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRTeamTypeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBROptions() {
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
		return ((T (*)(PersonalInfoTeamTypePopupList*))(Il2CppBase() + 0x5328290))(this);
	}
	template <typename T = Il2CppString*> static T GetBRTeamTypeString(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5328448))(0, type);
	}
	template <typename T = void> T SetBROptions() {
		return ((T (*)(PersonalInfoTeamTypePopupList*))(Il2CppBase() + 0x53285A4))(this);
	}
	template <typename T = void> T InitPendingItems(uintptr_t grid) {
		return ((T (*)(PersonalInfoTeamTypePopupList*, uintptr_t))(Il2CppBase() + 0x53286BC))(this, grid);
	}
	template <typename T = void> T RefreshContent() {
		return ((T (*)(PersonalInfoTeamTypePopupList*))(Il2CppBase() + 0x5328EA8))(this);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(PersonalInfoTeamTypePopupList*, uintptr_t))(Il2CppBase() + 0x5329050))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(PersonalInfoTeamTypePopupList*, uintptr_t))(Il2CppBase() + 0x5329160))(this, obj);
	}
	template <typename T = void> T OnClickItem(uintptr_t type) {
		return ((T (*)(PersonalInfoTeamTypePopupList*, uintptr_t))(Il2CppBase() + 0x5328C88))(this, type);
	}

};

}
