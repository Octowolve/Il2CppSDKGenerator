#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyTouchHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyTouchHUD"));
	}


	template <typename T = void> T EnableEasyTouch() {
		return ((T (*)(IEasyTouchHUD*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DisableEasyTouch() {
		return ((T (*)(IEasyTouchHUD*))(Il2CppBase() + 0x0))(this);
	}

};

}
