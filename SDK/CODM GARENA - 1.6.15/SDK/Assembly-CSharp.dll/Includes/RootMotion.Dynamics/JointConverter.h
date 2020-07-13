#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class JointConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RootMotion.Dynamics", "JointConverter"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ToConfigurable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HingeToConfigurable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedToConfigurable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpringToConfigurable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CharacterToConfigurable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertJoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToHighSoftJointLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToLowSoftJointLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToSoftJointLimitSpring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyLimitSpring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T ToConfigurable(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413E83C))(0, root);
	}
	template <typename T = void> static T HingeToConfigurable(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413F0B4))(0, src);
	}
	template <typename T = void> static T FixedToConfigurable(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413F524))(0, src);
	}
	template <typename T = void> static T SpringToConfigurable(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413F738))(0, src);
	}
	template <typename T = void> static T CharacterToConfigurable(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413EC54))(0, src);
	}
	template <typename T = void> static T ConvertJoint(uintptr_t conf, uintptr_t src) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x413FA64))(0, conf, src);
	}
	template <typename T = uintptr_t> static T ConvertToHighSoftJointLimit(uintptr_t src, uintptr_t spring, bool useSpring) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x413FC68))(0, src, spring, useSpring);
	}
	template <typename T = uintptr_t> static T ConvertToLowSoftJointLimit(uintptr_t src, uintptr_t spring, bool useSpring) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x413FFC0))(0, src, spring, useSpring);
	}
	template <typename T = uintptr_t> static T ConvertToSoftJointLimitSpring(uintptr_t src, uintptr_t spring, bool useSpring) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x413FE28))(0, src, spring, useSpring);
	}
	template <typename T = uintptr_t> static T CopyLimit(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4140180))(0, src);
	}
	template <typename T = uintptr_t> static T CopyLimitSpring(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41402F4))(0, src);
	}

};

}
