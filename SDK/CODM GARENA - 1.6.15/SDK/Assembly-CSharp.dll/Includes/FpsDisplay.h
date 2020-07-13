#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPSDisplay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FPSDisplay"));
	}

	template <typename T = float> T& _deltaTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FPSDisplay*))(Il2CppBase() + 0x3CD9680))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(FPSDisplay*))(Il2CppBase() + 0x3CD9758))(this);
	}

};

}
