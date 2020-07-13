#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class DefaultReferenceResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "DefaultReferenceResolver"));
	}

	template <typename T = int32_t> T& _referenceCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void*> T GetMappings(uintptr_t context) {
		return ((T (*)(DefaultReferenceResolver*, uintptr_t))(Il2CppBase() + 0x398723C))(this, context);
	}
	template <typename T = uintptr_t> T ResolveReference(uintptr_t context, Il2CppString* reference) {
		return ((T (*)(DefaultReferenceResolver*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3987540))(this, context, reference);
	}
	template <typename T = Il2CppString*> T GetReference(uintptr_t context, uintptr_t value) {
		return ((T (*)(DefaultReferenceResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39875FC))(this, context, value);
	}
	template <typename T = void> T AddReference(uintptr_t context, Il2CppString* reference, uintptr_t value) {
		return ((T (*)(DefaultReferenceResolver*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x398775C))(this, context, reference, value);
	}
	template <typename T = bool> T IsReferenced(uintptr_t context, uintptr_t value) {
		return ((T (*)(DefaultReferenceResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3987808))(this, context, value);
	}

};

}
