#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyListItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyListItemController"));
	}


	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(IEasyListItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, list, index, data);
	}

};

}
