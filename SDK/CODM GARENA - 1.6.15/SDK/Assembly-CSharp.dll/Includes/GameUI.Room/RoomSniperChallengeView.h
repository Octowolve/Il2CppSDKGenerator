#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSniperChallengeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSniperChallengeView"));
	}

	template <typename T = uintptr_t> T& WidgetBorder() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ObserverRoot() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SpriteRoomLock() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LabelRoomID() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& LabelRoomName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BtnRecurit() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& ColliderNonOwner() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& BtnPassword() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& ContainerInfoSelector() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& MapSelector() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ToggleOne() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& ToggleTwo() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ToggleFour() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ToggleFpp() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ToggleTpp() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& BtnFpp() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BtnTpp() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BtnOne() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& BtnTwo() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& BtnFour() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& BtnMore() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& LabelPlayerNum() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& LabelPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerNumPerTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPPMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SyncRoomName(uint32_t roomId, Il2CppString* roomName) {
		return ((T (*)(RoomSniperChallengeView*, uint32_t, Il2CppString*))(Il2CppBase() + 0x2105400))(this, roomId, roomName);
	}
	template <typename T = void> T SyncOwner(bool isOwner) {
		return ((T (*)(RoomSniperChallengeView*, bool))(Il2CppBase() + 0x210530C))(this, isOwner);
	}
	template <typename T = void> T SyncRoomPassword(bool isOwner, bool hasPassword) {
		return ((T (*)(RoomSniperChallengeView*, bool, bool))(Il2CppBase() + 0x2105A6C))(this, isOwner, hasPassword);
	}
	template <typename T = void> T SyncPlayerNumPerTeam(bool isOwner, int32_t num) {
		return ((T (*)(RoomSniperChallengeView*, bool, int32_t))(Il2CppBase() + 0x21055B8))(this, isOwner, num);
	}
	template <typename T = void> T SyncPPMode(uintptr_t ppMode) {
		return ((T (*)(RoomSniperChallengeView*, uintptr_t))(Il2CppBase() + 0x2105848))(this, ppMode);
	}

};

}
