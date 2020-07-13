#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignsManager"));
	}

	template <typename T = bool> T& EnableSystem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxTraceDist() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& InteractCD() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& AddCD() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ResponseCD() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& SignSpwanCenterOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LocExclusionStandardRefDist() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& LocExclusionStandardRadius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& LocExclusionMinRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LocExclusionMaxRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& OutLineEffectValidDist() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& EnableModeMask() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& MaxSearchPassForSignExclusionLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SearchCircleDivideNumForSignExclusionLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SignAssetConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& TacticsSignGroupInfo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& SignsMap() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& SignsCacheMap() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& LastInteractTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& LastAddTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& LastResponseTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& SignsDetectorInst() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& TestSignID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& LastSignEveryTeamMemberMap() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& CheckTickSignInterval() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& LastCheckTickSignTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToAddTaticsSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToInteractSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInteractSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSignAddLocationBaseOnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignAddLocationForPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAvailableTacticSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanInteractSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFailTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAddSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAddOrRemoveSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRemoveSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqResponseSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfAddMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfDelMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfResponseMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfAddMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfDelMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveNtfResponseSpeakMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveSyncMPTeamMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveSyncTeamMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ContainsMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertBRTypeToMPType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertMPTypeToBRSubType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLastSignForEveryTeamMem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLastSignForEveryTeamMem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrectSignLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignCanBeInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignFromHitObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckActiveOutlineEffectOnAddSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableOutlineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeSpawnSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowingOutlineEffectSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDelayToShowOutlineEffectSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSignAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemSigned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignItemConfigColorIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(SignsManager*, uintptr_t, bool))(Il2CppBase() + 0x38F8B78))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F8CDC))(this);
	}
	template <typename T = bool> T get_IsEnableSystem() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F8D98))(this);
	}
	template <typename T = uintptr_t> T get_SignsDetector() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F2C1C))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_SignsPubMap() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F787C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F8F90))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F945C))(this);
	}
	template <typename T = void> T TryToAddTaticsSign(uint32_t SubType) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38F9530))(this, SubType);
	}
	template <typename T = void> T TryToInteractSign() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38EEFF8))(this);
	}
	template <typename T = void> T OnInteractSign(uintptr_t SignCom, uint32_t OperateType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x38FB1E8))(this, SignCom, OperateType);
	}
	template <typename T = Il2CppVector3> T CalcSignAddLocationBaseOnType(uintptr_t SignType, uint32_t SignSubType, uint32_t ObjectType, uintptr_t HitImpactInfo, uintptr_t HitTarget) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38FA1A4))(this, SignType, SignSubType, ObjectType, HitImpactInfo, HitTarget);
	}
	template <typename T = bool> T GetSignAddLocationForPickup(uintptr_t SignType, uint32_t SignSubType, uint32_t ObjectType, uint32_t TargetID, uintptr_t AddLocation) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x38FBB80))(this, SignType, SignSubType, ObjectType, TargetID, AddLocation);
	}
	template <typename T = bool> T CheckAvailableTacticSign(uint32_t SubType) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38F9F88))(this, SubType);
	}
	template <typename T = bool> T CanInteractSign() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F9B40))(this);
	}
	template <typename T = void> T ShowFailTips(uintptr_t failReason) {
		return ((T (*)(SignsManager*, uintptr_t))(Il2CppBase() + 0x38FACC8))(this, failReason);
	}
	template <typename T = void> T ReqAddSign(uintptr_t SignType, uint32_t SignSubType, uint32_t ObjectType, uint32_t TargetID, int32_t ItemID, Il2CppVector3 AddLocation, bool IsInBox, uint32_t OperateType, uint32_t AddWay, uint32_t SubObjectType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, bool, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x38FA850))(this, SignType, SignSubType, ObjectType, TargetID, ItemID, AddLocation, IsInBox, OperateType, AddWay, SubObjectType);
	}
	template <typename T = void> T ReqAddOrRemoveSign(uintptr_t SignType, uint32_t SignSubType, uint32_t ObjectType, uint32_t TargetID, int32_t ItemID, Il2CppVector3 AddLocation, bool IsInBox, uint32_t SubObjectType, bool ReCalAddLocation, uint32_t OperateType, uint32_t AddWay) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, bool, uint32_t, bool, uint32_t, uint32_t))(Il2CppBase() + 0x38EDFC4))(this, SignType, SignSubType, ObjectType, TargetID, ItemID, AddLocation, IsInBox, SubObjectType, ReCalAddLocation, OperateType, AddWay);
	}
	template <typename T = void> T ReqRemoveSign(uint32_t SignID, uint32_t OperateType) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x38FB52C))(this, SignID, OperateType);
	}
	template <typename T = void> T ReqResponseSign(uint32_t OwnerID, uint32_t SignID) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x38FB83C))(this, OwnerID, SignID);
	}
	template <typename T = void> T OnReceiveNtfAddMark(uint32_t TeamID, uint32_t PlayerID, uint32_t MarkID, uint32_t MarkType, uint32_t MarkSubType, uint32_t ObejctType, uint32_t ObjectID, int32_t ItemID, Il2CppVector3 Pos, uint32_t MarkTime, uint32_t SubObjectType) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, uint32_t, uint32_t))(Il2CppBase() + 0x38FD084))(this, TeamID, PlayerID, MarkID, MarkType, MarkSubType, ObejctType, ObjectID, ItemID, Pos, MarkTime, SubObjectType);
	}
	template <typename T = void> T OnReceiveNtfDelMark(uint32_t TeamID, uint32_t PlayerID, uint32_t MarkID, bool IsCancel) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t, uint32_t, bool))(Il2CppBase() + 0x38FDB88))(this, TeamID, PlayerID, MarkID, IsCancel);
	}
	template <typename T = void> T OnReceiveNtfResponseMark(uint32_t TeamID, uint32_t PlayerID, uint32_t MarkPlayerID, uint32_t MarkID) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x38FE350))(this, TeamID, PlayerID, MarkPlayerID, MarkID);
	}
	template <typename T = void> T OnReceiveNtfAddMPMark(uint32_t PlayerId, uint32_t MarkId, uint32_t Type, Il2CppVector3 Pos) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x38FE73C))(this, PlayerId, MarkId, Type, Pos);
	}
	template <typename T = void> T OnReceiveNtfDelMPMark(uint32_t MarkID, uint32_t Reason) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x38FEA48))(this, MarkID, Reason);
	}
	template <typename T = void> T OnReceiveNtfResponseSpeakMPMark(uint32_t PlayerID, uint32_t MarkID) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x38FED34))(this, PlayerID, MarkID);
	}
	template <typename T = void> T OnReceiveSyncMPTeamMark(Il2CppArray<uintptr_t>* MarkInfos) {
		return ((T (*)(SignsManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38FEE48))(this, MarkInfos);
	}
	template <typename T = void> T OnReceiveSyncTeamMark(Il2CppArray<uintptr_t>* MarkInfos) {
		return ((T (*)(SignsManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38FFA40))(this, MarkInfos);
	}
	template <typename T = bool> T OnResponseSign(uint32_t ResponsePlayerID, uint32_t SignID) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x38FE474))(this, ResponsePlayerID, SignID);
	}
	template <typename T = bool> T ContainsMarkInfo(Il2CppArray<uintptr_t>* MarkInfos, uint32_t MarkID) {
		return ((T (*)(SignsManager*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x39004AC))(this, MarkInfos, MarkID);
	}
	template <typename T = bool> T ContainsMarkInfo_1(Il2CppArray<uintptr_t>* MarkInfos, uint32_t MarkID) {
		return ((T (*)(SignsManager*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x38FF728))(this, MarkInfos, MarkID);
	}
	template <typename T = uintptr_t> T ConvertBRTypeToMPType(uintptr_t SignType, uint32_t SignSubType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x38FCC48))(this, SignType, SignSubType);
	}
	template <typename T = uint32_t> T ConvertMPTypeToBRSubType(uint32_t MPType) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38FE944))(this, MPType);
	}
	template <typename T = void> T UpdateLastSignForEveryTeamMem(uintptr_t SignCom) {
		return ((T (*)(SignsManager*, uintptr_t))(Il2CppBase() + 0x38FD960))(this, SignCom);
	}
	template <typename T = void> T RemoveLastSignForEveryTeamMem(uint32_t SignOwnerID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38FE208))(this, SignOwnerID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F9064))(this);
	}
	template <typename T = Il2CppVector3> T CorrectSignLocation(uintptr_t SignType, uint32_t SubType, Il2CppVector3 Location) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x38FC0A4))(this, SignType, SubType, Location);
	}
	template <typename T = bool> T IsSameGroup(uintptr_t TypeA, uintptr_t TypeB) {
		return ((T (*)(SignsManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x390061C))(this, TypeA, TypeB);
	}
	template <typename T = uintptr_t> T AddSign(uintptr_t SignType, uint32_t SubType, uint32_t ObjectType, uint32_t OwnerID, uint32_t SignID, uint32_t TargetID, int32_t ItemID, Il2CppVector3 Location, uint32_t MarkTime, uint32_t SubObjectType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, uint32_t, uint32_t))(Il2CppBase() + 0x38FD2F8))(this, SignType, SubType, ObjectType, OwnerID, SignID, TargetID, ItemID, Location, MarkTime, SubObjectType);
	}
	template <typename T = bool> T RemoveSign(uint32_t SignID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38FDE80))(this, SignID);
	}
	template <typename T = uintptr_t> T GetSign(uintptr_t MarkType, uint32_t MarkSubType, uint32_t ObjectType, uint32_t TargetID) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x38FCD70))(this, MarkType, MarkSubType, ObjectType, TargetID);
	}
	template <typename T = uintptr_t> T GetSignCanBeInteract() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x38F3090))(this);
	}
	template <typename T = uintptr_t> T GetSignFromHitObject(uintptr_t go) {
		return ((T (*)(SignsManager*, uintptr_t))(Il2CppBase() + 0x38F2F5C))(this, go);
	}
	template <typename T = void> T CheckActiveOutlineEffectOnAddSign(uintptr_t SignToAdd, bool IsReConnected) {
		return ((T (*)(SignsManager*, uintptr_t, bool))(Il2CppBase() + 0x38FD6E4))(this, SignToAdd, IsReConnected);
	}
	template <typename T = bool> T IsEnableOutlineEffect(uintptr_t MarkType, uint32_t ObjectType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x3900C10))(this, MarkType, ObjectType);
	}
	template <typename T = bool> T IsLocalPlayerTeam(uint32_t TeamID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x39012CC))(this, TeamID);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x38FB37C))(this, PlayerID);
	}
	template <typename T = uintptr_t> T SpawnSign(uintptr_t SignType, uint32_t SignSubType, uint32_t ObjectType, uint32_t OwnerID, uint32_t SignID, uint32_t TargetID, int32_t ItemID, Il2CppVector3 Location, uint32_t SubObjectType, Il2CppQuaternion Rotation, uintptr_t Parent, uint32_t MarkTime) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, uint32_t, Il2CppQuaternion, uintptr_t, uint32_t))(Il2CppBase() + 0x39008C0))(this, SignType, SignSubType, ObjectType, OwnerID, SignID, TargetID, ItemID, Location, SubObjectType, Rotation, Parent, MarkTime);
	}
	template <typename T = void> T DeSpawnSign(uintptr_t SignCom) {
		return ((T (*)(SignsManager*, uintptr_t))(Il2CppBase() + 0x38FF898))(this, SignCom);
	}
	template <typename T = void> T RemoveSignIndicator(uintptr_t Trans) {
		return ((T (*)(SignsManager*, uintptr_t))(Il2CppBase() + 0x3901690))(this, Trans);
	}
	template <typename T = uintptr_t> T GetShowingOutlineEffectSign(uint32_t PlayerID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x3900D14))(this, PlayerID);
	}
	template <typename T = uintptr_t> T GetDelayToShowOutlineEffectSign(uint32_t PlayerID) {
		return ((T (*)(SignsManager*, uint32_t))(Il2CppBase() + 0x3900FF0))(this, PlayerID);
	}
	template <typename T = uintptr_t> T FindSignAssetID(uint32_t MarkType, uint32_t MarkSubType) {
		return ((T (*)(SignsManager*, uint32_t, uint32_t))(Il2CppBase() + 0x390147C))(this, MarkType, MarkSubType);
	}
	template <typename T = uintptr_t> T GetCurrCamera() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x3901888))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SignsManager*, float))(Il2CppBase() + 0x3901A70))(this, DeltaTime);
	}
	template <typename T = bool> T IsItemSigned(int32_t actorId) {
		return ((T (*)(SignsManager*, int32_t))(Il2CppBase() + 0x38EE274))(this, actorId);
	}
	template <typename T = uintptr_t> T GetSignItemConfigColorIndex(uintptr_t MarkType, uint32_t SubType) {
		return ((T (*)(SignsManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x3901D10))(this, MarkType, SubType);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x3901F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(SignsManager*))(Il2CppBase() + 0x3901FA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SignsManager*, float))(Il2CppBase() + 0x3901FAC))(this, P0);
	}

};

}
