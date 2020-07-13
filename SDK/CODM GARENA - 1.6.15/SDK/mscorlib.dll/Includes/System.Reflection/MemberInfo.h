#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MemberInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MemberInfo"));
	}


	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x4FD0FA0))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MemberInfo*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MemberInfo*, bool))(Il2CppBase() + 0x0))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MemberInfo*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, attributeType, inherit);
	}
	template <typename T = int32_t> T get_MetadataToken() {
		return ((T (*)(MemberInfo*))(Il2CppBase() + 0x4FD0FE0))(this);
	}

};

}
