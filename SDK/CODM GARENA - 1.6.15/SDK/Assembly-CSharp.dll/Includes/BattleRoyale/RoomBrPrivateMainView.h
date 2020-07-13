#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBrPrivateMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBrPrivateMainView"));
	}

	template <typename T = uintptr_t> T& WidgetBorder() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ObserverRoot() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& SpriteRoomLock() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelRoomID() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelRoomName() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& BtnRecurit() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& BtnPassword() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& BtnMore() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& LabelPlayerNum() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& LabelPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& SpriteLineTop1() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& SpriteLineBottom1() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& SpriteLineBottom2() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SyncRoomName(uint32_t roomId, Il2CppString* roomName) {
		return ((T (*)(RoomBrPrivateMainView*, uint32_t, Il2CppString*))(Il2CppBase() + 0x3D752F8))(this, roomId, roomName);
	}
	template <typename T = void> T SyncRoomPassword(bool isOwner, bool hasPassword) {
		return ((T (*)(RoomBrPrivateMainView*, bool, bool))(Il2CppBase() + 0x3D754B0))(this, isOwner, hasPassword);
	}
	template <typename T = void> T AdaptBg() {
		return ((T (*)(RoomBrPrivateMainView*))(Il2CppBase() + 0x3D74C38))(this);
	}

};

}
