#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnItemClickcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnItemClick>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t obj) {
		return ((T (*)(OnItemClickcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x22DDC94))(this, obj);
	}

};

}
