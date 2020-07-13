#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIPressHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIPressHandler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnPress(bool isDown) {
		return ((T (*)(UIPressHandler*, bool))(Il2CppBase() + 0x3B03934))(this, isDown);
	}

};

}
