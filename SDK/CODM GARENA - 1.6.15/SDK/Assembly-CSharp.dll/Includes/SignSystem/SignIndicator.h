#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignIndicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignIndicator"));
	}

	template <typename T = bool> T& bShowGizmo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TargetType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TargetObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TargetDroppedPickup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& TargetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_TargetType() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4B98))(this);
	}
	template <typename T = void> T set_TargetType(uintptr_t value) {
		return ((T (*)(SignIndicator*, uintptr_t))(Il2CppBase() + 0x38E4BA0))(this, value);
	}
	template <typename T = uintptr_t> T get_TargetObject() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4BA8))(this);
	}
	template <typename T = void> T set_TargetObject(uintptr_t value) {
		return ((T (*)(SignIndicator*, uintptr_t))(Il2CppBase() + 0x38E4BB0))(this, value);
	}
	template <typename T = uintptr_t> T get_TargetDroppedPickup() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4BB8))(this);
	}
	template <typename T = void> T set_TargetDroppedPickup(uintptr_t value) {
		return ((T (*)(SignIndicator*, uintptr_t))(Il2CppBase() + 0x38E4BC0))(this, value);
	}
	template <typename T = uint32_t> T get_TargetID() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4BC8))(this);
	}
	template <typename T = void> T set_TargetID(uint32_t value) {
		return ((T (*)(SignIndicator*, uint32_t))(Il2CppBase() + 0x38E4BD0))(this, value);
	}
	template <typename T = void> T OnSpawn() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4BD8))(this);
	}
	template <typename T = void> T OnDeSpawn() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4C70))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SignIndicator*))(Il2CppBase() + 0x38E4D08))(this);
	}

};

}
