#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IncrementRenderQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IncrementRenderQueue"));
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
		return ((T (*)(IncrementRenderQueue*))(Il2CppBase() + 0x49955B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IncrementRenderQueue*))(Il2CppBase() + 0x4995648))(this);
	}

};

}
