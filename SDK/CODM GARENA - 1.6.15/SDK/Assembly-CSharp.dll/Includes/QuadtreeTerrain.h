#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadtreeTerrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadtreeTerrain"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& levelOfDetails() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& quadtreeRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ignoreCameraHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lodLevelMaskBuffer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& lodLevelMaskPropertyID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& updateInEditMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& staticLevelOfDetail() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int32_t> T& staticRenderLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = double> T& nextUpdateTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& lastCameraPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLODLevelMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWhenQuadtreeIsReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLODLevelMaskBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLevelMaskBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLODLevelMaskUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD_Immediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseSetVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseSetVisibilityOverlapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseSetVisibilityNonOverlapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowQuadtreeLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = int32_t> T get_levels() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB7440))(this);
	}
	template <typename T = int32_t> T GetLODLevelMask(int32_t row, int32_t col) {
		return ((T (*)(QuadtreeTerrain*, int32_t, int32_t))(Il2CppBase() + 0x3DB7464))(this, row, col);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB75C0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB7774))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB780C))(this);
	}
	template <typename T = void> T InitWhenQuadtreeIsReady() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB76C8))(this);
	}
	template <typename T = void> T InitLODLevelMaskBuffer() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB78A4))(this);
	}
	template <typename T = void> T ResetLevelMaskBuffer(int32_t level) {
		return ((T (*)(QuadtreeTerrain*, int32_t))(Il2CppBase() + 0x3DB7AE0))(this, level);
	}
	template <typename T = void> T SendLODLevelMaskUniform() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB7A30))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(QuadtreeTerrain*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3DB7C04))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = void> T UpdateLOD(Il2CppVector3 cameraPos) {
		return ((T (*)(QuadtreeTerrain*, Il2CppVector3))(Il2CppBase() + 0x3DB7D04))(this, cameraPos);
	}
	template <typename T = void> T UpdateLOD_Immediate(Il2CppVector3 cameraPos) {
		return ((T (*)(QuadtreeTerrain*, Il2CppVector3))(Il2CppBase() + 0x3DB7FFC))(this, cameraPos);
	}
	template <typename T = int32_t> T TraverseSetVisibility(uintptr_t node, Il2CppVector3 cameraPos) {
		return ((T (*)(QuadtreeTerrain*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3DB7F1C))(this, node, cameraPos);
	}
	template <typename T = int32_t> T TraverseSetVisibilityOverlapping(uintptr_t node, Il2CppVector3 cameraPos) {
		return ((T (*)(QuadtreeTerrain*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3DB80E0))(this, node, cameraPos);
	}
	template <typename T = int32_t> T TraverseSetVisibilityNonOverlapping(uintptr_t node, Il2CppVector3 cameraPos) {
		return ((T (*)(QuadtreeTerrain*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3DB84B8))(this, node, cameraPos);
	}
	template <typename T = void> T ShowQuadtreeLevel(int32_t level) {
		return ((T (*)(QuadtreeTerrain*, int32_t))(Il2CppBase() + 0x3DB87E8))(this, level);
	}
	template <typename T = void> T TraverseTree(int32_t level, uintptr_t action) {
		return ((T (*)(QuadtreeTerrain*, int32_t, uintptr_t))(Il2CppBase() + 0x3DB8888))(this, level, action);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(QuadtreeTerrain*))(Il2CppBase() + 0x3DB8A64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickStreaming(float P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, uintptr_t P4) {
		return ((T (*)(QuadtreeTerrain*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3DB8A6C))(this, P0, P1, P2, P3, P4);
	}

};

}
