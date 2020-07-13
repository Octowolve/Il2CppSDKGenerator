#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementPlayAgainPopWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementPlayAgainPopWindowView"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& captureRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PopViewRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& IgnoreBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& JoinBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& EndTimeLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContentLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& EndTimeTimer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& RemainEndTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffsetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayAgainWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SettlementPlayAgainPopWindowView*))(Il2CppBase() + 0x296E2D0))(this);
	}
	template <typename T = void> T SetOffsetPos(Il2CppVector3 pos) {
		return ((T (*)(SettlementPlayAgainPopWindowView*, Il2CppVector3))(Il2CppBase() + 0x296DCF0))(this, pos);
	}
	template <typename T = void> T ShowPlayAgainWindow(bool isShow, uintptr_t ds) {
		return ((T (*)(SettlementPlayAgainPopWindowView*, bool, uintptr_t))(Il2CppBase() + 0x296CB64))(this, isShow, ds);
	}
	template <typename T = void> T SetRootActive(bool isActive) {
		return ((T (*)(SettlementPlayAgainPopWindowView*, bool))(Il2CppBase() + 0x296E388))(this, isActive);
	}
	template <typename T = void> T RefreshEndTime() {
		return ((T (*)(SettlementPlayAgainPopWindowView*))(Il2CppBase() + 0x296E6C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SettlementPlayAgainPopWindowView*))(Il2CppBase() + 0x296E9F0))(this);
	}

};

}
