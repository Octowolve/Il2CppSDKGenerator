#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Principal {

class WindowsIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Principal", "WindowsIdentity"));
	}

	template <typename T = uintptr_t> T& _token() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _account() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _authenticated() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& invalidWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(WindowsIdentity*, uintptr_t))(Il2CppBase() + 0x4282844))(this, sender);
	}
	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(WindowsIdentity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4282D04))(this, info, context);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WindowsIdentity*))(Il2CppBase() + 0x4282E7C))(this);
	}
	template <typename T = uintptr_t> static T GetCurrent() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282F04))(0);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WindowsIdentity*))(Il2CppBase() + 0x4282FF0))(this);
	}
	template <typename T = bool> static T get_IsPosix() {
		return ((T (*)(void *))(Il2CppBase() + 0x42830A4))(0);
	}
	template <typename T = void> T SetToken(uintptr_t token) {
		return ((T (*)(WindowsIdentity*, uintptr_t))(Il2CppBase() + 0x4282568))(this, token);
	}
	template <typename T = uintptr_t> static T GetCurrentToken() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282FEC))(0);
	}
	template <typename T = Il2CppString*> static T GetTokenName(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4282C54))(0, token);
	}

};

}
