#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MemberInfoSerializationHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MemberInfoSerializationHolder"));
	}

	template <typename T = Il2CppString*> T& _memberName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _memberSignature() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _memberType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _reflectedType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _genericArguments() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> static T Serialize(uintptr_t info, Il2CppString* name, uintptr_t klass, Il2CppString* signature, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4FD1158))(0, info, name, klass, signature, type);
	}
	template <typename T = void> static T Serialize_1(uintptr_t info, Il2CppString* name, uintptr_t klass, Il2CppString* signature, uintptr_t type, Il2CppArray<uintptr_t>* genericArguments) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD1188))(0, info, name, klass, signature, type, genericArguments);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MemberInfoSerializationHolder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD1430))(this, info, context);
	}
	template <typename T = uintptr_t> T GetRealObject(uintptr_t context) {
		return ((T (*)(MemberInfoSerializationHolder*, uintptr_t))(Il2CppBase() + 0x4FD14C4))(this, context);
	}

};

}
