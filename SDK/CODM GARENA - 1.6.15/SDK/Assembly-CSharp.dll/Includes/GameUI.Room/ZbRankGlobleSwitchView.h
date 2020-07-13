#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class ZbRankGlobleSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "ZbRankGlobleSwitchView"));
	}

	template <typename T = uintptr_t> T& blockTab() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& serverTab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZbRankGlobleSwitchView*))(Il2CppBase() + 0x4467EC8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ZbRankGlobleSwitchView*))(Il2CppBase() + 0x4467F60))(this);
	}

};

}
