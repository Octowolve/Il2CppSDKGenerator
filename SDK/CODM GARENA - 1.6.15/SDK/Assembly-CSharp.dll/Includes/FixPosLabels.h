#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FixPosLabels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FixPosLabels"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& content() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
