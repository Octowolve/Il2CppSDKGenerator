#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RankReport*))(Il2CppBase() + 0x494F6A4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t RankId, uint32_t rankLevel, int32_t RankType, int32_t RankModeType) {
		return ((T (*)(RankReport*, int32_t, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x494F71C))(this, RankId, rankLevel, RankType, RankModeType);
	}

};

}
