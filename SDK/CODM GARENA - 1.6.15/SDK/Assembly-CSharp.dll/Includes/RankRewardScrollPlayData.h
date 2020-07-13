#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardScrollPlayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardScrollPlayData"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RankName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsGot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
