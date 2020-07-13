#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireOffsetParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireOffsetParam"));
	}

	template <typename T = Il2CppVector3> T& Stand() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Crouch() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Prone() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
