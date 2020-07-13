#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Reward {

class PerkRewardCardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Reward", "PerkRewardCardData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetSprite(uintptr_t sp) {
		return ((T (*)(PerkRewardCardData*, uintptr_t))(Il2CppBase() + 0x41302F4))(this, sp);
	}

};

}
