#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodClass"));
	}

	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& BloodBar() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
