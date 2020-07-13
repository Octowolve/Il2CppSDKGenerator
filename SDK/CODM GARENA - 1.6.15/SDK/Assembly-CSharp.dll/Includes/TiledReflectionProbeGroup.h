#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledReflectionProbeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledReflectionProbeGroup"));
	}

	template <typename T = bool> static T& Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ReflectionProbes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TiledReflectionProbeGroup*))(Il2CppBase() + 0x465969C))(this);
	}
	template <typename T = void> T DestroyAll() {
		return ((T (*)(TiledReflectionProbeGroup*))(Il2CppBase() + 0x46597C0))(this);
	}

};

}
