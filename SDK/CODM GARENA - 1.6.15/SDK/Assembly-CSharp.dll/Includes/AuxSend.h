#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AuxSend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AuxSend"));
	}

	template <typename T = Il2CppString*> T& BusName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& AuxBusID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ControlVal() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
