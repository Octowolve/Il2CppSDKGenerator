#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveWindowControllerByTypecAnonStorey01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveWindowControllerByType>c__AnonStorey0`1"));
	}

	template <typename T = Il2CppString*> T& controllerKeyPrefix() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T m__0(uintptr_t controller) {
		return ((T (*)(RemoveWindowControllerByTypecAnonStorey01*, uintptr_t))(Il2CppBase() + 0x48E6D54))(this, controller);
	}

};

}
