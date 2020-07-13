#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugCamerMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugCamerMover"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0xC);
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
		return ((T (*)(DebugCamerMover*))(Il2CppBase() + 0x41620EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DebugCamerMover*))(Il2CppBase() + 0x4162184))(this);
	}

};

}
