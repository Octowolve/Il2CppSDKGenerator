#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackagePlanePawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackagePlanePawnManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PlanePawnMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCarePackagePlanePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCarePackagePlanePawnMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlanePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPlanePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFakeCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_PlanePawnMap() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C3B500))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C62F28))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C63300))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C62FCC))(this);
	}
	template <typename T = bool> T CreateCarePackagePlanePawn(uintptr_t msg) {
		return ((T (*)(CarePackagePlanePawnManager*, uintptr_t))(Il2CppBase() + 0x3C63808))(this, msg);
	}
	template <typename T = void> T UpdateCarePackagePlanePawnMovement(uintptr_t msg) {
		return ((T (*)(CarePackagePlanePawnManager*, uintptr_t))(Il2CppBase() + 0x3C64444))(this, msg);
	}
	template <typename T = void> T RemovePlanePawn(uint32_t actorID) {
		return ((T (*)(CarePackagePlanePawnManager*, uint32_t))(Il2CppBase() + 0x3C61690))(this, actorID);
	}
	template <typename T = void> T DestroyPlanePawn(uint32_t actorID, bool isDestroy) {
		return ((T (*)(CarePackagePlanePawnManager*, uint32_t, bool))(Il2CppBase() + 0x3C633A4))(this, actorID, isDestroy);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(CarePackagePlanePawnManager*, uint32_t))(Il2CppBase() + 0x3C640C8))(this, actorID);
	}
	template <typename T = void> T CreateFakeCarePackage(Il2CppVector3 postion) {
		return ((T (*)(CarePackagePlanePawnManager*, Il2CppVector3))(Il2CppBase() + 0x3C641A4))(this, postion);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C646D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(CarePackagePlanePawnManager*))(Il2CppBase() + 0x3C646DC))(this);
	}

};

}
