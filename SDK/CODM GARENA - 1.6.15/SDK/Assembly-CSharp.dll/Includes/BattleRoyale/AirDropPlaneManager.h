#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class AirDropPlaneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "AirDropPlaneManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PlanePawnMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_CurrentUsingShift() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlanePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveServerAirPlaneMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_PlanePawnMap() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C59104))(this);
	}
	template <typename T = Il2CppVector3> T get_CurrentUsingShift() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C5910C))(this);
	}
	template <typename T = void> T RemovePlanePawn(uint32_t actorID) {
		return ((T (*)(AirDropPlaneManager*, uint32_t))(Il2CppBase() + 0x2C59120))(this, actorID);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(AirDropPlaneManager*, uint32_t))(Il2CppBase() + 0x2C592D0))(this, actorID);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C593AC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C59444))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C59890))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C594E8))(this);
	}
	template <typename T = void> T OnReceiveServerAirPlaneMessage(uintptr_t info) {
		return ((T (*)(AirDropPlaneManager*, uintptr_t))(Il2CppBase() + 0x2C59934))(this, info);
	}
	template <typename T = void> T ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(AirDropPlaneManager*, Il2CppVector3))(Il2CppBase() + 0x2C5A4F4))(this, shift);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C5A828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C5A830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AirDropPlaneManager*))(Il2CppBase() + 0x2C5A838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyWorldShift(Il2CppVector3 P0) {
		return ((T (*)(AirDropPlaneManager*, Il2CppVector3))(Il2CppBase() + 0x2C5A840))(this, P0);
	}

};

}
