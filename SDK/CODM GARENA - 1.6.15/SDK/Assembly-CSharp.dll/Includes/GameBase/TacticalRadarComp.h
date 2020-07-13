#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarComp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarComp"));
	}

	template <typename T = uintptr_t> T& m_RadarView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTacticalRadarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetTacticalRadarView(uintptr_t radarView) {
		return ((T (*)(TacticalRadarComp*, uintptr_t))(Il2CppBase() + 0x279868C))(this, radarView);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarComp*))(Il2CppBase() + 0x27988F4))(this);
	}

};

}
