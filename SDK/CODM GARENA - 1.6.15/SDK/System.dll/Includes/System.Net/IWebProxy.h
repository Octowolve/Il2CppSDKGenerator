#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class IWebProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "IWebProxy"));
	}


	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(IWebProxy*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetProxy(uintptr_t destination) {
		return ((T (*)(IWebProxy*, uintptr_t))(Il2CppBase() + 0x0))(this, destination);
	}
	template <typename T = bool> T IsBypassed(uintptr_t host) {
		return ((T (*)(IWebProxy*, uintptr_t))(Il2CppBase() + 0x0))(this, host);
	}

};

}
