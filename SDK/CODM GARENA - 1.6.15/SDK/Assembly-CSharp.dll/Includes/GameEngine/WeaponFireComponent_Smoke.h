#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentSmoke
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Smoke"));
	}

	template <typename T = float> T& m_SpreadDuration() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_HoldonDuration() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_DisappearDuration() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_MaxRange() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_MinRange() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_SmokeEffectScale() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentSmoke*, uintptr_t, bool))(Il2CppBase() + 0x23FC754))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentSmoke*))(Il2CppBase() + 0x23FC8A0))(this);
	}
	template <typename T = float> T get_SmokeEffectScale() {
		return ((T (*)(WeaponFireComponentSmoke*))(Il2CppBase() + 0x23FC95C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentSmoke*, uintptr_t, bool))(Il2CppBase() + 0x23FC964))(this, P0, P1);
	}

};

}
