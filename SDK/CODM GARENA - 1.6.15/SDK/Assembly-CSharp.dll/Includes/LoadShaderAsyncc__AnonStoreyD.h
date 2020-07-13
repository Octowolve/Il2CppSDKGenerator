#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadShaderAsynccAnonStoreyD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadShaderAsync>c__AnonStoreyD"));
	}

	template <typename T = Il2CppString*> T& shaderName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t s) {
		return ((T (*)(LoadShaderAsynccAnonStoreyD*, uintptr_t))(Il2CppBase() + 0x2B781BC))(this, s);
	}

};

}
