#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsRestoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsRestoreView"));
	}

	template <typename T = uintptr_t> T& TabItemGrid() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TabItemTemplate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllItemList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TabItemList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTabItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllSelectedList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ResetView() {
		return ((T (*)(SettingsRestoreView*))(Il2CppBase() + 0x28B6544))(this);
	}
	template <typename T = void> T ShowTabItem(Il2CppList<uintptr_t>* tabTypeList) {
		return ((T (*)(SettingsRestoreView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28B2818))(this, tabTypeList);
	}
	template <typename T = bool> T CheckAllSelect() {
		return ((T (*)(SettingsRestoreView*))(Il2CppBase() + 0x28B33BC))(this);
	}
	template <typename T = void> T SetAllSelect(bool isSelect) {
		return ((T (*)(SettingsRestoreView*, bool))(Il2CppBase() + 0x28B3504))(this, isSelect);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllSelectedList() {
		return ((T (*)(SettingsRestoreView*))(Il2CppBase() + 0x28B3A58))(this);
	}

};

}
