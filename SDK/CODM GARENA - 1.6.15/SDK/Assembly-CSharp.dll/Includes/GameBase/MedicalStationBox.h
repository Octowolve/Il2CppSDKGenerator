#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MedicalStationBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MedicalStationBox"));
	}

	template <typename T = uintptr_t> T& DroneTakeOffSocket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DroneCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TakeOffOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& TakeOffDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SignalSockets() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& OffCenterScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& m_OwnerID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Drones() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Manager() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ResourceID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LifeSpan() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsSameTeamOwner() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_NeedToPlaySound() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignalSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchCurePlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadEffectReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(MedicalStationBox*))(Il2CppBase() + 0x19C9A04))(this);
	}
	template <typename T = void> T Init(uint32_t actorID, uint32_t ownerID, uintptr_t manager, float lifeSpan, int32_t resourceID) {
		return ((T (*)(MedicalStationBox*, uint32_t, uint32_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x19C9C7C))(this, actorID, ownerID, manager, lifeSpan, resourceID);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(MedicalStationBox*))(Il2CppBase() + 0x19C9AE4))(this);
	}
	template <typename T = void> T SpawnDrone(Il2CppVector3 positionOffset, float takeOffDelay, int32_t index) {
		return ((T (*)(MedicalStationBox*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x19CA004))(this, positionOffset, takeOffDelay, index);
	}
	template <typename T = uintptr_t> T GetSignalSocketTransform(int32_t index) {
		return ((T (*)(MedicalStationBox*, int32_t))(Il2CppBase() + 0x19CAA10))(this, index);
	}
	template <typename T = uintptr_t> T FindDrone(uint32_t playerID) {
		return ((T (*)(MedicalStationBox*, uint32_t))(Il2CppBase() + 0x19CAB38))(this, playerID);
	}
	template <typename T = void> T SwitchCurePlayerState(uint32_t playerID, bool isCuring) {
		return ((T (*)(MedicalStationBox*, uint32_t, bool))(Il2CppBase() + 0x19CADC4))(this, playerID, isCuring);
	}
	template <typename T = void> T SetTransform(Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(MedicalStationBox*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x19CB0C8))(this, position, rotation);
	}
	template <typename T = void> T PlayEffect(float lifeSpan) {
		return ((T (*)(MedicalStationBox*, float))(Il2CppBase() + 0x19CA2D8))(this, lifeSpan);
	}
	template <typename T = void> T OnLoadEffectReady(uintptr_t effect) {
		return ((T (*)(MedicalStationBox*, uintptr_t))(Il2CppBase() + 0x19CB2F4))(this, effect);
	}
	template <typename T = void> T RefreshCampInfo() {
		return ((T (*)(MedicalStationBox*))(Il2CppBase() + 0x19CB664))(this);
	}

};

}
