#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ITipsDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ITipsDelegate"));
	}


	template <typename T = void> T OnTipsChanged(uintptr_t tipsType, int32_t number) {
		return ((T (*)(ITipsDelegate*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, tipsType, number);
	}

};

}
