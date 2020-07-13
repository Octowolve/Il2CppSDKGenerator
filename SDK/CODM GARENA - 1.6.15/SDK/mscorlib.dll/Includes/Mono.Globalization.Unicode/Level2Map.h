#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class Level2Map
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "Level2Map"));
	}

	template <typename T = unsigned char> T& Source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& Replace() {
		return *(T*)((uintptr_t)this + 0x9);
	}


};

}
