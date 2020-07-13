#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardConfig"));
	}

	template <typename T = int32_t> T& AwardID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& AwardNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AwardTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AwardisShowFx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsSpecialAward() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
