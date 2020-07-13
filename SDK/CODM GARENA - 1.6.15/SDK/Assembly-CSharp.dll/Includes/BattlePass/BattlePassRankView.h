#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassRankView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassRankView"));
	}

	template <typename T = uintptr_t> T& ServerTab() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FriendTab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RankScrollView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NoDataTip() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MyRankView() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MyRankButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& AwardTimeLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RankAwardList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMyRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMyRankSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetMyRankInfo(uintptr_t info) {
		return ((T (*)(BattlePassRankView*, uintptr_t))(Il2CppBase() + 0x2C2FC30))(this, info);
	}
	template <typename T = void> T SetMyRankSelected(bool select) {
		return ((T (*)(BattlePassRankView*, bool))(Il2CppBase() + 0x2C30D50))(this, select);
	}

};

}
