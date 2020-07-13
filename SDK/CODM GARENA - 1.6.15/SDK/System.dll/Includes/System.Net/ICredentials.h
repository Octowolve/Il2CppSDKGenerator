#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ICredentials
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ICredentials"));
	}


	template <typename T = uintptr_t> T GetCredential(uintptr_t uri, Il2CppString* authType) {
		return ((T (*)(ICredentials*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, uri, authType);
	}

};

}
