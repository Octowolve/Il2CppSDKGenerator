#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class ISponsor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "ISponsor"));
	}


	template <typename T = uintptr_t> T Renewal(uintptr_t lease) {
		return ((T (*)(ISponsor*, uintptr_t))(Il2CppBase() + 0x0))(this, lease);
	}

};

}
