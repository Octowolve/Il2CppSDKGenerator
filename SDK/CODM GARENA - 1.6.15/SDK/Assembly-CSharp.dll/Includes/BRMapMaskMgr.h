#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRMapMaskMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRMapMaskMgr"));
	}

	template <typename T = int32_t> static T& LoadCellRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UnloadCellRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_Isinit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_MaskBR() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_AllLoadCells() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_NeedDel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CellSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CellWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CellHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_OneDivCell() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_LastCheckPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRMapMaskMgr*))(Il2CppBase() + 0x52F4F6C))(this);
	}
	template <typename T = void> T Init_1(uintptr_t asset) {
		return ((T (*)(BRMapMaskMgr*, uintptr_t))(Il2CppBase() + 0x52F50B8))(this, asset);
	}
	template <typename T = void> T ClearBinaryReader() {
		return ((T (*)(BRMapMaskMgr*))(Il2CppBase() + 0x52F53A8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRMapMaskMgr*, float))(Il2CppBase() + 0x52F53E4))(this, deltaTime);
	}
	template <typename T = unsigned char> T GetMask(int32_t x, int32_t y) {
		return ((T (*)(BRMapMaskMgr*, int32_t, int32_t))(Il2CppBase() + 0x52F56E0))(this, x, y);
	}
	template <typename T = unsigned char> T GetMask_1(Il2CppVector3 worldPos) {
		return ((T (*)(BRMapMaskMgr*, Il2CppVector3))(Il2CppBase() + 0x52F58C8))(this, worldPos);
	}
	template <typename T = bool> T CheckMask(Il2CppVector3 pos, uintptr_t type) {
		return ((T (*)(BRMapMaskMgr*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x52F59C8))(this, pos, type);
	}
	template <typename T = bool> T CheckMask_1(int32_t x, int32_t y, uintptr_t type) {
		return ((T (*)(BRMapMaskMgr*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x52F59EC))(this, x, y, type);
	}
	template <typename T = void> T CheckAndLoadCell(Il2CppVector3 pos) {
		return ((T (*)(BRMapMaskMgr*, Il2CppVector3))(Il2CppBase() + 0x52F55E0))(this, pos);
	}
	template <typename T = void> T CheckAndLoadCell_1(int32_t x, int32_t y) {
		return ((T (*)(BRMapMaskMgr*, int32_t, int32_t))(Il2CppBase() + 0x52F5A08))(this, x, y);
	}
	template <typename T = int32_t> T CountLoadNum() {
		return ((T (*)(BRMapMaskMgr*))(Il2CppBase() + 0x52F61D8))(this);
	}
	template <typename T = int32_t> T CountSqrDis(int32_t x, int32_t y, int32_t cellX, int32_t cellY) {
		return ((T (*)(BRMapMaskMgr*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x52F626C))(this, x, y, cellX, cellY);
	}
	template <typename T = void> T ForceLoadAll() {
		return ((T (*)(BRMapMaskMgr*))(Il2CppBase() + 0x52F6274))(this);
	}
	template <typename T = void> T ForceUnloadAll() {
		return ((T (*)(BRMapMaskMgr*))(Il2CppBase() + 0x52F62E0))(this);
	}
	template <typename T = void> T LoadCellMaskInfo(int32_t x, int32_t y) {
		return ((T (*)(BRMapMaskMgr*, int32_t, int32_t))(Il2CppBase() + 0x52F5FC8))(this, x, y);
	}

};

}
