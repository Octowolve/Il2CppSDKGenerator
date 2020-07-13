#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class IRoomInfoSelectorDataSourceEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "IRoomInfoSelectorDataSource_En"));
	}


	template <typename T = int32_t> T CellNumber(uintptr_t selector) {
		return ((T (*)(IRoomInfoSelectorDataSourceEn*, uintptr_t))(Il2CppBase() + 0x0))(this, selector);
	}
	template <typename T = uintptr_t> T CellData(uintptr_t selector, int32_t row) {
		return ((T (*)(IRoomInfoSelectorDataSourceEn*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, selector, row);
	}
	template <typename T = int32_t> T CellHeight(uintptr_t selector) {
		return ((T (*)(IRoomInfoSelectorDataSourceEn*, uintptr_t))(Il2CppBase() + 0x0))(this, selector);
	}
	template <typename T = int32_t> T OuterGlowHeight(uintptr_t selector) {
		return ((T (*)(IRoomInfoSelectorDataSourceEn*, uintptr_t))(Il2CppBase() + 0x0))(this, selector);
	}

};

}
