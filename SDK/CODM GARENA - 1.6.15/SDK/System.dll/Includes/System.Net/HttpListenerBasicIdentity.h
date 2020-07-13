#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListenerBasicIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListenerBasicIdentity"));
	}

	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
