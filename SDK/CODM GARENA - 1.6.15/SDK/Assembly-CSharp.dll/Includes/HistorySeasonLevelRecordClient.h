#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistorySeasonLevelRecordClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistorySeasonLevelRecordClient"));
	}

	template <typename T = int32_t> T& seasonNo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& seasonInterval() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& seasonIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bLeftLine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bRightLine() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& RankIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& RankName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bCurSeason() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
