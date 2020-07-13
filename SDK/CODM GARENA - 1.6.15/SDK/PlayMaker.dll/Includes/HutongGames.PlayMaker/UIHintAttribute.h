#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class UIHintAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "UIHintAttribute"));
	}

	template <typename T = uintptr_t> T& hint() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Hint() {
		return ((T (*)(UIHintAttribute*))(Il2CppBase() + 0x2F2393C))(this);
	}

};

}
