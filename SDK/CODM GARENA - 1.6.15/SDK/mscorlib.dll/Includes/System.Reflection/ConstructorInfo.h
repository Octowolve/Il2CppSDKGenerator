#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ConstructorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ConstructorInfo"));
	}

	template <typename T = Il2CppString*> static T& ConstructorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TypeConstructorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(ConstructorInfo*))(Il2CppBase() + 0x4564580))(this);
	}
	template <typename T = uintptr_t> T Invoke(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(ConstructorInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4564588))(this, parameters);
	}
	template <typename T = uintptr_t> T Invoke_1(uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(ConstructorInfo*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, invokeAttr, binder, parameters, culture);
	}

};

}
