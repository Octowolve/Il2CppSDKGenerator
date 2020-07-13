#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartAttrib
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Attrib"));
	}

	template <typename T = float> T& m_FireIntervalScale() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_MaxThroughWall() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_PenetrationValue() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_PenetrationDamageModifier() {
		return *(T*)((uintptr_t)this + 0xD8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_AdditionWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartAttrib*, uintptr_t, bool))(Il2CppBase() + 0x24166AC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartAttrib*))(Il2CppBase() + 0x24167E8))(this);
	}
	template <typename T = bool> T ResetWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartAttrib*, bool))(Il2CppBase() + 0x24168A4))(this, active);
	}
	template <typename T = bool> T AdditionWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartAttrib*, bool))(Il2CppBase() + 0x2416B88))(this, active);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartAttrib*, uintptr_t, bool))(Il2CppBase() + 0x2416D7C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ResetWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartAttrib*, bool))(Il2CppBase() + 0x2416D80))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_AdditionWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartAttrib*, bool))(Il2CppBase() + 0x2416D84))(this, P0);
	}

};

}
