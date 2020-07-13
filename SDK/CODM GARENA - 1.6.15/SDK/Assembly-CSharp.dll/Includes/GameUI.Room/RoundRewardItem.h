#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoundRewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoundRewardItem"));
	}

	template <typename T = uintptr_t> T& SpriteProgressBg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LabelRoundNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SpriteRewardTip() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SpriteRewarded() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExtendedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetExtendedData(int32_t roundNum) {
		return ((T (*)(RoundRewardItem*, int32_t))(Il2CppBase() + 0x214763C))(this, roundNum);
	}

};

}
