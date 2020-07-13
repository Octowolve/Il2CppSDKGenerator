#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyPopupItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyPopupItemController"));
	}


	template <typename T = bool> T SetPopupItemData(uintptr_t data) {
		return ((T (*)(IEasyPopupItemController*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T SetShowing(bool bShowing) {
		return ((T (*)(IEasyPopupItemController*, bool))(Il2CppBase() + 0x0))(this, bShowing);
	}

};

}
