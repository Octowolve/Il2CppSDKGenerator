#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMpHistoryRecordInfoListcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMpHistoryRecordInfoList>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& seasonHighestLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMpHistoryRecordInfoListcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x37EDB3C))(this, it);
	}

};

}
