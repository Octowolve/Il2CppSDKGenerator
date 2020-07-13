#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestItem"));
	}

	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteLockIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LabelPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SpriteUnLockIcon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Reward() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Tip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRewardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetData(uintptr_t reward, uint64_t activityId, int32_t progressValue) {
		return ((T (*)(ChestItem*, uintptr_t, uint64_t, int32_t))(Il2CppBase() + 0x354A614))(this, reward, activityId, progressValue);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChestItem*))(Il2CppBase() + 0x354893C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChestItem*))(Il2CppBase() + 0x3548CDC))(this);
	}
	template <typename T = void> T OnBtnRewardClick() {
		return ((T (*)(ChestItem*))(Il2CppBase() + 0x354AC8C))(this);
	}

};

}
