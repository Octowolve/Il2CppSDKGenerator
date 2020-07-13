#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HumanoidMuscle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HumanoidMuscle"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& bone() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& props() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
