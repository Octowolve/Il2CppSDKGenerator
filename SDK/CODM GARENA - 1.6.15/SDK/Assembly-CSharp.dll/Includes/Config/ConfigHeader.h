#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigHeader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigHeader"));
	}

	template <typename T = Il2CppString*> T& HeaderName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Code() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
