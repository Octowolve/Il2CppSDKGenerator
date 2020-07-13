#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendCellC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendCellC"));
	}

	template <typename T = uintptr_t> T& AgreeGO() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RejectGO() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& RequestGO() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& AgreeButton() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& RejectButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& kAgreeFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kRejectFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Configure(uintptr_t message, uintptr_t mCutPanel, bool ShowEffect) {
		return ((T (*)(FriendCellC*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3CE6800))(this, message, mCutPanel, ShowEffect);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(FriendCellC*))(Il2CppBase() + 0x3CE6A0C))(this);
	}
	template <typename T = void> T OnStartm__0() {
		return ((T (*)(FriendCellC*))(Il2CppBase() + 0x3CE6C7C))(this);
	}
	template <typename T = void> T OnStartm__1() {
		return ((T (*)(FriendCellC*))(Il2CppBase() + 0x3CE6E40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendCellC*))(Il2CppBase() + 0x3CE7004))(this);
	}

};

}
