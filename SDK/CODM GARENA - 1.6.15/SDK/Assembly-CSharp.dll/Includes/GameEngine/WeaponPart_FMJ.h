#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartFMJ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_FMJ"));
	}

	template <typename T = float> T& m_DecayScale() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartFMJ*, uintptr_t, bool))(Il2CppBase() + 0x24176CC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartFMJ*))(Il2CppBase() + 0x24177EC))(this);
	}
	template <typename T = bool> T ResetWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartFMJ*, bool))(Il2CppBase() + 0x24178A8))(this, active);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartFMJ*, uintptr_t, bool))(Il2CppBase() + 0x2417A4C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ResetWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartFMJ*, bool))(Il2CppBase() + 0x2417A50))(this, P0);
	}

};

}
