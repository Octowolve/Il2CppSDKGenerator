#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SenceLightDir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SenceLightDir"));
	}

	template <typename T = uintptr_t> T& SunlightDir() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SenceLightDir*))(Il2CppBase() + 0x3C07428))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SenceLightDir*))(Il2CppBase() + 0x3C07564))(this);
	}

};

}
