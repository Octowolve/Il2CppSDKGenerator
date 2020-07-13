#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FogTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FogTrigger"));
	}

	template <typename T = bool> T& UseFog() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& FogColor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FogTrigger*))(Il2CppBase() + 0x51BFA64))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(FogTrigger*, uintptr_t, bool))(Il2CppBase() + 0x51BFB54))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FogTrigger*))(Il2CppBase() + 0x51BFC68))(this);
	}

};

}
