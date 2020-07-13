#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalComp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalComp"));
	}

	template <typename T = uintptr_t> T& m_RadarView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTacticalRadarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteDepthInTacticalRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalComp*))(Il2CppBase() + 0x30CA004))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalComp*))(Il2CppBase() + 0x30CA0A4))(this);
	}
	template <typename T = void> T SetTacticalRadarView(uintptr_t radarView) {
		return ((T (*)(TacticalComp*, uintptr_t))(Il2CppBase() + 0x30CA13C))(this, radarView);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalComp*))(Il2CppBase() + 0x30CA438))(this);
	}
	template <typename T = int32_t> T GetSpriteDepthInTacticalRadar(uintptr_t sprite) {
		return ((T (*)(TacticalComp*, uintptr_t))(Il2CppBase() + 0x30CA4D0))(this, sprite);
	}

};

}
