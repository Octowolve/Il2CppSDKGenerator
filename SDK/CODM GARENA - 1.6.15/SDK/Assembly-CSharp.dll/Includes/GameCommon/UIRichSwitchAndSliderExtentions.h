#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichSwitchAndSliderExtentions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichSwitchAndSliderExtentions"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SafeSetState(uintptr_t ss, uintptr_t rstate) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x49FD230))(0, ss, rstate);
	}

};

}
