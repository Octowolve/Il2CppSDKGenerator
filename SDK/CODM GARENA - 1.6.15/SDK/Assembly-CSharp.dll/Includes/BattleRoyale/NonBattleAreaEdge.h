#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class NonBattleAreaEdge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "NonBattleAreaEdge"));
	}

	template <typename T = float> T& ShowEdgeDis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& OutShowEdgeDis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ShowDisSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MeshMinY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MeshMaxY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& SqrMinHideCheckDis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& MeshUvScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_LastCheckPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_LastShowMesh() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastShowDisMapSqr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_ShowEdgeDisMapSqr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_OutShowEdgeDisMapSqr() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_CurrShowDis() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Gps() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_NonBattleAreaEdgeList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_MeshMaterial() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_MeshBasePos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_MeshVertices() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_MeshUvs() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_MeshTriangles() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_EdgeForward() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<float>*> T& m_EdgeLen() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<float>*> T& m_EdgeTotLen() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_BaseY() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_GpsScale() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMtArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountSqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEdgeMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAddMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DoAddMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenEdgeMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = float> T get_ShowEdgeDisMapSqr() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57820))(this);
	}
	template <typename T = float> T get_ShouldShowDis() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57840))(this);
	}
	template <typename T = uintptr_t> T get_gps() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57974))(this);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T get_NonBattleAreaEdgeList() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57AD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57B50))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D58518))(this);
	}
	template <typename T = void> T UpdateMtArgs() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D58C90))(this);
	}
	template <typename T = void> T CheckDistance() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D587A0))(this);
	}
	template <typename T = float> T CountSqrDistance(Il2CppVector2 p1, Il2CppVector2 p2, Il2CppVector2 q) {
		return ((T (*)(NonBattleAreaEdge*, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3D590BC))(this, p1, p2, q);
	}
	template <typename T = void> T InitDate() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D57C08))(this);
	}
	template <typename T = void> T InitEdgeMesh() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D5813C))(this);
	}
	template <typename T = void> T ShowMesh(bool isShow) {
		return ((T (*)(NonBattleAreaEdge*, bool))(Il2CppBase() + 0x3D583D4))(this, isShow);
	}
	template <typename T = void> T ClearMesh() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D58F38))(this);
	}
	template <typename T = void> T AddMeshVertices(int32_t i, Il2CppVector2 q) {
		return ((T (*)(NonBattleAreaEdge*, int32_t, Il2CppVector2))(Il2CppBase() + 0x3D59320))(this, i, q);
	}
	template <typename T = void> T DoAddMeshVertices(Il2CppVector2 p, float len) {
		return ((T (*)(NonBattleAreaEdge*, Il2CppVector2, float))(Il2CppBase() + 0x3D59A58))(this, p, len);
	}
	template <typename T = void> T DoAddMeshVertices_1(Il2CppVector3 p, float u, float v) {
		return ((T (*)(NonBattleAreaEdge*, Il2CppVector3, float, float))(Il2CppBase() + 0x3D59C98))(this, p, u, v);
	}
	template <typename T = void> T GenEdgeMesh() {
		return ((T (*)(NonBattleAreaEdge*))(Il2CppBase() + 0x3D597E0))(this);
	}

};

}
