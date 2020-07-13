#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IDCollectionRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IDCollectionRewardItemView"));
	}

	template <typename T = uintptr_t> T& rewardItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GatePoint() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GatePointReachedTag() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& GatePointUnReachedTag() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& progressBar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& progressSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& reachFlagSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint64_t> T& TaskSeqId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObjClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetEasyListData(uintptr_t state, bool isMyReward) {
		return ((T (*)(IDCollectionRewardItemView*, uintptr_t, bool))(Il2CppBase() + 0x232D5D0))(this, state, isMyReward);
	}
	template <typename T = void> T OnObjClaimClick(uintptr_t obj) {
		return ((T (*)(IDCollectionRewardItemView*, uintptr_t))(Il2CppBase() + 0x232DE84))(this, obj);
	}

};

}
