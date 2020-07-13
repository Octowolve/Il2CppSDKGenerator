#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel.Design {

class IReferenceService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel.Design", "IReferenceService"));
	}


	template <typename T = Il2CppString*> T GetName(uintptr_t reference) {
		return ((T (*)(IReferenceService*, uintptr_t))(Il2CppBase() + 0x0))(this, reference);
	}
	template <typename T = uintptr_t> T GetReference(Il2CppString* name) {
		return ((T (*)(IReferenceService*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetReferences(uintptr_t baseType) {
		return ((T (*)(IReferenceService*, uintptr_t))(Il2CppBase() + 0x0))(this, baseType);
	}

};

}
