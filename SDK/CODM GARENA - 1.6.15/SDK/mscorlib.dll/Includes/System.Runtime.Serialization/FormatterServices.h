#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class FormatterServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "FormatterServices"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GetObjectData(uintptr_t obj, Il2CppArray<uintptr_t>* members) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3021AEC))(0, obj, members);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSerializableMembers(uintptr_t type, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x301E418))(0, type, context);
	}
	template <typename T = void> static T GetFields(uintptr_t reflectedType, uintptr_t type, uintptr_t fields) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x302C828))(0, reflectedType, type, fields);
	}
	template <typename T = uintptr_t> static T GetUninitializedObject(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30265FC))(0, type);
	}
	template <typename T = uintptr_t> static T GetSafeUninitializedObject(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30265F8))(0, type);
	}

};

}
