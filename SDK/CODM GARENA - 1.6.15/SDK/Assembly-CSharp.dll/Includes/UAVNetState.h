#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UAVNetState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UAVNetState"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
