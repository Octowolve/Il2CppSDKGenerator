#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUITabToggleCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUITabToggleCallBack"));
	}


	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(IUITabToggleCallBack*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
