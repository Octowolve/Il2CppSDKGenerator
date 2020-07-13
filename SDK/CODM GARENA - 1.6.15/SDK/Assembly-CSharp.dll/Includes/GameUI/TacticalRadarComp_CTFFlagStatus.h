#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompCTFFlagStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_CTFFlagStatus"));
	}

	template <typename T = uintptr_t> T& MineFlagSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EnemyFlagSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MineBaseSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& EnemyBaseSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MineAwayProgress() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EnemyAwayProgress() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& MineFlagPos() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& EnemyFlagPos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_RedRefreshDuration() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_RedRefreshAccSum() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_NearDistance() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_CheckNear() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AAEBC))(this);
	}
	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AAFE8))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AB088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AC6F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AC700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompCTFFlagStatus*))(Il2CppBase() + 0x29AC708))(this);
	}

};

}
