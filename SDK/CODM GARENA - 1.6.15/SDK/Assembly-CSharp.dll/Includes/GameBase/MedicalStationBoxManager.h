#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MedicalStationBoxManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MedicalStationBoxManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_MedicalBoxMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateMedicalBoxRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateMedicalBoxNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMedicalBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMedicalBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchCurePlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_MedicalBoxMap() {
		return ((T (*)(MedicalStationBoxManager*))(Il2CppBase() + 0x19CB880))(this);
	}
	template <typename T = void> T ProcessServerMessage(uintptr_t serverData) {
		return ((T (*)(MedicalStationBoxManager*, uintptr_t))(Il2CppBase() + 0x19CB888))(this, serverData);
	}
	template <typename T = Il2CppQuaternion> T CalculateMedicalBoxRotation(Il2CppVector3 serverPosition) {
		return ((T (*)(MedicalStationBoxManager*, Il2CppVector3))(Il2CppBase() + 0x19CC0C0))(this, serverPosition);
	}
	template <typename T = bool> T CalculateMedicalBoxNormal(Il2CppVector3 position, uintptr_t hitNormal) {
		return ((T (*)(MedicalStationBoxManager*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x19CC460))(this, position, hitNormal);
	}
	template <typename T = void> T CreateMedicalBox(uint32_t actorID, uint32_t ownerID, Il2CppVector3 position, Il2CppQuaternion rotation, float lifeSpan, uint32_t skinID, int32_t resourceID) {
		return ((T (*)(MedicalStationBoxManager*, uint32_t, uint32_t, Il2CppVector3, Il2CppQuaternion, float, uint32_t, int32_t))(Il2CppBase() + 0x19CBCE8))(this, actorID, ownerID, position, rotation, lifeSpan, skinID, resourceID);
	}
	template <typename T = void> T RemoveMedicalBox(uint32_t actorID) {
		return ((T (*)(MedicalStationBoxManager*, uint32_t))(Il2CppBase() + 0x19CA5CC))(this, actorID);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MedicalStationBoxManager*))(Il2CppBase() + 0x19CC698))(this);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(MedicalStationBoxManager*, uint32_t))(Il2CppBase() + 0x19CBC0C))(this, actorID);
	}
	template <typename T = void> T SwitchCurePlayerState(uint32_t medicalBoxActorID, uint32_t playerID, bool isCuring) {
		return ((T (*)(MedicalStationBoxManager*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x19CC9C8))(this, medicalBoxActorID, playerID, isCuring);
	}
	template <typename T = void> T RefreshCampInfo() {
		return ((T (*)(MedicalStationBoxManager*))(Il2CppBase() + 0x19CCAF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MedicalStationBoxManager*))(Il2CppBase() + 0x19CCD50))(this);
	}

};

}
