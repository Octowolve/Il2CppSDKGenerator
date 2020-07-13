#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUIFlowTableDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUIFlowTableDelegate"));
	}


	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(IUIFlowTableDelegate*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x0))(this, table, row, worldPos);
	}

};

}
