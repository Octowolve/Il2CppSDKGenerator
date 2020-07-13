#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(UITabController*))(Il2CppBase() + 0x3B15EC4))(this);
	}

};

}
