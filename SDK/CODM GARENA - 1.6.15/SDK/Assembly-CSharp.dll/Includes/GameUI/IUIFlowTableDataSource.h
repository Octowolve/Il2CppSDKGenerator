#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUIFlowTableDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUIFlowTableDataSource"));
	}


	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(IUIFlowTableDataSource*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(IUIFlowTableDataSource*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(IUIFlowTableDataSource*, uintptr_t))(Il2CppBase() + 0x0))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(IUIFlowTableDataSource*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, table, row);
	}

};

}
