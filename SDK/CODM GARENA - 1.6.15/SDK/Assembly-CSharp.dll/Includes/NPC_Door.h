#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_Door"));
	}

	template <typename T = uintptr_t> T& DoorOpenStyle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LeftOrUpDoor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& RightOrDownDoor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& OpenTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& OpenAndDestroy() {
		return *(T*)((uintptr_t)this + 0x60);
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
		return ((T (*)(NPCDoor*))(Il2CppBase() + 0x3EE1020))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCDoor*, uintptr_t))(Il2CppBase() + 0x3EE114C))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCDoor*))(Il2CppBase() + 0x3EE12DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCDoor*, uintptr_t))(Il2CppBase() + 0x3EE12E0))(this, P0);
	}

};

}
