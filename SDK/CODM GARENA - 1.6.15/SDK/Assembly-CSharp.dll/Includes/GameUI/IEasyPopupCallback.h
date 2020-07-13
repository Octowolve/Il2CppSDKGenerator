#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyPopupCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyPopupCallback"));
	}


	template <typename T = bool> T OnEasyPopupItemClick(uintptr_t controller) {
		return ((T (*)(IEasyPopupCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
