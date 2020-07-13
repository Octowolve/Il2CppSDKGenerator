#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimplifyMeshPreview
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimplifyMeshPreview"));
	}

	template <typename T = uintptr_t> T& originalMesh() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& simplifiedMesh() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& trianglePercent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& processVertexLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimplifiedTriangleCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOriginalTriangleCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreOriginalMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySimplifiedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsValid() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x39075E0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x3907690))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x39078CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x3907734))(this);
	}
	template <typename T = int32_t> T GetSimplifiedTriangleCount() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x3907970))(this);
	}
	template <typename T = int32_t> T GetOriginalTriangleCount() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x3907A7C))(this);
	}
	template <typename T = void> T RestoreOriginalMesh() {
		return ((T (*)(SimplifyMeshPreview*))(Il2CppBase() + 0x3907BB4))(this);
	}
	template <typename T = void> T ApplySimplifiedMesh(uintptr_t newMesh) {
		return ((T (*)(SimplifyMeshPreview*, uintptr_t))(Il2CppBase() + 0x3907E4C))(this, newMesh);
	}
	template <typename T = void> T ApplyMesh(uintptr_t newMesh) {
		return ((T (*)(SimplifyMeshPreview*, uintptr_t))(Il2CppBase() + 0x3907C5C))(this, newMesh);
	}

};

}
