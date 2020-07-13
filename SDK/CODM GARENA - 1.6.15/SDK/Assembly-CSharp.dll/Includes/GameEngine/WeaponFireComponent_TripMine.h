#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentTripMine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_TripMine"));
	}

	template <typename T = float> T& m_DeployTime() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_BounceTime() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_BounceDistance() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_CoexistNum() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_DetectRange() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = Il2CppVector3> T& m_BoundBox() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& m_MinPassDamage() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_MaxPassDamage() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& m_PassRange() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = float> T& m_DestructTime() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentTripMine*, uintptr_t, bool))(Il2CppBase() + 0x2400948))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentTripMine*))(Il2CppBase() + 0x2400AC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentTripMine*, uintptr_t, bool))(Il2CppBase() + 0x2400B80))(this, P0, P1);
	}

};

}
