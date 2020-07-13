#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobCellArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobCellArea"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CellList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Max() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Min() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SegNumX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SegNumY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SegNumZ() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& SegSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxAreaLength() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CellStepLength() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriangles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCellIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetCellIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIntersectCellIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsHitBy(uintptr_t line, uintptr_t hitInfo) {
		return ((T (*)(CobCellArea*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A24ED0))(this, line, hitInfo);
	}
	template <typename T = void> T ProcessTriangles(Il2CppArray<uintptr_t>* triangles, bool includeOutside) {
		return ((T (*)(CobCellArea*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3A25254))(this, triangles, includeOutside);
	}
	template <typename T = void> T GetCellIndex(int32_t index, uintptr_t indexX, uintptr_t indexY, uintptr_t indexZ) {
		return ((T (*)(CobCellArea*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A25A4C))(this, index, indexX, indexY, indexZ);
	}
	template <typename T = int32_t> T GetCellIndex_1(Il2CppVector3 point, bool includeOutside) {
		return ((T (*)(CobCellArea*, Il2CppVector3, bool))(Il2CppBase() + 0x3A25B6C))(this, point, includeOutside);
	}
	template <typename T = int32_t> T GetCellIndex_2(Il2CppVector3 point, uintptr_t indexX, uintptr_t indexY, uintptr_t indexZ, bool includeOutside) {
		return ((T (*)(CobCellArea*, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3A25C90))(this, point, indexX, indexY, indexZ, includeOutside);
	}
	template <typename T = bool> T GetIntersectCellIndex(uintptr_t line, uintptr_t step, uintptr_t index) {
		return ((T (*)(CobCellArea*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A2509C))(this, line, step, index);
	}
	template <typename T = uintptr_t> static T BuildArea(Il2CppVector3 max, Il2CppVector3 min, Il2CppVector3 size, uintptr_t cellType) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1B467DC))(0, max, min, size, cellType);
	}

};

}
