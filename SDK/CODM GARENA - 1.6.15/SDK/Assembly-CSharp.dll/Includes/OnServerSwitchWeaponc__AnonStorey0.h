#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnServerSwitchWeaponcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnServerSwitchWeapon>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ct() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
