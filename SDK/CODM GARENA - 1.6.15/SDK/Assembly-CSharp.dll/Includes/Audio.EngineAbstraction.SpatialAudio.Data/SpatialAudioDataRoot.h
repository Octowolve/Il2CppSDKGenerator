#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Data {

class SpatialAudioDataRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Data", "SpatialAudioDataRoot"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ListAllWayPoints() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> static T& msShowDebugPathFindingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _ListNameCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& ShowGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__FindUniqueName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearNameCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateUniqueName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateLineBetween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMovablePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RmMovablePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPointMoved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWayPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClosestPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PathFind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsPointIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EA3A0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EA450))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EA558))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EA664))(this);
	}
	template <typename T = void> T ForEach(void* pAction) {
		return ((T (*)(SpatialAudioDataRoot*, void*))(Il2CppBase() + 0x44EA768))(this, pAction);
	}
	template <typename T = bool> T _FindUniqueName(uintptr_t sbRetBuffer) {
		return ((T (*)(SpatialAudioDataRoot*, uintptr_t))(Il2CppBase() + 0x44EA880))(this, sbRetBuffer);
	}
	template <typename T = void> T ClearNameCache() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EACC8))(this);
	}
	template <typename T = Il2CppString*> T GenerateUniqueName() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EADCC))(this);
	}
	template <typename T = void> T AddPoint(Il2CppVector3 vecPos, Il2CppString* strUniqueName, Il2CppList<uintptr_t>* AssociatedRooms) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppVector3, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44EAEF8))(this, vecPos, strUniqueName, AssociatedRooms);
	}
	template <typename T = void> T RemovePoint(Il2CppString* strUniqueName) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppString*))(Il2CppBase() + 0x44EB13C))(this, strUniqueName);
	}
	template <typename T = void> T DetectLines(Il2CppList<uintptr_t>* AllColliders) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44EB440))(this, AllColliders);
	}
	template <typename T = void> static T GenerateLineBetween(uintptr_t x, uintptr_t y, Il2CppList<uintptr_t>* AllColliders, bool ForceDetection) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x44EB620))(0, x, y, AllColliders, ForceDetection);
	}
	template <typename T = void> T AddMovablePoint(Il2CppString* strUniqueID) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppString*))(Il2CppBase() + 0x44EBB64))(this, strUniqueID);
	}
	template <typename T = void> T RmMovablePoint(Il2CppString* strUniqueID) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppString*))(Il2CppBase() + 0x44EBC6C))(this, strUniqueID);
	}
	template <typename T = void> T OnPointMoved(Il2CppVector3 vecPos, Il2CppString* strUniqueID, Il2CppList<uintptr_t>* AllColliders) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppVector3, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44EBE3C))(this, vecPos, strUniqueID, AllColliders);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpatialAudioDataRoot*))(Il2CppBase() + 0x44EC01C))(this);
	}
	template <typename T = uintptr_t> T GetWayPoint(Il2CppString* strID) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppString*))(Il2CppBase() + 0x44EAAC8))(this, strID);
	}
	template <typename T = uintptr_t> T GetClosestPoint(Il2CppVector3 vecPosition) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppVector3))(Il2CppBase() + 0x44EC2C4))(this, vecPosition);
	}
	template <typename T = bool> T PathFind(uintptr_t ptFrom, uintptr_t ptTo, uintptr_t pRetPath) {
		return ((T (*)(SpatialAudioDataRoot*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44EC500))(this, ptFrom, ptTo, pRetPath);
	}
	template <typename T = int32_t> T GetCurrentLength(Il2CppList<uintptr_t>* pCloseList) {
		return ((T (*)(SpatialAudioDataRoot*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44ED398))(this, pCloseList);
	}
	template <typename T = bool> static T IsPointIn(uintptr_t ptPoint, Il2CppList<uintptr_t>* listToSearch) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44ED930))(0, ptPoint, listToSearch);
	}
	template <typename T = bool> static T IsPointIn_1(Il2CppString* strPointID, Il2CppList<uintptr_t>* listToSearch) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44ED4F8))(0, strPointID, listToSearch);
	}
	template <typename T = uintptr_t> static T GetPointIn(Il2CppString* strPointID, Il2CppList<uintptr_t>* listToSearch) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44ED6C0))(0, strPointID, listToSearch);
	}

};

}
