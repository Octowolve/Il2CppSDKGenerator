#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DSConnectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DSConnectInfo"));
	}

	template <typename T = Il2CppString*> T& IP() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint16_t> T& Port() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int64_t> T& RoundtripTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ISP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsSuitable() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
