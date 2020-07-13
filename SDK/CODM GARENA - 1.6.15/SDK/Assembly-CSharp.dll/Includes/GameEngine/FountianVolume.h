#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FountianVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FountianVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_NoFallingDamage() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C15D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C15E0))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C1690))(this);
	}
	template <typename T = float> T GetSpeed() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C1780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C1828))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetVelocity() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C1830))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetSpeed() {
		return ((T (*)(FountianVolume*))(Il2CppBase() + 0x51C1844))(this);
	}

};

}
