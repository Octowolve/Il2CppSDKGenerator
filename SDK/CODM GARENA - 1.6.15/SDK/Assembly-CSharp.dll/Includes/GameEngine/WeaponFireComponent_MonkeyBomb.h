#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentMonkeyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_MonkeyBomb"));
	}

	template <typename T = float> T& m_ExplodeCountDown() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_AttractRadius() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = bool> T& m_ShouldExploded() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_PerceptionRadius() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = Il2CppVector3> T& m_BoundBox() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = int32_t> T& m_MaxZombieCount() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int64_t> T& m_ZombieRoleId() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int64_t> T& m_SniperZombieRoleId() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& m_SpawnRadius() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& m_ZombieLifeSpan() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = int32_t> T& m_OutOfMapEffectID() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& m_AutoAddStackCDTime() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentMonkeyBomb*, uintptr_t, bool))(Il2CppBase() + 0x23F2974))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentMonkeyBomb*))(Il2CppBase() + 0x23F2B10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentMonkeyBomb*, uintptr_t, bool))(Il2CppBase() + 0x23F2BCC))(this, P0, P1);
	}

};

}
