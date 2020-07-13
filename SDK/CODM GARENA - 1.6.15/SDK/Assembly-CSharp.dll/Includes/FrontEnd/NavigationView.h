#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class NavigationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "NavigationView"));
	}

	template <typename T = uintptr_t> T& NavigationMask() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BgSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NavigationView*))(Il2CppBase() + 0x383BD14))(this);
	}
	template <typename T = void> T ShowMask(bool bShow) {
		return ((T (*)(NavigationView*, bool))(Il2CppBase() + 0x383AFB4))(this, bShow);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NavigationView*))(Il2CppBase() + 0x383BE50))(this);
	}

};

}
