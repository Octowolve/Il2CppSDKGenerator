#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShotGunFireGroupFireState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShotGunFireGroupFireState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFireGroupEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T DoStopFire() {
		return ((T (*)(ShotGunFireGroupFireState*))(Il2CppBase() + 0x49E7274))(this);
	}
	template <typename T = void> T DoFireGroupEnd() {
		return ((T (*)(ShotGunFireGroupFireState*))(Il2CppBase() + 0x49E7324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(ShotGunFireGroupFireState*))(Il2CppBase() + 0x49E7484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoFireGroupEnd() {
		return ((T (*)(ShotGunFireGroupFireState*))(Il2CppBase() + 0x49E748C))(this);
	}

};

}
