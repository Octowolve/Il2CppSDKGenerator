#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CubeCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CubeCell"));
	}

	template <typename T = int32_t> static T& prime1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& prime2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& prime3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_CellOrigin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_CellSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_CellPosX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CellPosY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_CellPosZ() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_BoundsInit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Bounds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MakeHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseNeighboring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TraverseNeighboring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseMinMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = int32_t> T get_hash() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159ED4))(this);
	}
	template <typename T = int32_t> T get_cellPosX() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159EDC))(this);
	}
	template <typename T = int32_t> T get_cellPosY() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159EE4))(this);
	}
	template <typename T = int32_t> T get_cellPosZ() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159EEC))(this);
	}
	template <typename T = Il2CppVector3> T get_cellOrigin() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159EF4))(this);
	}
	template <typename T = Il2CppVector3> T get_cellPos() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159F08))(this);
	}
	template <typename T = Il2CppVector3> T get_cellSize3() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x4159F58))(this);
	}
	template <typename T = void> T Set(Il2CppVector3 pos, Il2CppVector3 cellOrigin, float cellSize) {
		return ((T (*)(CubeCell*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x415A238))(this, pos, cellOrigin, cellSize);
	}
	template <typename T = Il2CppVector3> T GetCenter() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415A450))(this);
	}
	template <typename T = uintptr_t> T GetBounds() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415A678))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415A824))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(CubeCell*, uintptr_t))(Il2CppBase() + 0x415A9EC))(this, obj);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415ABF8))(this);
	}
	template <typename T = Il2CppVector3> static T GetCellPos(Il2CppVector3 pos, Il2CppVector3 cellOrigin, float cellSize) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x415AC00))(0, pos, cellOrigin, cellSize);
	}
	template <typename T = int32_t> static T MakeHash(Il2CppVector3 pos, Il2CppVector3 cellOrigin, float cellSize) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x415AE08))(0, pos, cellOrigin, cellSize);
	}
	template <typename T = int32_t> static T MakeHash_1(int32_t posX, int32_t posY, int32_t posZ) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4159DA0))(0, posX, posY, posZ);
	}
	template <typename T = void> static T TraverseNeighboring(Il2CppVector3 cellPos, int32_t depth, uintptr_t action) {
		return ((T (*)(void *, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x415B010))(0, cellPos, depth, action);
	}
	template <typename T = void> static T TraverseNeighboring_1(int32_t posX, int32_t posY, int32_t posZ, int32_t depth, uintptr_t action) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x415B158))(0, posX, posY, posZ, depth, action);
	}
	template <typename T = void> static T TraverseMinMax(Il2CppVector3 minCellPos, Il2CppVector3 maxCellPos, bool subdivided, uintptr_t action) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x415B398))(0, minCellPos, maxCellPos, subdivided, action);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415B748))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(CubeCell*, uintptr_t))(Il2CppBase() + 0x415B838))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(CubeCell*))(Il2CppBase() + 0x415B928))(this);
	}

};

}
