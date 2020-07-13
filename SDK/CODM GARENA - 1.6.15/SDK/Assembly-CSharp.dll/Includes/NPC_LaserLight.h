#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCLaserLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_LaserLight"));
	}

	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& EndPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& LaserLength() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& LaserWidth() {
		return *(T*)((uintptr_t)this + 0x6C);
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
		return ((T (*)(NPCLaserLight*))(Il2CppBase() + 0x3EE1888))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCLaserLight*, uintptr_t))(Il2CppBase() + 0x3EE192C))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCLaserLight*))(Il2CppBase() + 0x3EE1AC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCLaserLight*, uintptr_t))(Il2CppBase() + 0x3EE1AC8))(this, P0);
	}

};

}
