#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UAVAirplaneMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UAVAirplaneMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_UAVAirplaneMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUAVAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindByLockPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUAVAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllUAVAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerInWarningDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_UAVAirplaneMap() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D2AB4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D2ABC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D2B84))(this);
	}
	template <typename T = bool> T CreateUAVAirplane(uintptr_t ct, bool IsCounterUAV) {
		return ((T (*)(UAVAirplaneMgr*, uintptr_t, bool))(Il2CppBase() + 0x27D2FB4))(this, ct, IsCounterUAV);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(UAVAirplaneMgr*, uint32_t))(Il2CppBase() + 0x27D3770))(this, actorID);
	}
	template <typename T = uintptr_t> T FindByLockPlayer(uint32_t lockPlayer) {
		return ((T (*)(UAVAirplaneMgr*, uint32_t))(Il2CppBase() + 0x27D3894))(this, lockPlayer);
	}
	template <typename T = void> T RemoveUAVAirplane(uintptr_t ct) {
		return ((T (*)(UAVAirplaneMgr*, uintptr_t))(Il2CppBase() + 0x27D3B44))(this, ct);
	}
	template <typename T = void> T RemoveAllUAVAirplane() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D2C28))(this);
	}
	template <typename T = bool> T IsLocalPlayerInWarningDistance(uint32_t ActorId) {
		return ((T (*)(UAVAirplaneMgr*, uint32_t))(Il2CppBase() + 0x27D3D8C))(this, ActorId);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D3FD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(UAVAirplaneMgr*))(Il2CppBase() + 0x27D3FD8))(this);
	}

};

}
