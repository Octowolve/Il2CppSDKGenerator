#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelAwardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelAwardData"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& AwardIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AwardConf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NeedVip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
