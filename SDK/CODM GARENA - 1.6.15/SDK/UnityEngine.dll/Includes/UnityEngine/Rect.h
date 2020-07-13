#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Rect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Rect"));
	}

	template <typename T = float> T& m_XMin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_YMin() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Height() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppRect> static T MinMaxRect(float xmin, float ymin, float xmax, float ymax) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4ACB514))(0, xmin, ymin, xmax, ymax);
	}
	template <typename T = void> T Set(float x, float y, float width, float height) {
		return ((T (*)(Rect*, float, float, float, float))(Il2CppBase() + 0x4ACB54C))(this, x, y, width, height);
	}
	template <typename T = float> T get_x() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB568))(this);
	}
	template <typename T = void> T set_x(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB578))(this, value);
	}
	template <typename T = float> T get_y() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB588))(this);
	}
	template <typename T = void> T set_y(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB598))(this, value);
	}
	template <typename T = Il2CppVector2> T get_position() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB5E4))(this);
	}
	template <typename T = Il2CppVector2> T get_center() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB68C))(this);
	}
	template <typename T = Il2CppVector2> T get_min() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB744))(this);
	}
	template <typename T = Il2CppVector2> T get_max() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB808))(this);
	}
	template <typename T = float> T get_width() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB868))(this);
	}
	template <typename T = void> T set_width(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB878))(this, value);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB888))(this);
	}
	template <typename T = void> T set_height(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB898))(this, value);
	}
	template <typename T = Il2CppVector2> T get_size() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB8E4))(this);
	}
	template <typename T = float> T get_xMin() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB928))(this);
	}
	template <typename T = void> T set_xMin(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB950))(this, value);
	}
	template <typename T = float> T get_yMin() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB970))(this);
	}
	template <typename T = void> T set_yMin(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB998))(this, value);
	}
	template <typename T = float> T get_xMax() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB9B8))(this);
	}
	template <typename T = void> T set_xMax(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACB9E0))(this, value);
	}
	template <typename T = float> T get_yMax() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACB9F4))(this);
	}
	template <typename T = void> T set_yMax(float value) {
		return ((T (*)(Rect*, float))(Il2CppBase() + 0x4ACBA1C))(this, value);
	}
	template <typename T = bool> T Contains(Il2CppVector2 point) {
		return ((T (*)(Rect*, Il2CppVector2))(Il2CppBase() + 0x4ACBA90))(this, point);
	}
	template <typename T = bool> T Contains_1(Il2CppVector3 point) {
		return ((T (*)(Rect*, Il2CppVector3))(Il2CppBase() + 0x4ACBB50))(this, point);
	}
	template <typename T = Il2CppRect> static T OrderMinMax(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x4ACBBB0))(0, rect);
	}
	template <typename T = bool> T Overlaps(Il2CppRect other) {
		return ((T (*)(Rect*, Il2CppRect))(Il2CppBase() + 0x4ACBC78))(this, other);
	}
	template <typename T = bool> T Overlaps_1(Il2CppRect other, bool allowInverse) {
		return ((T (*)(Rect*, Il2CppRect, bool))(Il2CppBase() + 0x4ACBDA8))(this, other, allowInverse);
	}
	template <typename T = bool> static T op_Inequality(Il2CppRect lhs, Il2CppRect rhs) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x4ACBDD0))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Equality(Il2CppRect lhs, Il2CppRect rhs) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x4ACBE40))(0, lhs, rhs);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACBF2C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Rect*, uintptr_t))(Il2CppBase() + 0x4ACC08C))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Rect*))(Il2CppBase() + 0x4ACC30C))(this);
	}

};

}
