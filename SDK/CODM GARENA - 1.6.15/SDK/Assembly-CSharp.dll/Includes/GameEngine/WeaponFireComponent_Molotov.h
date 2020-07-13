#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentMolotov
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Molotov"));
	}

	template <typename T = float> T& m_FireAreaRadius() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_FireAreaLife() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_DamageSpeed() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_DamageZombieSpeed() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = int32_t> T& m_ResourceID() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_DamageInterval() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ExtraDamageBuffIds() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentMolotov*, uintptr_t, bool))(Il2CppBase() + 0x23F2648))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentMolotov*))(Il2CppBase() + 0x23F27D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentMolotov*, uintptr_t, bool))(Il2CppBase() + 0x23F2890))(this, P0, P1);
	}

};

}
