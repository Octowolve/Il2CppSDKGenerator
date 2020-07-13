#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IReuseListDataSourceEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IReuseListDataSourceEx"));
	}


	template <typename T = int32_t> T GetColumnCount(uintptr_t list) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t))(Il2CppBase() + 0x0))(this, list);
	}
	template <typename T = int32_t> T GetItemsCount(uintptr_t list) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t))(Il2CppBase() + 0x0))(this, list);
	}
	template <typename T = uintptr_t> T GetItemData(uintptr_t list, int32_t index) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, index);
	}
	template <typename T = int32_t> T GetItemWidth(uintptr_t list, int32_t index) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, index);
	}
	template <typename T = int32_t> T GetItemHeight(uintptr_t list, int32_t index) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(uintptr_t list, int32_t index) {
		return ((T (*)(IReuseListDataSourceEx*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, index);
	}

};

}
