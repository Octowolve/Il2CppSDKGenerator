#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IReuseListCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IReuseListCallback"));
	}


	template <typename T = bool> T OnReuseListItemClick(uintptr_t list, int32_t index) {
		return ((T (*)(IReuseListCallback*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, index);
	}
	template <typename T = void> T OnReuseListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(IReuseListCallback*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, userContext);
	}
	template <typename T = bool> T OnReuseListItemAction(uintptr_t list, uintptr_t data) {
		return ((T (*)(IReuseListCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, list, data);
	}

};

}
