#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneDetailView"));
	}

	template <typename T = uintptr_t> T& rankScrollView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NoDataTip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& labelTotalPoint() {
		return *(T*)((uintptr_t)this + 0xBC);
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
		return ((T (*)(MileStoneDetailView*, bool))(Il2CppBase() + 0x41DDA38))(this, isActive);
	}
	template <typename T = void> T ResetScrollViewPosition() {
		return ((T (*)(MileStoneDetailView*))(Il2CppBase() + 0x41DDB2C))(this);
	}

};

}
