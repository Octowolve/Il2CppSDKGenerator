#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class ValidationHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "ValidationHandler"));
	}


	template <typename T = void> static T RaiseValidationEvent(uintptr_t handle, uintptr_t innerException, Il2CppString* message, uintptr_t xsobj, uintptr_t sender, Il2CppString* sourceUri, uintptr_t severity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AA2328))(0, handle, innerException, message, xsobj, sender, sourceUri, severity);
	}

};

}
