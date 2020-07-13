#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRLevelDoorServerGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRLevelDoorServerGroup"));
	}

	template <typename T = uintptr_t> T& ServerType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRLevelDoorServerGroup*))(Il2CppBase() + 0x418A8C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRLevelDoorServerGroup*))(Il2CppBase() + 0x418AA4C))(this);
	}

};

}
