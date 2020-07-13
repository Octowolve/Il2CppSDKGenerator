#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpinBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpinBtnView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpinBtnView*))(Il2CppBase() + 0x30A0988))(this);
	}
	template <typename T = void> T SpinButtonClick(uintptr_t obj) {
		return ((T (*)(SpinBtnView*, uintptr_t))(Il2CppBase() + 0x30A0C3C))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SpinBtnView*))(Il2CppBase() + 0x30A0DA0))(this);
	}

};

}
