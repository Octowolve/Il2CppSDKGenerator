#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class CustomNavMeshSurface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.AI", "CustomNavMeshSurface"));
	}

	template <typename T = int32_t> T& m_AgentTypeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_UseAgent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_AgentClimb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AgentHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_AgentRadius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_AgentSlope() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_MinRegionArea() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_LayerMask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_UseGeometry() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_DefaultArea() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_OverrideTileSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TileSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_OverrideVoxelSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_VoxelSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& defaultVoxelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& defaultTileSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_NavMeshData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_NavMeshDataInstance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& navmeshAssetWithLevelPrefix() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuildSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = int32_t> T get_agentTypeID() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A2C))(this);
	}
	template <typename T = void> T set_agentTypeID(int32_t value) {
		return ((T (*)(CustomNavMeshSurface*, int32_t))(Il2CppBase() + 0x4209A34))(this, value);
	}
	template <typename T = bool> T get_UseAgent() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A3C))(this);
	}
	template <typename T = void> T set_UseAgent(bool value) {
		return ((T (*)(CustomNavMeshSurface*, bool))(Il2CppBase() + 0x4209A44))(this, value);
	}
	template <typename T = float> T get_agentClimb() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A4C))(this);
	}
	template <typename T = void> T set_agentClimb(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209A54))(this, value);
	}
	template <typename T = float> T get_agentHeight() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A5C))(this);
	}
	template <typename T = void> T set_agentHeight(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209A64))(this, value);
	}
	template <typename T = float> T get_agentRadius() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A6C))(this);
	}
	template <typename T = void> T set_agentRadius(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209A74))(this, value);
	}
	template <typename T = float> T get_agentSlope() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A7C))(this);
	}
	template <typename T = void> T set_agentSlope(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209A84))(this, value);
	}
	template <typename T = float> T get_minRegionArea() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A8C))(this);
	}
	template <typename T = void> T set_minRegionArea(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209A94))(this, value);
	}
	template <typename T = uintptr_t> T get_layerMask() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209A9C))(this);
	}
	template <typename T = void> T set_layerMask(uintptr_t value) {
		return ((T (*)(CustomNavMeshSurface*, uintptr_t))(Il2CppBase() + 0x4209AA4))(this, value);
	}
	template <typename T = uintptr_t> T get_useGeometry() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209AAC))(this);
	}
	template <typename T = void> T set_useGeometry(uintptr_t value) {
		return ((T (*)(CustomNavMeshSurface*, uintptr_t))(Il2CppBase() + 0x4209AB4))(this, value);
	}
	template <typename T = int32_t> T get_defaultArea() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209ABC))(this);
	}
	template <typename T = void> T set_defaultArea(int32_t value) {
		return ((T (*)(CustomNavMeshSurface*, int32_t))(Il2CppBase() + 0x4209AC4))(this, value);
	}
	template <typename T = bool> T get_overrideTileSize() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209ACC))(this);
	}
	template <typename T = void> T set_overrideTileSize(bool value) {
		return ((T (*)(CustomNavMeshSurface*, bool))(Il2CppBase() + 0x4209AD4))(this, value);
	}
	template <typename T = int32_t> T get_tileSize() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209ADC))(this);
	}
	template <typename T = void> T set_tileSize(int32_t value) {
		return ((T (*)(CustomNavMeshSurface*, int32_t))(Il2CppBase() + 0x4209AE4))(this, value);
	}
	template <typename T = bool> T get_overrideVoxelSize() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209AEC))(this);
	}
	template <typename T = void> T set_overrideVoxelSize(bool value) {
		return ((T (*)(CustomNavMeshSurface*, bool))(Il2CppBase() + 0x4209AF4))(this, value);
	}
	template <typename T = float> T get_voxelSize() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209AFC))(this);
	}
	template <typename T = void> T set_voxelSize(float value) {
		return ((T (*)(CustomNavMeshSurface*, float))(Il2CppBase() + 0x4209B04))(this, value);
	}
	template <typename T = uintptr_t> T get_navMeshData() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209B0C))(this);
	}
	template <typename T = void> T set_navMeshData(uintptr_t value) {
		return ((T (*)(CustomNavMeshSurface*, uintptr_t))(Il2CppBase() + 0x4209B14))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209B1C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209CF4))(this);
	}
	template <typename T = void> T AddData() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209BC0))(this);
	}
	template <typename T = void> T RemoveData() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209D98))(this);
	}
	template <typename T = uintptr_t> T GetBuildSettings() {
		return ((T (*)(CustomNavMeshSurface*))(Il2CppBase() + 0x4209EA4))(this);
	}

};

}
