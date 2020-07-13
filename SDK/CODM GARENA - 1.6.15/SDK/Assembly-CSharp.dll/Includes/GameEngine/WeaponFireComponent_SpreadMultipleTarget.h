#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentSpreadMultipleTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_SpreadMultipleTarget"));
	}

	template <typename T = float> T& m_AngleInteval() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& mCurAngleInteval() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFinalRotataion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*, uintptr_t, bool))(Il2CppBase() + 0x23FD8B4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*))(Il2CppBase() + 0x23FD9D4))(this);
	}
	template <typename T = Il2CppQuaternion> T GetFinalRotataion(Il2CppQuaternion rot) {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*, Il2CppQuaternion))(Il2CppBase() + 0x23FDA90))(this, rot);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*))(Il2CppBase() + 0x23FDBC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*, uintptr_t, bool))(Il2CppBase() + 0x23FDC8C))(this, P0, P1);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetFinalRotataion(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*, Il2CppQuaternion))(Il2CppBase() + 0x23FDC90))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentSpreadMultipleTarget*))(Il2CppBase() + 0x23FDCB4))(this);
	}

};

}
