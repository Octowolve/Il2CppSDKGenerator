#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUIFlowGridDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUIFlowGridDataSource"));
	}


	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, grid, cell, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t column, int32_t row) {
		return ((T (*)(IUIFlowGridDataSource*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, grid, column, row);
	}

};

}
