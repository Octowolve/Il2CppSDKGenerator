#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpPrivateView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpPrivateView"));
	}

	template <typename T = int32_t> T& MIN_GRID_ITEM_WIDTH() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& NormalMode() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& SoloMode() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& RebelCampIcon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& GridRebel() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& RegularCampIcon() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& GridRegular() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& FFAMode() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& FFABg() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& ContainerInfoSelector() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& RoomLock() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& LabelRoomID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelSettingParams() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& SettingButton() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& BtnRecurit() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& btnDynamicDownload() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& dynamicDownloadDialog() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& FFARoot() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& SoloRoot() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RebelMember() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FFARegularMmeber() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FFARebelMember() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RegularMember_Solo() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RebelMember_Solo() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& ObserverRoot() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& SpriteLineTop1() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& SpriteLineBottom1() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& SpriteLineBottom2() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& SpriteRegularBg1() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& SpriteRegularBg2() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& SpriteRebelBg1() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& SpriteRebelBg2() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& SpriteRegularBg1_Solo() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& SpriteRebelBg1_Solo() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModeMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RefreshPlayerList(uintptr_t roomDS) {
		return ((T (*)(RoomSpvpPrivateView*, uintptr_t))(Il2CppBase() + 0x213284C))(this, roomDS);
	}
	template <typename T = void> T AdaptBg() {
		return ((T (*)(RoomSpvpPrivateView*))(Il2CppBase() + 0x2131260))(this);
	}
	template <typename T = void> T RefreshModeMapInfo(bool isRoomOwner, int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomSpvpPrivateView*, bool, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x212E948))(this, isRoomOwner, playlistId, mapIds);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshPlayerList(uintptr_t P0) {
		return ((T (*)(RoomSpvpPrivateView*, uintptr_t))(Il2CppBase() + 0x2132C6C))(this, P0);
	}

};

}
