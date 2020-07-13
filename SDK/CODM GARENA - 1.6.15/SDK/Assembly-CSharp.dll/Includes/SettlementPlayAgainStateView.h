#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementPlayAgainStateView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementPlayAgainStateView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& playerStateSprites() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& playerStateLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& waitingLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> T& RemainTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& curTimer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerStateSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWaitingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettlementPlayAgainStateView*))(Il2CppBase() + 0x38D480C))(this);
	}
	template <typename T = void> T RefreshState(uintptr_t ds) {
		return ((T (*)(SettlementPlayAgainStateView*, uintptr_t))(Il2CppBase() + 0x38D48B4))(this, ds);
	}
	template <typename T = void> T ResetPlayerStateSprites(uintptr_t ds) {
		return ((T (*)(SettlementPlayAgainStateView*, uintptr_t))(Il2CppBase() + 0x38D5258))(this, ds);
	}
	template <typename T = void> T UpdateWaitingInfo() {
		return ((T (*)(SettlementPlayAgainStateView*))(Il2CppBase() + 0x38D567C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementPlayAgainStateView*))(Il2CppBase() + 0x38D59B8))(this);
	}

};

}
