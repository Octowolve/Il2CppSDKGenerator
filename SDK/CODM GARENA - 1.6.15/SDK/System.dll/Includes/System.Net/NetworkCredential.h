#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class NetworkCredential
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "NetworkCredential"));
	}

	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& domain() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Domain() {
		return ((T (*)(NetworkCredential*))(Il2CppBase() + 0x3E4AFC0))(this);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(NetworkCredential*))(Il2CppBase() + 0x3E4B080))(this);
	}
	template <typename T = Il2CppString*> T get_Password() {
		return ((T (*)(NetworkCredential*))(Il2CppBase() + 0x3E4B140))(this);
	}
	template <typename T = uintptr_t> T GetCredential(uintptr_t uri, Il2CppString* authType) {
		return ((T (*)(NetworkCredential*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E4B200))(this, uri, authType);
	}

};

}
