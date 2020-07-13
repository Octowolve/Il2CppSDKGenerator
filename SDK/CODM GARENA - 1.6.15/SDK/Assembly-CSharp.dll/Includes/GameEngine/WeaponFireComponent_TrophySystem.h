#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentTrophySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_TrophySystem"));
	}

	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_DetectRadius() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_MissleHitRate() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_BombHitRate() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = Il2CppVector3> T& m_BoundBox() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = int32_t> T& m_MaxDefenceTimes() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_PickingTime() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentTrophySystem*, uintptr_t, bool))(Il2CppBase() + 0x2400C94))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentTrophySystem*))(Il2CppBase() + 0x2400DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentTrophySystem*, uintptr_t, bool))(Il2CppBase() + 0x2400EAC))(this, P0, P1);
	}

};

}
