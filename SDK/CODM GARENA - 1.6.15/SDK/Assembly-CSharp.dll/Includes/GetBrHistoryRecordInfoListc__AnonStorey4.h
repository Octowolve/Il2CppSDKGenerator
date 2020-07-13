#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBrHistoryRecordInfoListcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBrHistoryRecordInfoList>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& curSeasonLadderLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& serverList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& curSeasonNo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
