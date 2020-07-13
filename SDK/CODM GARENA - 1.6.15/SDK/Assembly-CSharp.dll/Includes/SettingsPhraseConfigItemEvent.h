#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsPhraseConfigItemEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsPhraseConfigItemEvent"));
	}

	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SettingsPhraseConfigItemEvent*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2891484))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SettingsPhraseConfigItemEvent*, uintptr_t, int32_t))(Il2CppBase() + 0x2891848))(this, list, userContext);
	}

};

}
