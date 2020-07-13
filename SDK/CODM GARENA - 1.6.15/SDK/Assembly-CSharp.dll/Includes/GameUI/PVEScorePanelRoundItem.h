#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEScorePanelRoundItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEScorePanelRoundItem"));
	}

	template <typename T = uintptr_t> T& LastRoundFinish() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CurrentRound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RoundFinish() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RoundNotFinsh() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoundFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRoundFinish(int32_t state) {
		return ((T (*)(PVEScorePanelRoundItem*, int32_t))(Il2CppBase() + 0x3AA5B58))(this, state);
	}

};

}
