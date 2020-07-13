#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewTabView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewTabView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& timeGroupsDispatcher() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanels() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetView() {
		return ((T (*)(SettingsNewTabView*))(Il2CppBase() + 0x28AED5C))(this);
	}
	template <typename T = uintptr_t> T InitTab(int32_t uiIndex, int32_t index, Il2CppString* label, void* callback) {
		return ((T (*)(SettingsNewTabView*, int32_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x28AEEC0))(this, uiIndex, index, label, callback);
	}

};

}
