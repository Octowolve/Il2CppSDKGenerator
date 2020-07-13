#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIPerspectiveToggleEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIPerspectiveToggleEffect"));
	}

	template <typename T = uintptr_t> T& mEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPerspectiveToggleEffect*))(Il2CppBase() + 0x3B029A0))(this);
	}
	template <typename T = void> T Toggle() {
		return ((T (*)(UIPerspectiveToggleEffect*))(Il2CppBase() + 0x3B02BA8))(this);
	}

};

}
