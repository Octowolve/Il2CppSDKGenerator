#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendCellB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendCellB"));
	}

	template <typename T = uintptr_t> T& Chat() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& DeleteFriendBtn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& WatchBtn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& SendCoinBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& OnDeleteFriendBtnClick() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& sendExpBtnBG_1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& sendExpBtnBG_2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& matchRoomAddr() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& CurFriendGameMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ItemWidget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSendCoinBtnBGAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidGameModeForWatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteFriendDelegete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWatchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideDeleteBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE4D7C))(this);
	}
	template <typename T = void> T SetSendCoinBtnBGAlpha() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE5198))(this);
	}
	template <typename T = void> T Configure(uintptr_t friend, uintptr_t mCutPanel) {
		return ((T (*)(FriendCellB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE5230))(this, friend, mCutPanel);
	}
	template <typename T = void> T Configure_1(uintptr_t state) {
		return ((T (*)(FriendCellB*, uintptr_t))(Il2CppBase() + 0x3CE53C0))(this, state);
	}
	template <typename T = bool> T IsValidGameModeForWatch() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE55A8))(this);
	}
	template <typename T = void> T DeleteFriendDelegete() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE5668))(this);
	}
	template <typename T = void> T OnWatchBtnClick() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE5860))(this);
	}
	template <typename T = void> T OnSendBtnClick(uintptr_t obj) {
		return ((T (*)(FriendCellB*, uintptr_t))(Il2CppBase() + 0x3CE5D14))(this, obj);
	}
	template <typename T = void> T SetWidth(int32_t width) {
		return ((T (*)(FriendCellB*, int32_t))(Il2CppBase() + 0x3CE6250))(this, width);
	}
	template <typename T = void> T HideDeleteBtn() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE6370))(this);
	}
	template <typename T = void> T OnStartm__0() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE64B0))(this);
	}
	template <typename T = bool> T OnSendBtnClickm__1(uintptr_t it) {
		return ((T (*)(FriendCellB*, uintptr_t))(Il2CppBase() + 0x3CE6710))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendCellB*))(Il2CppBase() + 0x3CE6754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Configure(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(FriendCellB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE6758))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Configure_1(uintptr_t P0) {
		return ((T (*)(FriendCellB*, uintptr_t))(Il2CppBase() + 0x3CE675C))(this, P0);
	}

};

}
