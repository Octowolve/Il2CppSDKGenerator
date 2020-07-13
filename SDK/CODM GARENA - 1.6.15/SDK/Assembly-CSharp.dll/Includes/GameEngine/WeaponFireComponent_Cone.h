#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentCone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Cone"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_ConeRaduises() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = int32_t> static T& m_RaycastNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_CenterRaycastNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_CenterRaduis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_startPosOffset() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentCone*, uintptr_t, bool))(Il2CppBase() + 0x2EC66B4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentCone*))(Il2CppBase() + 0x2EC6828))(this);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentCone*, Il2CppString*))(Il2CppBase() + 0x2EC68E4))(this, path);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentCone*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x2EC6A0C))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentCone*, uintptr_t, bool))(Il2CppBase() + 0x2EC777C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentCone*, Il2CppString*))(Il2CppBase() + 0x2EC7784))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(WeaponFireComponentCone*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x2EC778C))(this, P0, P1, P2, P3, P4);
	}

};

}
