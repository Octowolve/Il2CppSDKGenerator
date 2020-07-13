#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeUIWiew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeUIWiew"));
	}

	template <typename T = uintptr_t> T& PerspectiveMenuRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ChatVoiceRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPerspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HomeUIWiew*))(Il2CppBase() + 0x2325268))(this);
	}
	template <typename T = void> T SetPerspective() {
		return ((T (*)(HomeUIWiew*))(Il2CppBase() + 0x2325318))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HomeUIWiew*))(Il2CppBase() + 0x23254BC))(this);
	}

};

}
