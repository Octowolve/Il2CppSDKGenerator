#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGameEventChannel"));
	}

	template <typename T = int32_t> T& TargetStaticItemID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& TargetMoveItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& TargetFlyItemID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNewProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTrainRecordInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TrainingGameEventChannel*))(Il2CppBase() + 0x3D8DC54))(this);
	}
	template <typename T = void> T OnPlayerSyncBuffer(uintptr_t Msg) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8DD64))(this, Msg);
	}
	template <typename T = void> T OnSpawnNewProjectile(uintptr_t Msg) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8E258))(this, Msg);
	}
	template <typename T = void> T OnTrainRecordInfo(uintptr_t msg) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8F604))(this, msg);
	}
	template <typename T = void> T OnSpawnDroppedPickUp(uintptr_t pickupObj, Il2CppQuaternion rot) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x3D8F9D4))(this, pickupObj, rot);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8FB98))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TrainingGameEventChannel*))(Il2CppBase() + 0x3D8FFBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerSyncBuffer(uintptr_t P0) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8FFC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpawnNewProjectile(uintptr_t P0) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D8FFCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpawnDroppedPickUp(uintptr_t P0, Il2CppQuaternion P1) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x3D8FFD4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(TrainingGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3D90000))(this, P0);
	}

};

}
