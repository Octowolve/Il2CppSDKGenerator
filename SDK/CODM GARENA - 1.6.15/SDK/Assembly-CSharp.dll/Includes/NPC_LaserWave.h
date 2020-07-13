#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCLaserWave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_LaserWave"));
	}

	template <typename T = float> T& LaserLength() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& LaserWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PathArray() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCLaserWave*))(Il2CppBase() + 0x3EE1BA0))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCLaserWave*, uintptr_t))(Il2CppBase() + 0x3EE1CE4))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCLaserWave*))(Il2CppBase() + 0x3EE1EB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCLaserWave*, uintptr_t))(Il2CppBase() + 0x3EE1EBC))(this, P0);
	}

};

}
