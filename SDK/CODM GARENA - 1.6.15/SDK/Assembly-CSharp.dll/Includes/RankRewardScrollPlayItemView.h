#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardScrollPlayItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardScrollPlayItemView"));
	}

	template <typename T = uintptr_t> T& RewardItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetItemData(uintptr_t data) {
		return ((T (*)(RankRewardScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x381E50C))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemData(uintptr_t P0) {
		return ((T (*)(RankRewardScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x381E67C))(this, P0);
	}

};

}
