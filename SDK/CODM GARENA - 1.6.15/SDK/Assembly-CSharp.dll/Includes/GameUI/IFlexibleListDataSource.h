#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IFlexibleListDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IFlexibleListDataSource"));
	}


	template <typename T = int32_t> T GetCellsNumber() {
		return ((T (*)(IFlexibleListDataSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCellHeightAtIndex(int32_t index) {
		return ((T (*)(IFlexibleListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetCellAtIndex(int32_t index) {
		return ((T (*)(IFlexibleListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
