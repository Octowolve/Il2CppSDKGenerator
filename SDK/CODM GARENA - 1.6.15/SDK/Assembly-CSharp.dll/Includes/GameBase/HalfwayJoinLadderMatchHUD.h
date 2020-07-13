#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HalfwayJoinLadderMatchHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HalfwayJoinLadderMatchHUD"));
	}

	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(HalfwayJoinLadderMatchHUD*))(Il2CppBase() + 0x1EE2574))(this);
	}
	template <typename T = uintptr_t> T AutoClose() {
		return ((T (*)(HalfwayJoinLadderMatchHUD*))(Il2CppBase() + 0x1EE2634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(HalfwayJoinLadderMatchHUD*))(Il2CppBase() + 0x1EE271C))(this);
	}

};

}
