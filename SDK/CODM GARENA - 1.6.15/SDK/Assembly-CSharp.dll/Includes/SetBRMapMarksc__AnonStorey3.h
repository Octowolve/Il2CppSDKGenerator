#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBRMapMarkscAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBRMapMarks>c__AnonStorey3"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mapMarkList() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
