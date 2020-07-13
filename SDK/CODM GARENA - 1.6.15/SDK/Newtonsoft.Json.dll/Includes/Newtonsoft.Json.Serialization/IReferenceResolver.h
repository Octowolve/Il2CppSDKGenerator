#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class IReferenceResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "IReferenceResolver"));
	}


	template <typename T = uintptr_t> T ResolveReference(uintptr_t context, Il2CppString* reference) {
		return ((T (*)(IReferenceResolver*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, context, reference);
	}
	template <typename T = Il2CppString*> T GetReference(uintptr_t context, uintptr_t value) {
		return ((T (*)(IReferenceResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, context, value);
	}
	template <typename T = bool> T IsReferenced(uintptr_t context, uintptr_t value) {
		return ((T (*)(IReferenceResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, context, value);
	}
	template <typename T = void> T AddReference(uintptr_t context, Il2CppString* reference, uintptr_t value) {
		return ((T (*)(IReferenceResolver*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, context, reference, value);
	}

};

}
