#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class Modification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "Modification"));
	}

	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& newTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& newValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
