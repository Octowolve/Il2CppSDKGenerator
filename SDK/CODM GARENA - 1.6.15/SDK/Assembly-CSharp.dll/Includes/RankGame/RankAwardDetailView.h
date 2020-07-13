#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankAwardDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankAwardDetailView"));
	}

	template <typename T = uintptr_t> T& rankScrollView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NoDataTip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoDataTipActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetNoDataTipActive(bool isActive) {
		return ((T (*)(RankAwardDetailView*, bool))(Il2CppBase() + 0x37FD9E0))(this, isActive);
	}
	template <typename T = void> T ResetScrollViewPosition() {
		return ((T (*)(RankAwardDetailView*))(Il2CppBase() + 0x37FDAD4))(this);
	}

};

}
