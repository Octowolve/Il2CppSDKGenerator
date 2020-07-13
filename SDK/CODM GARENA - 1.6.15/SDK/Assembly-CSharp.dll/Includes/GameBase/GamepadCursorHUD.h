#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GamepadCursorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GamepadCursorHUD"));
	}

	template <typename T = uintptr_t> T& CursorSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GamepadCursorHUD*))(Il2CppBase() + 0x3220E90))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(GamepadCursorHUD*))(Il2CppBase() + 0x3220F38))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GamepadCursorHUD*, float))(Il2CppBase() + 0x3220F40))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GamepadCursorHUD*))(Il2CppBase() + 0x32213C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GamepadCursorHUD*, float))(Il2CppBase() + 0x32213D0))(this, P0);
	}

};

}
