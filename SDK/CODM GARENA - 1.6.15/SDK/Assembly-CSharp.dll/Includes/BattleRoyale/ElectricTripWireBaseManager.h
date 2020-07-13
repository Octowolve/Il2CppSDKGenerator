#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ElectricTripWireBaseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ElectricTripWireBaseManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ElectricTripWireBaseMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LinkerInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetElectricTripWireBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetElectricTripWireBaseOwnerPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncElectricTripWireBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDestroyElectricTripWireBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncRemoveElectricTripWireBaseByTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindElectricTripWireLinkerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveElectricTripWireLinkerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllElectricTripWireLinkerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncElectricTripWireLinkerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddElectricTripWireLinker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveElectricTripWireLinker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterElectricTripWireLinker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnLeaveElectricTripWireLinker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_ElectricTripWireBaseMap() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4A1BC))(this);
	}
	template <typename T = uintptr_t> T GetElectricTripWireBase(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4A1C4))(this, actorID);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4A2C0))(this, actorID);
	}
	template <typename T = void> T Remove(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4A39C))(this, actorID);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4A7F8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4ABD4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4A89C))(this);
	}
	template <typename T = uint32_t> T GetElectricTripWireBaseOwnerPlayerID(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4ADC8))(this, actorID);
	}
	template <typename T = void> T OnSyncElectricTripWireBaseInfo(uintptr_t info) {
		return ((T (*)(ElectricTripWireBaseManager*, uintptr_t))(Il2CppBase() + 0x3D4AEF0))(this, info);
	}
	template <typename T = void> T OnSyncDestroyElectricTripWireBase(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4B3E4))(this, actorID);
	}
	template <typename T = void> T OnSyncRemoveElectricTripWireBaseByTimeout(uint32_t actorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t))(Il2CppBase() + 0x3D4B588))(this, actorID);
	}
	template <typename T = void> T RefreshAllEffect() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4B638))(this);
	}
	template <typename T = uintptr_t> T FindElectricTripWireLinkerInfo(uint32_t srcActorID, uint32_t dstActorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3D49348))(this, srcActorID, dstActorID);
	}
	template <typename T = void> T RemoveElectricTripWireLinkerInfo(uint32_t srcActorID, uint32_t dstActorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3D4BA90))(this, srcActorID, dstActorID);
	}
	template <typename T = void> T RemoveAllElectricTripWireLinkerInfo() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4AC78))(this);
	}
	template <typename T = void> T OnSyncElectricTripWireLinkerInfo(uintptr_t info) {
		return ((T (*)(ElectricTripWireBaseManager*, uintptr_t))(Il2CppBase() + 0x3D4BBB4))(this, info);
	}
	template <typename T = void> T AddElectricTripWireLinker(uint32_t ownerPlayerID, uint32_t srcActorID, uint32_t dstActorID, bool hasBeenTouched) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t, uint32_t, bool))(Il2CppBase() + 0x3D4BCBC))(this, ownerPlayerID, srcActorID, dstActorID, hasBeenTouched);
	}
	template <typename T = void> T RemoveElectricTripWireLinker(uint32_t srcActorID, uint32_t dstActorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3D4BE28))(this, srcActorID, dstActorID);
	}
	template <typename T = void> T OnPawnEnterElectricTripWireLinker(uint32_t playerID, uint32_t oneBaseActorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3D4C12C))(this, playerID, oneBaseActorID);
	}
	template <typename T = void> T OnPawnLeaveElectricTripWireLinker(uint32_t playerID, uint32_t oneBaseActorID) {
		return ((T (*)(ElectricTripWireBaseManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3D4CB88))(this, playerID, oneBaseActorID);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4CC6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ElectricTripWireBaseManager*))(Il2CppBase() + 0x3D4CC74))(this);
	}

};

}
