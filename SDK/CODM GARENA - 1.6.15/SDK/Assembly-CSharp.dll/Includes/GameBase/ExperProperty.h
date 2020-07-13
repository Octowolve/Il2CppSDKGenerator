#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExperProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExperProperty"));
	}

	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ExperId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Number1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Number2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Number3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SuitMatchType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& m_SuitWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEB58))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ExperProperty*, bool))(Il2CppBase() + 0x31CEB60))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEB68))(this);
	}
	template <typename T = uintptr_t> T get_ExperId() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC00))(this);
	}
	template <typename T = void> T set_ExperId(uintptr_t value) {
		return ((T (*)(ExperProperty*, uintptr_t))(Il2CppBase() + 0x31CEC08))(this, value);
	}
	template <typename T = int32_t> T get_Number1() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC10))(this);
	}
	template <typename T = void> T set_Number1(int32_t value) {
		return ((T (*)(ExperProperty*, int32_t))(Il2CppBase() + 0x31CEC18))(this, value);
	}
	template <typename T = int32_t> T get_Number2() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC20))(this);
	}
	template <typename T = void> T set_Number2(int32_t value) {
		return ((T (*)(ExperProperty*, int32_t))(Il2CppBase() + 0x31CEC28))(this, value);
	}
	template <typename T = int32_t> T get_Number3() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC30))(this);
	}
	template <typename T = void> T set_Number3(int32_t value) {
		return ((T (*)(ExperProperty*, int32_t))(Il2CppBase() + 0x31CEC38))(this, value);
	}
	template <typename T = uintptr_t> T get_SuitMatchType() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC40))(this);
	}
	template <typename T = void> T set_SuitMatchType(uintptr_t value) {
		return ((T (*)(ExperProperty*, uintptr_t))(Il2CppBase() + 0x31CEC48))(this, value);
	}
	template <typename T = uint32_t> T get_SuitWeapon() {
		return ((T (*)(ExperProperty*))(Il2CppBase() + 0x31CEC50))(this);
	}
	template <typename T = void> T set_SuitWeapon(uint32_t value) {
		return ((T (*)(ExperProperty*, uint32_t))(Il2CppBase() + 0x31CEC58))(this, value);
	}

};

}
