#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IFlexibleListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IFlexibleListController"));
	}


	template <typename T = void> T OnClickCell(int32_t index) {
		return ((T (*)(IFlexibleListController*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
