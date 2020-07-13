#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_VTOL"));
	}

	template <typename T = int32_t> T& m_VTOLPawnID() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentVTOL*, uintptr_t, bool))(Il2CppBase() + 0x2401BB8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentVTOL*))(Il2CppBase() + 0x2401CDC))(this);
	}
	template <typename T = int32_t> T get_VTOLPawnID() {
		return ((T (*)(WeaponFireComponentVTOL*))(Il2CppBase() + 0x2401D98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentVTOL*, uintptr_t, bool))(Il2CppBase() + 0x2401DA0))(this, P0, P1);
	}

};

}
