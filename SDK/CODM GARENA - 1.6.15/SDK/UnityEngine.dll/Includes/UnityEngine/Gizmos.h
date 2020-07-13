#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Gizmos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Gizmos"));
	}


	template <typename T = void> static T DrawRay(Il2CppVector3 from, Il2CppVector3 direction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4770B98))(0, from, direction);
	}
	template <typename T = void> static T DrawLine(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4770C08))(0, from, to);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawLine(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4770C48))(0, from, to);
	}
	template <typename T = void> static T DrawWireSphere(Il2CppVector3 center, float radius) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4770CE8))(0, center, radius);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawWireSphere(uintptr_t center, float radius) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4770D10))(0, center, radius);
	}
	template <typename T = void> static T DrawSphere(Il2CppVector3 center, float radius) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4770DB0))(0, center, radius);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawSphere(uintptr_t center, float radius) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4770DD8))(0, center, radius);
	}
	template <typename T = void> static T DrawWireCube(Il2CppVector3 center, Il2CppVector3 size) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4770E78))(0, center, size);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawWireCube(uintptr_t center, uintptr_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4770EB8))(0, center, size);
	}
	template <typename T = void> static T DrawCube(Il2CppVector3 center, Il2CppVector3 size) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4770F58))(0, center, size);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawCube(uintptr_t center, uintptr_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4770F98))(0, center, size);
	}
	template <typename T = void> static T DrawIcon(Il2CppVector3 center, Il2CppString* name, bool allowScaling) {
		return ((T (*)(void *, Il2CppVector3, Il2CppString*, bool))(Il2CppBase() + 0x4771038))(0, center, name, allowScaling);
	}
	template <typename T = void> static T DrawIcon_1(Il2CppVector3 center, Il2CppString* name) {
		return ((T (*)(void *, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x4771110))(0, center, name);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawIcon(uintptr_t center, Il2CppString* name, bool allowScaling) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4771068))(0, center, name, allowScaling);
	}
	template <typename T = uintptr_t> static T get_color() {
		return ((T (*)(void *))(Il2CppBase() + 0x477113C))(0);
	}
	template <typename T = void> static T set_color(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771208))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_color(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4771170))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_color(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771230))(0, value);
	}
	template <typename T = uintptr_t> static T get_matrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x47712C8))(0);
	}
	template <typename T = void> static T set_matrix(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771408))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_matrix(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4771370))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_matrix(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771480))(0, value);
	}

};

}
