#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineEffScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineEffScale"));
	}

	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fadeOutLen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minDis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxDis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MaxScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PositionArr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_MeshVertices() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_MeshUvs() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshColors() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_MeshTriangles() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountSqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCreateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAddMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAddMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x2669C20))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x266A02C))(this);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 cameraForward) {
		return ((T (*)(BRZiplineEffScale*, Il2CppVector3))(Il2CppBase() + 0x266A410))(this, cameraForward);
	}
	template <typename T = void> T UpdateScale(Il2CppVector3 cameraPos) {
		return ((T (*)(BRZiplineEffScale*, Il2CppVector3))(Il2CppBase() + 0x266A204))(this, cameraPos);
	}
	template <typename T = float> T CountSqrDistance(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 q) {
		return ((T (*)(BRZiplineEffScale*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x266A558))(this, p1, p2, q);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(BRZiplineEffScale*, float))(Il2CppBase() + 0x266A854))(this, scale);
	}
	template <typename T = void> T CreateMesh(Il2CppArray<uintptr_t>* allSegmentsData) {
		return ((T (*)(BRZiplineEffScale*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x266A9CC))(this, allSegmentsData);
	}
	template <typename T = void> T DoCreateMesh() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x266ACEC))(this);
	}
	template <typename T = void> T InitMesh() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x2669D4C))(this);
	}
	template <typename T = void> T ClearMesh() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x266AFE0))(this);
	}
	template <typename T = void> T AddAddMeshVertices(Il2CppVector3 p, float rate) {
		return ((T (*)(BRZiplineEffScale*, Il2CppVector3, float))(Il2CppBase() + 0x266B190))(this, p, rate);
	}
	template <typename T = void> T DoAddMeshVertices(Il2CppVector3 p, float u, float v) {
		return ((T (*)(BRZiplineEffScale*, Il2CppVector3, float, float))(Il2CppBase() + 0x266B73C))(this, p, u, v);
	}
	template <typename T = void> T GenMesh() {
		return ((T (*)(BRZiplineEffScale*))(Il2CppBase() + 0x266B390))(this);
	}

};

}
