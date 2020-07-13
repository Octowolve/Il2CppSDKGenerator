#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentAirstrike
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Airstrike"));
	}

	template <typename T = float> T& m_InitialSpeed() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_LaunchSpeed() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_AutoLaunchTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_InitialMaxAngle() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& m_InitialControlAngle() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& m_LaunchControlAngle() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& m_DamageRadius() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_SelfMinDamage() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_SelfMaxDamage() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_LifeSpan() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_ExplosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& m_FlightAssetID() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& m_ExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& m_InitialControlScale() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_LaunchControlScale() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_SpawnCircleHeight() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_SpawnCircleRadius() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& m_AirStrikeRadius() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& m_AirStrikeTimes() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& m_AirStrikeInterval() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& m_AirStrikeNumPerTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentAirstrike*, uintptr_t, bool))(Il2CppBase() + 0x2EC3A20))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentAirstrike*))(Il2CppBase() + 0x2EC3BE4))(this);
	}
	template <typename T = float> T get_SpawnCircleHeight() {
		return ((T (*)(WeaponFireComponentAirstrike*))(Il2CppBase() + 0x2EC3CA0))(this);
	}
	template <typename T = float> T get_SpawnCircleRadius() {
		return ((T (*)(WeaponFireComponentAirstrike*))(Il2CppBase() + 0x2EC3CA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentAirstrike*, uintptr_t, bool))(Il2CppBase() + 0x2EC3CB0))(this, P0, P1);
	}

};

}
