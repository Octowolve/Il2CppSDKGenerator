#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentClusterGrenadeOrigin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ClusterGrenade_Origin"));
	}

	template <typename T = int32_t> T& m_SplitGrenadeNum() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = int32_t> T& m_SplitGrenadeID() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_MinStartFlyAngle() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_MaxStartFlyAngle() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_MinStartFlySpeed() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_MaxStartFlySpeed() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentClusterGrenadeOrigin*, uintptr_t, bool))(Il2CppBase() + 0x2EC60F4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentClusterGrenadeOrigin*))(Il2CppBase() + 0x2EC6244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentClusterGrenadeOrigin*, uintptr_t, bool))(Il2CppBase() + 0x2EC6300))(this, P0, P1);
	}

};

}
