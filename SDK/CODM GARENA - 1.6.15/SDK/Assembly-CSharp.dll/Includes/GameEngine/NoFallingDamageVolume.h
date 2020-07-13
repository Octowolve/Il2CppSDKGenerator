#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NoFallingDamageVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NoFallingDamageVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_NoFallingDamage() {
		return ((T (*)(NoFallingDamageVolume*))(Il2CppBase() + 0x271B1E0))(this);
	}
	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(NoFallingDamageVolume*))(Il2CppBase() + 0x271B1E8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NoFallingDamageVolume*))(Il2CppBase() + 0x271B1F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(NoFallingDamageVolume*))(Il2CppBase() + 0x271B2A0))(this);
	}

};

}
