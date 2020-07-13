#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageRenderer"));
	}

	template <typename T = uintptr_t> T& foliageDatabase() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& drawDebug() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& drawDebugLayerType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& foliageInstanceList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& foliageRuntimeData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_FoliageTypes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MatrixLODBuffer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MatrixLODCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CameraPlanes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_CameraPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_DrawInstanced() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CurrentCameraDraw() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_DrawStats() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFoliageTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildRuntimeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFoliageLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IssueRenderBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IssueRenderBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VisibilityTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FoliageRenderer*))(Il2CppBase() + 0x3CD5798))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FoliageRenderer*))(Il2CppBase() + 0x3CD5C5C))(this);
	}
	template <typename T = void> T UpdateFoliageTypes(Il2CppArray<uintptr_t>* types) {
		return ((T (*)(FoliageRenderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CD5B14))(this, types);
	}
	template <typename T = void> T BuildRuntimeData() {
		return ((T (*)(FoliageRenderer*))(Il2CppBase() + 0x3CD5D0C))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(FoliageRenderer*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3CD6450))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = void> T ProcessFoliageLayer(uintptr_t layerData) {
		return ((T (*)(FoliageRenderer*, uintptr_t))(Il2CppBase() + 0x3CD6794))(this, layerData);
	}
	template <typename T = void> T ProcessCell(uintptr_t cellData) {
		return ((T (*)(FoliageRenderer*, uintptr_t))(Il2CppBase() + 0x3CD69CC))(this, cellData);
	}
	template <typename T = void> T IssueRenderBatch(Il2CppArray<uintptr_t>* batch, int32_t count, uintptr_t lod, uintptr_t mpb) {
		return ((T (*)(FoliageRenderer*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CD7564))(this, batch, count, lod, mpb);
	}
	template <typename T = void> T IssueRenderBatch_1(Il2CppArray<uintptr_t>* batch, int32_t count, uintptr_t mesh, Il2CppArray<uintptr_t>* materials, uintptr_t mpb) {
		return ((T (*)(FoliageRenderer*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3CD79B0))(this, batch, count, mesh, materials, mpb);
	}
	template <typename T = int32_t> T GetCurrentLOD(Il2CppArray<uintptr_t>* foliageLODs, float distance) {
		return ((T (*)(FoliageRenderer*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x3CD7438))(this, foliageLODs, distance);
	}
	template <typename T = bool> T VisibilityTest(uintptr_t bounds, float maxDistanceSqr) {
		return ((T (*)(FoliageRenderer*, uintptr_t, float))(Il2CppBase() + 0x3CD72B8))(this, bounds, maxDistanceSqr);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FoliageRenderer*))(Il2CppBase() + 0x3CD7DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(FoliageRenderer*))(Il2CppBase() + 0x3CD7DDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickStreaming(float P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, uintptr_t P4) {
		return ((T (*)(FoliageRenderer*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3CD7DE4))(this, P0, P1, P2, P3, P4);
	}

};

}
