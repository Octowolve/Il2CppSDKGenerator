#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCRoller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_Roller"));
	}

	template <typename T = uintptr_t> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& EndPos() {
		return *(T*)((uintptr_t)this + 0x54);
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
		return ((T (*)(NPCRoller*))(Il2CppBase() + 0x3EE1F60))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCRoller*, uintptr_t))(Il2CppBase() + 0x3EE2004))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCRoller*))(Il2CppBase() + 0x3EE217C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCRoller*, uintptr_t))(Il2CppBase() + 0x3EE2180))(this, P0);
	}

};

}
