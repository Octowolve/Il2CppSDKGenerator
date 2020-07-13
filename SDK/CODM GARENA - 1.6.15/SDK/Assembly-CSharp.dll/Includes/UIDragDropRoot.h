#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragDropRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragDropRoot"));
	}

	template <typename T = uintptr_t> static T& root() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIDragDropRoot*))(Il2CppBase() + 0x39D8DD8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIDragDropRoot*))(Il2CppBase() + 0x39D8E9C))(this);
	}

};

}
