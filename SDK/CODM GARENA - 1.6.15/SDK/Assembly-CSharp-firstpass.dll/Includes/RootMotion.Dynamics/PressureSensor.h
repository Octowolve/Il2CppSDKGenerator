#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PressureSensor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PressureSensor"));
	}

	template <typename T = bool> T& visualize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& layers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& center() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& inContact() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& bottom() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& r() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& fixedFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB338))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(PressureSensor*, Il2CppVector3))(Il2CppBase() + 0x38BB34C))(this, value);
	}
	template <typename T = bool> T get_inContact() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB358))(this);
	}
	template <typename T = void> T set_inContact(bool value) {
		return ((T (*)(PressureSensor*, bool))(Il2CppBase() + 0x38BB360))(this, value);
	}
	template <typename T = Il2CppVector3> T get_bottom() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB368))(this);
	}
	template <typename T = void> T set_bottom(Il2CppVector3 value) {
		return ((T (*)(PressureSensor*, Il2CppVector3))(Il2CppBase() + 0x38BB37C))(this, value);
	}
	template <typename T = uintptr_t> T get_r() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB388))(this);
	}
	template <typename T = void> T set_r(uintptr_t value) {
		return ((T (*)(PressureSensor*, uintptr_t))(Il2CppBase() + 0x38BB390))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB398))(this);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t c) {
		return ((T (*)(PressureSensor*, uintptr_t))(Il2CppBase() + 0x38BB468))(this, c);
	}
	template <typename T = void> T OnCollisionStay(uintptr_t c) {
		return ((T (*)(PressureSensor*, uintptr_t))(Il2CppBase() + 0x38BB658))(this, c);
	}
	template <typename T = void> T OnCollisionExit(uintptr_t c) {
		return ((T (*)(PressureSensor*, uintptr_t))(Il2CppBase() + 0x38BB65C))(this, c);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB668))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB6D0))(this);
	}
	template <typename T = void> T ProcessCollision(uintptr_t c) {
		return ((T (*)(PressureSensor*, uintptr_t))(Il2CppBase() + 0x38BB46C))(this, c);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PressureSensor*))(Il2CppBase() + 0x38BB748))(this);
	}

};

}
