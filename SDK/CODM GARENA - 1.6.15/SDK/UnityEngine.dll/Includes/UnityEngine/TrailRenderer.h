#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TrailRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TrailRenderer"));
	}


	template <typename T = float> T get_time() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35678))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(TrailRenderer*, float))(Il2CppBase() + 0x4D35710))(this, value);
	}
	template <typename T = float> T get_startWidth() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D357B0))(this);
	}
	template <typename T = void> T set_startWidth(float value) {
		return ((T (*)(TrailRenderer*, float))(Il2CppBase() + 0x4D35848))(this, value);
	}
	template <typename T = float> T get_endWidth() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D358E8))(this);
	}
	template <typename T = void> T set_endWidth(float value) {
		return ((T (*)(TrailRenderer*, float))(Il2CppBase() + 0x4D35980))(this, value);
	}
	template <typename T = uintptr_t> T get_widthCurve() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35A20))(this);
	}
	template <typename T = void> T set_widthCurve(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D35AB8))(this, value);
	}
	template <typename T = float> T get_widthMultiplier() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35B58))(this);
	}
	template <typename T = void> T set_widthMultiplier(float value) {
		return ((T (*)(TrailRenderer*, float))(Il2CppBase() + 0x4D35BF0))(this, value);
	}
	template <typename T = uintptr_t> T get_startColor() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35C90))(this);
	}
	template <typename T = void> T set_startColor(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D35D68))(this, value);
	}
	template <typename T = void> T INTERNAL_get_startColor(uintptr_t* value) {
		return ((T (*)(TrailRenderer*, uintptr_t*))(Il2CppBase() + 0x4D35CC8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_startColor(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D35D8C))(this, value);
	}
	template <typename T = uintptr_t> T get_endColor() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35E2C))(this);
	}
	template <typename T = void> T set_endColor(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D35F04))(this, value);
	}
	template <typename T = void> T INTERNAL_get_endColor(uintptr_t* value) {
		return ((T (*)(TrailRenderer*, uintptr_t*))(Il2CppBase() + 0x4D35E64))(this, value);
	}
	template <typename T = void> T INTERNAL_set_endColor(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D35F28))(this, value);
	}
	template <typename T = uintptr_t> T get_colorGradient() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D35FC8))(this);
	}
	template <typename T = void> T set_colorGradient(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D36060))(this, value);
	}
	template <typename T = bool> T get_autodestruct() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36100))(this);
	}
	template <typename T = void> T set_autodestruct(bool value) {
		return ((T (*)(TrailRenderer*, bool))(Il2CppBase() + 0x4D36198))(this, value);
	}
	template <typename T = int32_t> T get_numCornerVertices() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36238))(this);
	}
	template <typename T = void> T set_numCornerVertices(int32_t value) {
		return ((T (*)(TrailRenderer*, int32_t))(Il2CppBase() + 0x4D362D0))(this, value);
	}
	template <typename T = int32_t> T get_numCapVertices() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36370))(this);
	}
	template <typename T = void> T set_numCapVertices(int32_t value) {
		return ((T (*)(TrailRenderer*, int32_t))(Il2CppBase() + 0x4D36408))(this, value);
	}
	template <typename T = float> T get_minVertexDistance() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D364A8))(this);
	}
	template <typename T = void> T set_minVertexDistance(float value) {
		return ((T (*)(TrailRenderer*, float))(Il2CppBase() + 0x4D36540))(this, value);
	}
	template <typename T = uintptr_t> T get_textureMode() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D365E0))(this);
	}
	template <typename T = void> T set_textureMode(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D36678))(this, value);
	}
	template <typename T = uintptr_t> T get_alignment() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36718))(this);
	}
	template <typename T = void> T set_alignment(uintptr_t value) {
		return ((T (*)(TrailRenderer*, uintptr_t))(Il2CppBase() + 0x4D367B0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36850))(this);
	}
	template <typename T = int32_t> T get_positionCount() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D368E8))(this);
	}
	template <typename T = int32_t> T get_numPositions() {
		return ((T (*)(TrailRenderer*))(Il2CppBase() + 0x4D36980))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(int32_t index) {
		return ((T (*)(TrailRenderer*, int32_t))(Il2CppBase() + 0x4D36A18))(this, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPosition(uintptr_t self, int32_t index, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4D36A58))(0, self, index, value);
	}
	template <typename T = int32_t> T GetPositions(Il2CppArray<uintptr_t>* positions) {
		return ((T (*)(TrailRenderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D36B00))(this, positions);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 position) {
		return ((T (*)(TrailRenderer*, Il2CppVector3))(Il2CppBase() + 0x4D36BA0))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ApplyShift(uintptr_t self, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D36BC4))(0, self, position);
	}

};

}
