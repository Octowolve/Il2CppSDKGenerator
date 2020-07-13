#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ParameterInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ParameterInfo"));
	}

	template <typename T = uintptr_t> T& ClassImpl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& DefaultValueImpl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MemberImpl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& NameImpl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& PositionImpl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AttrsImpl() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& marshalAs() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD83C8))(this);
	}
	template <typename T = uintptr_t> T get_ParameterType() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD86A0))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD86A8))(this);
	}
	template <typename T = uintptr_t> T get_DefaultValue() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD86B0))(this);
	}
	template <typename T = bool> T get_IsIn() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8A3C))(this);
	}
	template <typename T = bool> T get_IsOptional() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8A5C))(this);
	}
	template <typename T = bool> T get_IsOut() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8A80))(this);
	}
	template <typename T = bool> T get_IsRetval() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD867C))(this);
	}
	template <typename T = uintptr_t> T get_Member() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8AA4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8AAC))(this);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8AB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(ParameterInfo*, bool))(Il2CppBase() + 0x4FD8ABC))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ParameterInfo*, uintptr_t, bool))(Il2CppBase() + 0x4FD8B6C))(this, attributeType, inherit);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ParameterInfo*, uintptr_t, bool))(Il2CppBase() + 0x4FD8C30))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPseudoCustomAttributes() {
		return ((T (*)(ParameterInfo*))(Il2CppBase() + 0x4FD8CF4))(this);
	}

};

}
