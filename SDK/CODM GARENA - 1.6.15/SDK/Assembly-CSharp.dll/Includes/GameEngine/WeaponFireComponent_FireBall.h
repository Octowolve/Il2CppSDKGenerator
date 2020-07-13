#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentFireBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_FireBall"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PawnTriggerMap() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = Il2CppVector3> T& m_PawnPostionCache() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CapsuleColliderGameObjectList() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CapsuleColliderRadius() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CapsuleColliderHeight() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllCapsuleColliderGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCapsuleColliderGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentFireBall*, uintptr_t, bool))(Il2CppBase() + 0x23D0E4C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentFireBall*))(Il2CppBase() + 0x23D14F8))(this);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentFireBall*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23D15B4))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = void> T OnActive(bool active) {
		return ((T (*)(WeaponFireComponentFireBall*, bool))(Il2CppBase() + 0x23D1C70))(this, active);
	}
	template <typename T = void> T RemoveAllCapsuleColliderGameObject() {
		return ((T (*)(WeaponFireComponentFireBall*))(Il2CppBase() + 0x23D1FC0))(this);
	}
	template <typename T = uintptr_t> T CreateCapsuleColliderGameObject(float radius, float height, float offsetY) {
		return ((T (*)(WeaponFireComponentFireBall*, float, float, float))(Il2CppBase() + 0x23D2378))(this, radius, height, offsetY);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentFireBall*, uintptr_t, bool))(Il2CppBase() + 0x23D28F4))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(WeaponFireComponentFireBall*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23D28F8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_OnActive(bool P0) {
		return ((T (*)(WeaponFireComponentFireBall*, bool))(Il2CppBase() + 0x23D293C))(this, P0);
	}

};

}
