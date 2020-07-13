#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IReuseListItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IReuseListItemController"));
	}


	template <typename T = bool> T SetReuseListData(uintptr_t list, int32_t index, uintptr_t data, int32_t width, int32_t height, bool selected) {
		return ((T (*)(IReuseListItemController*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, list, index, data, width, height, selected);
	}
	template <typename T = bool> T SetReuseListItemHide(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(IReuseListItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, list, index, data);
	}
	template <typename T = uintptr_t> T GetReuseListItemContent() {
		return ((T (*)(IReuseListItemController*))(Il2CppBase() + 0x0))(this);
	}

};

}
