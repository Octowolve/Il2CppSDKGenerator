#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllActivityTabscAnonStoreyF
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllActivityTabs>c__AnonStoreyF"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& leftTabList() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
