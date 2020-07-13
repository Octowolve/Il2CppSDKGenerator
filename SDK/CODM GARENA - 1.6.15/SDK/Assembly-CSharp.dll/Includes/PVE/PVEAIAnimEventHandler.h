#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIAnimEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAnimEventHandler"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLaunchProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoteAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PVEAIAnimEventHandler*))(Il2CppBase() + 0x437078C))(this);
	}
	template <typename T = void> T OnSpawn() {
		return ((T (*)(PVEAIAnimEventHandler*))(Il2CppBase() + 0x437083C))(this);
	}
	template <typename T = void> T OnMeleeAttack() {
		return ((T (*)(PVEAIAnimEventHandler*))(Il2CppBase() + 0x4370AB4))(this);
	}
	template <typename T = void> T OnLaunchProjectile() {
		return ((T (*)(PVEAIAnimEventHandler*))(Il2CppBase() + 0x4370BD8))(this);
	}
	template <typename T = void> T OnRemoteAttack() {
		return ((T (*)(PVEAIAnimEventHandler*))(Il2CppBase() + 0x4370CFC))(this);
	}

};

}
