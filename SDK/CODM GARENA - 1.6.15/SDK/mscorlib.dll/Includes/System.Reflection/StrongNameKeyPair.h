#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class StrongNameKeyPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "StrongNameKeyPair"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _publicKey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _keyPairContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _keyPairExported() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _keyPairArray() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _rsa() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(StrongNameKeyPair*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD963C))(this, info, context);
	}
	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(StrongNameKeyPair*, uintptr_t))(Il2CppBase() + 0x4FD97D0))(this, sender);
	}
	template <typename T = uintptr_t> T GetRSA() {
		return ((T (*)(StrongNameKeyPair*))(Il2CppBase() + 0x4FD97D4))(this);
	}
	template <typename T = uintptr_t> T StrongName() {
		return ((T (*)(StrongNameKeyPair*))(Il2CppBase() + 0x4FD9908))(this);
	}

};

}
