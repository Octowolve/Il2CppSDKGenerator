#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class APVPSeasonUICacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "APVPSeasonUICacheData"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& RewardType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LastRankLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LastRankCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
