#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMesh"));
	}

	template <typename T = uintptr_t> static T& onPreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Internal_CallOnNavMeshPreUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x46814F8))(0);
	}
	template <typename T = bool> static T SamplePosition(Il2CppVector3 sourcePosition, uintptr_t* hit, float maxDistance, int32_t areaMask) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4681618))(0, sourcePosition, hit, maxDistance, areaMask);
	}
	template <typename T = bool> static T INTERNAL_CALL_SamplePosition(uintptr_t sourcePosition, uintptr_t* hit, float maxDistance, int32_t areaMask) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4681658))(0, sourcePosition, hit, maxDistance, areaMask);
	}
	template <typename T = uintptr_t> static T AddNavMeshData(uintptr_t navMeshData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4681708))(0, navMeshData);
	}
	template <typename T = bool> static T IsValidNavMeshDataHandle(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46818AC))(0, handle);
	}
	template <typename T = bool> static T InternalSetOwner(int32_t dataID, int32_t ownerID) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4681944))(0, dataID, ownerID);
	}
	template <typename T = int32_t> static T AddNavMeshDataInternal(uintptr_t navMeshData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4681814))(0, navMeshData);
	}
	template <typename T = void> static T RemoveNavMeshDataInternal(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46819E4))(0, handle);
	}
	template <typename T = uintptr_t> static T GetSettingsByID(int32_t agentTypeID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4681A7C))(0, agentTypeID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSettingsByID(int32_t agentTypeID, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x4681B24))(0, agentTypeID, value);
	}
	template <typename T = int32_t> static T GetSettingsCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4681BC4))(0);
	}
	template <typename T = uintptr_t> static T GetSettingsByIndex(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4681C54))(0, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSettingsByIndex(int32_t index, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x4681CFC))(0, index, value);
	}
	template <typename T = Il2CppString*> static T GetSettingsNameFromID(int32_t agentTypeID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4681D9C))(0, agentTypeID);
	}

};

}
