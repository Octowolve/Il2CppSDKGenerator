#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise {

class AkSoundEngineWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise", "AkSoundEngineWrapper"));
	}

	template <typename T = bool> static T& Enabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uint32_t>*> static T& EventStatistics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppString*>*> static T& mAkID2String() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> static T& msGameObjectIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& msbSupportDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T get_Enabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E1830))(0);
	}
	template <typename T = void> static T set_Enabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44E1A90))(0, value);
	}
	template <typename T = void> static T Initialize(bool bDebug) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44E3204))(0, bDebug);
	}
	template <typename T = uintptr_t> static T RegisterGameObj(uintptr_t gameObject, Il2CppString* strGameObjectName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44F0A00))(0, gameObject, strGameObjectName);
	}
	template <typename T = uintptr_t> static T UnregisterGameObj(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44F0FC8))(0, gameObject);
	}
	template <typename T = uint32_t> static T GetIDFromString(Il2CppString* in_pszString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44EFA90))(0, in_pszString);
	}
	template <typename T = Il2CppString*> static T GetStringFromID(uint32_t iUniqueID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x44F132C))(0, iUniqueID);
	}
	template <typename T = void> static T RecordEventStatistics(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44F14E8))(0, eventName);
	}
	template <typename T = void> static T ClearEventStatistics() {
		return ((T (*)(void *))(Il2CppBase() + 0x44F1740))(0);
	}
	template <typename T = void> static T PrintEventStatistics() {
		return ((T (*)(void *))(Il2CppBase() + 0x44F1824))(0);
	}
	template <typename T = uint32_t> static T PostEventByID(uint32_t uEvtID, uint64_t GameObjectID) {
		return ((T (*)(void *, uint32_t, uint64_t))(Il2CppBase() + 0x44F1CD0))(0, uEvtID, GameObjectID);
	}
	template <typename T = uint32_t> static T PostEvent(Il2CppString* strEventName, uint64_t GameObjectID) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x44F2318))(0, strEventName, GameObjectID);
	}
	template <typename T = uint32_t> static T PostEventByIDWithExtraFlagNoCallback(uint32_t uEvtID, uint64_t in_gameObjectID, uint32_t in_uFlags) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x44F2774))(0, uEvtID, in_gameObjectID, in_uFlags);
	}
	template <typename T = uint32_t> static T PostEventWithExtraFlagNoCallback(Il2CppString* in_pszEventName, uint64_t in_gameObjectID, uint32_t in_uFlags) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t))(Il2CppBase() + 0x44F2DC8))(0, in_pszEventName, in_gameObjectID, in_uFlags);
	}
	template <typename T = uint32_t> static T PostEventByIDWithCallback(uint32_t uEvtID, uint64_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44F3230))(0, uEvtID, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie);
	}
	template <typename T = uint32_t> static T PostEvent_1(Il2CppString* in_pszEventName, uint64_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44F390C))(0, in_pszEventName, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie);
	}
	template <typename T = bool> static T IsAnySoundPlayingOrPending(uint64_t in_GameObjId_id) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x44F3DFC))(0, in_GameObjId_id);
	}
	template <typename T = void> static T StopAllSoundOnObj(uint64_t GameObjectID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x44F3EB8))(0, GameObjectID);
	}
	template <typename T = void> static T SetState(Il2CppString* strGroupName, Il2CppString* strValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44E4ED4))(0, strGroupName, strValue);
	}
	template <typename T = void> static T SetRTPC(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x44E59DC))(0, strRTPCName, fValue);
	}
	template <typename T = void> static T SetRTPCForThisObj(uint64_t iGameObjID, Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(void *, uint64_t, Il2CppString*, float))(Il2CppBase() + 0x44F3F74))(0, iGameObjID, strRTPCName, fValue);
	}
	template <typename T = float> static T GetRTPCForThisObj(uint64_t iGameObjID, Il2CppString* strRTPCName) {
		return ((T (*)(void *, uint64_t, Il2CppString*))(Il2CppBase() + 0x44F4048))(0, iGameObjID, strRTPCName);
	}
	template <typename T = uintptr_t> static T SetObjectPosition(uint64_t in_GameObjectID, float PosX, float PosY, float PosZ, float OrientationX, float OrientationY, float OrientationZ, float TopX, float TopY, float TopZ) {
		return ((T (*)(void *, uint64_t, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x44F4134))(0, in_GameObjectID, PosX, PosY, PosZ, OrientationX, OrientationY, OrientationZ, TopX, TopY, TopZ);
	}
	template <typename T = uintptr_t> static T SetObjectPosition_1(uint64_t in_GameObjectID, Il2CppVector3 vecPos) {
		return ((T (*)(void *, uint64_t, Il2CppVector3))(Il2CppBase() + 0x44F4240))(0, in_GameObjectID, vecPos);
	}
	template <typename T = uintptr_t> static T SetSwitch(Il2CppString* in_pszSwitchGroup, Il2CppString* in_pszSwitchState, uint64_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uint64_t))(Il2CppBase() + 0x44F43B4))(0, in_pszSwitchGroup, in_pszSwitchState, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetGameObjectAuxSendValues(uint64_t in_gameObjectID, uintptr_t in_aAuxSendValues, uint32_t in_uNumSendValues) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x44F4480))(0, in_gameObjectID, in_aAuxSendValues, in_uNumSendValues);
	}
	template <typename T = uintptr_t> static T SetEmitterAuxSendvalues(uint64_t in_gameObjectID, uintptr_t in_aAuxSendValues, uint32_t in_uNumSendValues) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x44F456C))(0, in_gameObjectID, in_aAuxSendValues, in_uNumSendValues);
	}
	template <typename T = uintptr_t> static T RegisterGameObjInternal_WithName(uint64_t in_GameObj, Il2CppString* in_pszObjName) {
		return ((T (*)(void *, uint64_t, Il2CppString*))(Il2CppBase() + 0x44F4658))(0, in_GameObj, in_pszObjName);
	}
	template <typename T = uintptr_t> static T RegisterGameObjInternal(uint64_t in_GameObj) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x44F471C))(0, in_GameObj);
	}
	template <typename T = void> static T _AddRecord(uint64_t GameObjectID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x44F0BE8))(0, GameObjectID);
	}
	template <typename T = void> static T _RemoveRecord(uint64_t GameObjectID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x44F11A8))(0, GameObjectID);
	}
	template <typename T = void> static T _RemoveAllRecord() {
		return ((T (*)(void *))(Il2CppBase() + 0x44F47D8))(0);
	}

};

}
