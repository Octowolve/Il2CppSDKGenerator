#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshDataByServercAnonStoreyB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshDataByServer>c__AnonStoreyB"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& playlistList() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
