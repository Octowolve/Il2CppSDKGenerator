#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshBuildSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMeshBuildSettings"));
	}

	template <typename T = int32_t> T& m_AgentTypeID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_AgentRadius() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_AgentHeight() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_AgentSlope() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AgentClimb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_LedgeDropHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MaxJumpAcrossDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MinRegionArea() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_OverrideVoxelSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_VoxelSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_OverrideTileSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_TileSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_AccuratePlacement() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_agentTypeID() {
		return ((T (*)(NavMeshBuildSettings*))(Il2CppBase() + 0x4682FF4))(this);
	}
	template <typename T = void> T set_agentTypeID(int32_t value) {
		return ((T (*)(NavMeshBuildSettings*, int32_t))(Il2CppBase() + 0x4683004))(this, value);
	}
	template <typename T = float> T get_agentRadius() {
		return ((T (*)(NavMeshBuildSettings*))(Il2CppBase() + 0x4683014))(this);
	}
	template <typename T = void> T set_agentRadius(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x4683024))(this, value);
	}
	template <typename T = float> T get_agentHeight() {
		return ((T (*)(NavMeshBuildSettings*))(Il2CppBase() + 0x4683034))(this);
	}
	template <typename T = void> T set_agentHeight(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x4683044))(this, value);
	}
	template <typename T = float> T get_agentSlope() {
		return ((T (*)(NavMeshBuildSettings*))(Il2CppBase() + 0x4683054))(this);
	}
	template <typename T = void> T set_agentSlope(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x4683064))(this, value);
	}
	template <typename T = float> T get_agentClimb() {
		return ((T (*)(NavMeshBuildSettings*))(Il2CppBase() + 0x4683074))(this);
	}
	template <typename T = void> T set_agentClimb(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x4683084))(this, value);
	}
	template <typename T = void> T set_minRegionArea(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x4683094))(this, value);
	}
	template <typename T = void> T set_overrideVoxelSize(bool value) {
		return ((T (*)(NavMeshBuildSettings*, bool))(Il2CppBase() + 0x46830A4))(this, value);
	}
	template <typename T = void> T set_voxelSize(float value) {
		return ((T (*)(NavMeshBuildSettings*, float))(Il2CppBase() + 0x46830B4))(this, value);
	}
	template <typename T = void> T set_overrideTileSize(bool value) {
		return ((T (*)(NavMeshBuildSettings*, bool))(Il2CppBase() + 0x46830C4))(this, value);
	}
	template <typename T = void> T set_tileSize(int32_t value) {
		return ((T (*)(NavMeshBuildSettings*, int32_t))(Il2CppBase() + 0x46830D4))(this, value);
	}

};

}
