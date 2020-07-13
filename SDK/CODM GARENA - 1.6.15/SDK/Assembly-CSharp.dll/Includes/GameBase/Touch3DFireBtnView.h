#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Touch3DFireBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Touch3DFireBtnView"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> static T& TOUCH_FORCE_HUD_A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TOUCH_FORCE_HUD_B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TOUCH_FORCE_HUD_C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TOUCH_FORCE_HUD_D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(Touch3DFireBtnView*))(Il2CppBase() + 0x27CB968))(this);
	}

};

}
