#pragma once
#include <Il2Cpp/Il2Cpp.h>

class C4KillerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C4KillerInfo"));
	}

	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& ExplodePos() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& OwnerPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
