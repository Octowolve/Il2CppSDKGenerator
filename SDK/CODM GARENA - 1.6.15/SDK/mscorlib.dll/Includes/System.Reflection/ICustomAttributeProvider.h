#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ICustomAttributeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ICustomAttributeProvider"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(ICustomAttributeProvider*, bool))(Il2CppBase() + 0x0))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ICustomAttributeProvider*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, attributeType, inherit);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ICustomAttributeProvider*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, attributeType, inherit);
	}

};

}
