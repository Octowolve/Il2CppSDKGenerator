#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkyOnlyRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkyOnlyRenderer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& instancedMeshDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& batchMatrixBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MaxBatchInstanceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& drawInstanced() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& currentCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& enableCulling() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cullingGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allBoundingSpheres() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRuntimeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCullingGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubmitRenderBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SkyOnlyRenderer*))(Il2CppBase() + 0x390A9D4))(this);
	}
	template <typename T = void> T PrepareRuntimeData() {
		return ((T (*)(SkyOnlyRenderer*))(Il2CppBase() + 0x390AA78))(this);
	}
	template <typename T = void> T UpdateCullingGroup(uintptr_t camera) {
		return ((T (*)(SkyOnlyRenderer*, uintptr_t))(Il2CppBase() + 0x390AEF4))(this, camera);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkyOnlyRenderer*))(Il2CppBase() + 0x390B030))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkyOnlyRenderer*))(Il2CppBase() + 0x390B0E0))(this);
	}
	template <typename T = void> T DrawInstances() {
		return ((T (*)(SkyOnlyRenderer*))(Il2CppBase() + 0x390B358))(this);
	}
	template <typename T = void> T SubmitRenderBatch(uintptr_t mesh, Il2CppArray<uintptr_t>* materials, Il2CppArray<uintptr_t>* batchBuffer, int32_t instanceCount) {
		return ((T (*)(SkyOnlyRenderer*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x390BAA8))(this, mesh, materials, batchBuffer, instanceCount);
	}

};

}
