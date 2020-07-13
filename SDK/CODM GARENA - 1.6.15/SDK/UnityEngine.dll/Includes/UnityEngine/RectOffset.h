#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RectOffset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RectOffset"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SourceStyle() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACC4A0))(this);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACC83C))(this);
	}
	template <typename T = int32_t> T get_left() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACC8D4))(this);
	}
	template <typename T = void> T set_left(int32_t value) {
		return ((T (*)(RectOffset*, int32_t))(Il2CppBase() + 0x4ACC5BC))(this, value);
	}
	template <typename T = int32_t> T get_right() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACC96C))(this);
	}
	template <typename T = void> T set_right(int32_t value) {
		return ((T (*)(RectOffset*, int32_t))(Il2CppBase() + 0x4ACC65C))(this, value);
	}
	template <typename T = int32_t> T get_top() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCA04))(this);
	}
	template <typename T = void> T set_top(int32_t value) {
		return ((T (*)(RectOffset*, int32_t))(Il2CppBase() + 0x4ACC6FC))(this, value);
	}
	template <typename T = int32_t> T get_bottom() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCA9C))(this);
	}
	template <typename T = void> T set_bottom(int32_t value) {
		return ((T (*)(RectOffset*, int32_t))(Il2CppBase() + 0x4ACC79C))(this, value);
	}
	template <typename T = int32_t> T get_horizontal() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCB34))(this);
	}
	template <typename T = int32_t> T get_vertical() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCBCC))(this);
	}
	template <typename T = Il2CppRect> T Add(Il2CppRect rect) {
		return ((T (*)(RectOffset*, Il2CppRect))(Il2CppBase() + 0x4ACCC64))(this, rect);
	}
	template <typename T = void> static T INTERNAL_CALL_Add(uintptr_t self, uintptr_t rect, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACCCB0))(0, self, rect, value);
	}
	template <typename T = Il2CppRect> T Remove(Il2CppRect rect) {
		return ((T (*)(RectOffset*, Il2CppRect))(Il2CppBase() + 0x4ACCD58))(this, rect);
	}
	template <typename T = void> static T INTERNAL_CALL_Remove(uintptr_t self, uintptr_t rect, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACCDA4))(0, self, rect, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCE4C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RectOffset*))(Il2CppBase() + 0x4ACCEC0))(this);
	}

};

}
