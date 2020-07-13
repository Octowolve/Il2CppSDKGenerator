#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DirectOffsetParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DirectOffsetParam"));
	}

	template <typename T = Il2CppVector3> T& Direct1P() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Direct3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
