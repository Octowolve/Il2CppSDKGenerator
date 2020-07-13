#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUITabRootController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUITabRootController"));
	}


	template <typename T = void> T OnTabSwitch(int32_t index) {
		return ((T (*)(IUITabRootController*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
