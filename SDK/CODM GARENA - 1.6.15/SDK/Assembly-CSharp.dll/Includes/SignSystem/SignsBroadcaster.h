#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignsBroadcaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignsBroadcaster"));
	}

	template <typename T = float> T& NearMaxDist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BroadcastDistLOD() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SceneObjectTactiaclEnemyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& NormalTacticalEnemyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& SignsBroadcasterInst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfAddMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfDelMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfResponseMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetECLEventTypeForAddMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneObjectEventTypeNearDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneObjectEventTypeFarDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneObjectTacticalEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNormalTacticalEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleEventTypeNearDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleEventTypeFarDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignInNearDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBroadcastDistLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(SignsBroadcaster*, uintptr_t, bool))(Il2CppBase() + 0x38F4318))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(SignsBroadcaster*))(Il2CppBase() + 0x38F4568))(this);
	}
	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F4624))(0);
	}
	template <typename T = void> T OnReceiveNtfAddMark(uintptr_t SignCom) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F4780))(this, SignCom);
	}
	template <typename T = void> T OnReceiveNtfDelMark(uint32_t DelPlayerID, bool IsCancel) {
		return ((T (*)(SignsBroadcaster*, uint32_t, bool))(Il2CppBase() + 0x38F5088))(this, DelPlayerID, IsCancel);
	}
	template <typename T = void> T OnReceiveNtfResponseMark(uintptr_t SignCom, uint32_t ResponsePlayerID) {
		return ((T (*)(SignsBroadcaster*, uintptr_t, uint32_t))(Il2CppBase() + 0x38F52CC))(this, SignCom, ResponsePlayerID);
	}
	template <typename T = uintptr_t> T GetECLEventTypeForAddMark(uintptr_t SignCom) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F4D20))(this, SignCom);
	}
	template <typename T = uintptr_t> T GetSceneObjectEventTypeNearDist(uintptr_t ObjectType, uint32_t TargetID, uint32_t SubObjectType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x38F56F8))(this, ObjectType, TargetID, SubObjectType);
	}
	template <typename T = uintptr_t> T GetSceneObjectEventTypeFarDist(uintptr_t ObjectType, uint32_t TargetID, uint32_t SubObjectType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x38F58F0))(this, ObjectType, TargetID, SubObjectType);
	}
	template <typename T = uintptr_t> T GetSceneObjectTacticalEventType(uintptr_t TacticType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F5DE4))(this, TacticType);
	}
	template <typename T = uintptr_t> T GetNormalTacticalEventType(uintptr_t TacticType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F5EE4))(this, TacticType);
	}
	template <typename T = uintptr_t> T GetVehicleEventTypeNearDist(uintptr_t VechiclType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F5FE4))(this, VechiclType);
	}
	template <typename T = uintptr_t> T GetVehicleEventTypeFarDist(uintptr_t VechiclType) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F6148))(this, VechiclType);
	}
	template <typename T = bool> T IsSignInNearDist(uintptr_t SignCom) {
		return ((T (*)(SignsBroadcaster*, uintptr_t))(Il2CppBase() + 0x38F5570))(this, SignCom);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(SignsBroadcaster*, uint32_t))(Il2CppBase() + 0x38F62AC))(this, PlayerID);
	}
	template <typename T = int32_t> T GetBroadcastDistLOD(float Dist) {
		return ((T (*)(SignsBroadcaster*, float))(Il2CppBase() + 0x38F5D04))(this, Dist);
	}

};

}
