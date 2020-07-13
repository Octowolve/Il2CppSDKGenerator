#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UriScheme
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "UriScheme"));
	}

	template <typename T = Il2CppString*> T& scheme() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& delimiter() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& defaultPort() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
