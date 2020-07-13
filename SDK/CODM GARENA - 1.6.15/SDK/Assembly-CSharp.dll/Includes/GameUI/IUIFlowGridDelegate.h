#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUIFlowGridDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUIFlowGridDelegate"));
	}


	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(IUIFlowGridDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, grid, path);
	}

};

}
