#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Drone"));
	}

	template <typename T = float> T& m_EquipAnimationTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_UltID() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentDrone*, uintptr_t, bool))(Il2CppBase() + 0x23CD784))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentDrone*))(Il2CppBase() + 0x23CD8B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentDrone*, uintptr_t, bool))(Il2CppBase() + 0x23CD970))(this, P0, P1);
	}

};

}
