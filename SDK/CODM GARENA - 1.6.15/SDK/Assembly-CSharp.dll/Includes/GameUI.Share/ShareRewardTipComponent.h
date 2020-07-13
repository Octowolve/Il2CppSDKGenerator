#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareRewardTipComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareRewardTipComponent"));
	}

	template <typename T = uintptr_t> T& rewardIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& qualityIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& rewardNumLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& uiItem() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ShareRewardTipComponent*))(Il2CppBase() + 0x449B368))(this);
	}
	template <typename T = void> T ResetActive(bool active) {
		return ((T (*)(ShareRewardTipComponent*, bool))(Il2CppBase() + 0x448F070))(this, active);
	}
	template <typename T = uintptr_t> T GetReward() {
		return ((T (*)(ShareRewardTipComponent*))(Il2CppBase() + 0x449B514))(this);
	}

};

}
