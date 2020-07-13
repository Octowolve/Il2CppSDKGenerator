#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LineRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LineRenderer"));
	}


	template <typename T = void> T set_startWidth(float value) {
		return ((T (*)(LineRenderer*, float))(Il2CppBase() + 0x47A7880))(this, value);
	}
	template <typename T = void> T set_endWidth(float value) {
		return ((T (*)(LineRenderer*, float))(Il2CppBase() + 0x47A7920))(this, value);
	}
	template <typename T = void> T set_widthMultiplier(float value) {
		return ((T (*)(LineRenderer*, float))(Il2CppBase() + 0x47A79C0))(this, value);
	}
	template <typename T = void> T set_startColor(uintptr_t value) {
		return ((T (*)(LineRenderer*, uintptr_t))(Il2CppBase() + 0x47A7A60))(this, value);
	}
	template <typename T = void> T INTERNAL_set_startColor(uintptr_t value) {
		return ((T (*)(LineRenderer*, uintptr_t))(Il2CppBase() + 0x47A7A84))(this, value);
	}
	template <typename T = void> T set_endColor(uintptr_t value) {
		return ((T (*)(LineRenderer*, uintptr_t))(Il2CppBase() + 0x47A7B24))(this, value);
	}
	template <typename T = void> T INTERNAL_set_endColor(uintptr_t value) {
		return ((T (*)(LineRenderer*, uintptr_t))(Il2CppBase() + 0x47A7B48))(this, value);
	}
	template <typename T = int32_t> T get_positionCount() {
		return ((T (*)(LineRenderer*))(Il2CppBase() + 0x47A7BE8))(this);
	}
	template <typename T = void> T set_positionCount(int32_t value) {
		return ((T (*)(LineRenderer*, int32_t))(Il2CppBase() + 0x47A7C80))(this, value);
	}
	template <typename T = void> T SetPosition(int32_t index, Il2CppVector3 position) {
		return ((T (*)(LineRenderer*, int32_t, Il2CppVector3))(Il2CppBase() + 0x47A7D20))(this, index, position);
	}
	template <typename T = void> static T INTERNAL_CALL_SetPosition(uintptr_t self, int32_t index, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x47A7D54))(0, self, index, position);
	}
	template <typename T = Il2CppVector3> T GetPosition(int32_t index) {
		return ((T (*)(LineRenderer*, int32_t))(Il2CppBase() + 0x47A7DFC))(this, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPosition(uintptr_t self, int32_t index, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x47A7E3C))(0, self, index, value);
	}
	template <typename T = void> T SetPositions(Il2CppArray<uintptr_t>* positions) {
		return ((T (*)(LineRenderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A7EE4))(this, positions);
	}
	template <typename T = void> T SetColors(uintptr_t start, uintptr_t end) {
		return ((T (*)(LineRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A7F84))(this, start, end);
	}

};

}
