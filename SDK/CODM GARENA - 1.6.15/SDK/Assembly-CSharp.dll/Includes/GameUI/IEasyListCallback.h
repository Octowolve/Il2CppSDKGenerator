#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyListCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyListCallback"));
	}


	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(IEasyListCallback*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(IEasyListCallback*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, list, userContext);
	}

};

}
