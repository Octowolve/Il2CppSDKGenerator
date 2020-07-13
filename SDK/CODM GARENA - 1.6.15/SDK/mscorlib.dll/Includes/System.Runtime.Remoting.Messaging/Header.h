#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class Header
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "Header"));
	}

	template <typename T = Il2CppString*> T& HeaderNamespace() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& MustUnderstand() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
