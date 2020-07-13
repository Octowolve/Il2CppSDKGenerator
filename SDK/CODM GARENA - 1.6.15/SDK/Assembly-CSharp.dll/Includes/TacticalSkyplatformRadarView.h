#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalSkyplatformRadarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalSkyplatformRadarView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalSkyplatformRadarView*))(Il2CppBase() + 0x3F47D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalSkyplatformRadarView*))(Il2CppBase() + 0x3F481D8))(this);
	}

};

}
