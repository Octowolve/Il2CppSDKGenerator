#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoringInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoringInfo"));
	}

	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& reason() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& scoreCategory() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
