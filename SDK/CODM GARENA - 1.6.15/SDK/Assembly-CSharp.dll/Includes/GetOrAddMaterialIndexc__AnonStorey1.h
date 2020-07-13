#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetOrAddMaterialIndexcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetOrAddMaterialIndex>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetOrAddMaterialIndexcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3E27368))(this, it);
	}

};

}
