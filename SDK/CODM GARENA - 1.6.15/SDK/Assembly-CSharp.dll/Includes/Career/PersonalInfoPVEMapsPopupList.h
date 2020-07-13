#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoPVEMapsPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoPVEMapsPopupList"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_PVEMaps() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEMaps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PersonalInfoPVEMapsPopupList*))(Il2CppBase() + 0x53227B4))(this);
	}
	template <typename T = void> T SetPVEMaps() {
		return ((T (*)(PersonalInfoPVEMapsPopupList*))(Il2CppBase() + 0x532293C))(this);
	}
	template <typename T = void> T InitPendingItems(uintptr_t grid) {
		return ((T (*)(PersonalInfoPVEMapsPopupList*, uintptr_t))(Il2CppBase() + 0x5322A94))(this, grid);
	}
	template <typename T = void> T RefreshContent() {
		return ((T (*)(PersonalInfoPVEMapsPopupList*))(Il2CppBase() + 0x53230D4))(this);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(PersonalInfoPVEMapsPopupList*, uintptr_t))(Il2CppBase() + 0x5323280))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(PersonalInfoPVEMapsPopupList*, uintptr_t))(Il2CppBase() + 0x5323360))(this, obj);
	}
	template <typename T = void> T OnClickItem(Il2CppString* MapName) {
		return ((T (*)(PersonalInfoPVEMapsPopupList*, Il2CppString*))(Il2CppBase() + 0x5322F3C))(this, MapName);
	}
	template <typename T = void> T InitPendingItemsm__0(uintptr_t obj) {
		return ((T (*)(PersonalInfoPVEMapsPopupList*, uintptr_t))(Il2CppBase() + 0x5323438))(this, obj);
	}

};

}
