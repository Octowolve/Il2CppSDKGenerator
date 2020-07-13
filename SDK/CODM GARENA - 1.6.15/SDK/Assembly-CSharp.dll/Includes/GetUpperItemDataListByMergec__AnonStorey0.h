#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUpperItemDataListByMergecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUpperItemDataListByMerge>c__AnonStorey0"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& upperItemDataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
