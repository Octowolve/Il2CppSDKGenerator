#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUITabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUITabController"));
	}


	template <typename T = void> T WillTabShow() {
		return ((T (*)(IUITabController*))(Il2CppBase() + 0x0))(this);
	}

};

}
