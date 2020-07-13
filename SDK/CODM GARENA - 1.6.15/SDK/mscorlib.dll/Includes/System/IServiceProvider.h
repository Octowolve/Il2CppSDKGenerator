#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IServiceProvider"));
	}


	template <typename T = uintptr_t> T GetService(uintptr_t serviceType) {
		return ((T (*)(IServiceProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, serviceType);
	}

};

}
