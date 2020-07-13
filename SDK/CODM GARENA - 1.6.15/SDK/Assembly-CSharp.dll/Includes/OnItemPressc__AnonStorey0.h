#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnItemPresscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnItemPress>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t obj) {
		return ((T (*)(OnItemPresscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x22DDD48))(this, obj);
	}

};

}
