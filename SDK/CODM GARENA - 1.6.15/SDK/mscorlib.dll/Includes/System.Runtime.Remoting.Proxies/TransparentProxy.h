#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Proxies {

class TransparentProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "TransparentProxy"));
	}

	template <typename T = uintptr_t> T& _rp() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
