#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MasterProps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "MasterProps"));
	}

	template <typename T = uintptr_t> T& normalMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mappingBlendSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& activateOnStaticCollisions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& activateOnImpulse() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
