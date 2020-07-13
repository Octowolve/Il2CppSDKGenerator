#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class IRoomInfoSelectorControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "IRoomInfoSelectorController_En"));
	}


	template <typename T = bool> T DidSelect(uintptr_t selector, int32_t row) {
		return ((T (*)(IRoomInfoSelectorControllerEn*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, selector, row);
	}
	template <typename T = void> T Expand(uintptr_t selector, bool expand) {
		return ((T (*)(IRoomInfoSelectorControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, selector, expand);
	}

};

}
