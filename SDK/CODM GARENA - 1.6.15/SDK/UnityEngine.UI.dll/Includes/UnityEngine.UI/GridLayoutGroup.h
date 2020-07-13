#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class GridLayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "GridLayoutGroup"));
	}

	template <typename T = uintptr_t> T& m_StartCorner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_StartAxis() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& m_CellSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& m_Spacing() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Constraint() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_ConstraintCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> T get_startCorner() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1AF78))(this);
	}
	template <typename T = void> T set_startCorner(uintptr_t value) {
		return ((T (*)(GridLayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D1AF80))(this, value);
	}
	template <typename T = uintptr_t> T get_startAxis() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B010))(this);
	}
	template <typename T = void> T set_startAxis(uintptr_t value) {
		return ((T (*)(GridLayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D1B018))(this, value);
	}
	template <typename T = Il2CppVector2> T get_cellSize() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B0A8))(this);
	}
	template <typename T = void> T set_cellSize(Il2CppVector2 value) {
		return ((T (*)(GridLayoutGroup*, Il2CppVector2))(Il2CppBase() + 0x3D1B0BC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_spacing() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B160))(this);
	}
	template <typename T = void> T set_spacing(Il2CppVector2 value) {
		return ((T (*)(GridLayoutGroup*, Il2CppVector2))(Il2CppBase() + 0x3D1B174))(this, value);
	}
	template <typename T = uintptr_t> T get_constraint() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B218))(this);
	}
	template <typename T = void> T set_constraint(uintptr_t value) {
		return ((T (*)(GridLayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D1B220))(this, value);
	}
	template <typename T = int32_t> T get_constraintCount() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B2B0))(this);
	}
	template <typename T = void> T set_constraintCount(int32_t value) {
		return ((T (*)(GridLayoutGroup*, int32_t))(Il2CppBase() + 0x3D1B2B8))(this, value);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1B398))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1BB24))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1BEC0))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(GridLayoutGroup*))(Il2CppBase() + 0x3D1C8C0))(this);
	}
	template <typename T = void> T SetCellsAlongAxis(int32_t axis) {
		return ((T (*)(GridLayoutGroup*, int32_t))(Il2CppBase() + 0x3D1BEC8))(this, axis);
	}

};

}
