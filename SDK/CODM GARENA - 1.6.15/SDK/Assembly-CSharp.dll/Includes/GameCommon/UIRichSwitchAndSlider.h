#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichSwitchAndSlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichSwitchAndSlider"));
	}

	template <typename T = uintptr_t> T& MaskBoxcollider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Slider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetState(uintptr_t rstate) {
		return ((T (*)(UIRichSwitchAndSlider*, uintptr_t))(Il2CppBase() + 0x49FCF6C))(this, rstate);
	}

};

}
