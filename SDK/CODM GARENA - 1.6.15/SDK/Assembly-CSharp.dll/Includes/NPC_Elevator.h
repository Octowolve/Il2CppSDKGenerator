#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCElevator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_Elevator"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_TargetPositionList() {
		return *(T*)((uintptr_t)this + 0x50);
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
		return ((T (*)(NPCElevator*))(Il2CppBase() + 0x3EE13B8))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCElevator*, uintptr_t))(Il2CppBase() + 0x3EE14E4))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCElevator*))(Il2CppBase() + 0x3EE16A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCElevator*, uintptr_t))(Il2CppBase() + 0x3EE16A8))(this, P0);
	}

};

}
