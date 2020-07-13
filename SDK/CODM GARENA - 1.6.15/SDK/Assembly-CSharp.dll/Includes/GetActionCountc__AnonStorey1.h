#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetActionCountcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActionCount>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t action) {
		return ((T (*)(GetActionCountcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x33CF0EC))(this, action);
	}

};

}
