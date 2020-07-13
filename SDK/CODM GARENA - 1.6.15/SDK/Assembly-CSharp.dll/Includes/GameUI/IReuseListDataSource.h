#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IReuseListDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IReuseListDataSource"));
	}


	template <typename T = int32_t> T GetColumnCount() {
		return ((T (*)(IReuseListDataSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetItemsCount() {
		return ((T (*)(IReuseListDataSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetItemData(int32_t index) {
		return ((T (*)(IReuseListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetItemWidth(int32_t index) {
		return ((T (*)(IReuseListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetItemHeight(int32_t index) {
		return ((T (*)(IReuseListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(int32_t index) {
		return ((T (*)(IReuseListDataSource*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
