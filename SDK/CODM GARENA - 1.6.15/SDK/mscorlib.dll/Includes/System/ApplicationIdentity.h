#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ApplicationIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ApplicationIdentity"));
	}

	template <typename T = Il2CppString*> T& _fullName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ApplicationIdentity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361E73C))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ApplicationIdentity*))(Il2CppBase() + 0x361E7EC))(this);
	}

};

}
