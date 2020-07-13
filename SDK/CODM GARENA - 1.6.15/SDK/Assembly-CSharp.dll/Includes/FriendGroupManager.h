#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendGroupManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendGroupManager"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TitleArrow() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TitleBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NumLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& MoreRecommendBtn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsExtend() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& nextGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_GuildMemberDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGroupPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOnlineNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitializeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSetDataOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSetDataOffline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSetDataRecommend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Extend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoreRecommendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeadIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C7100))(this);
	}
	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C71B0))(this);
	}
	template <typename T = void> T InitGroup(uintptr_t lastGroup, int32_t titleHeight, int32_t itemHeight, uintptr_t type, uintptr_t source) {
		return ((T (*)(FriendGroupManager*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32C7260))(this, lastGroup, titleHeight, itemHeight, type, source);
	}
	template <typename T = float> T GetHeight(bool bFromTitleCenter) {
		return ((T (*)(FriendGroupManager*, bool))(Il2CppBase() + 0x32C73BC))(this, bFromTitleCenter);
	}
	template <typename T = void> T UpdateGroupPos() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C74DC))(this);
	}
	template <typename T = void> T UpdateOnlineNumber(int32_t totalNum) {
		return ((T (*)(FriendGroupManager*, int32_t))(Il2CppBase() + 0x32C77A4))(this, totalNum);
	}
	template <typename T = void> T OnInitializeItem(uintptr_t go, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(FriendGroupManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32C7968))(this, go, wrapIndex, realIndex);
	}
	template <typename T = void> T PostSetData() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C7C60))(this);
	}
	template <typename T = void> T PostSetDataOnline() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C8118))(this);
	}
	template <typename T = void> T PostSetDataOffline() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C81B0))(this);
	}
	template <typename T = void> T PostSetDataRecommend() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C8248))(this);
	}
	template <typename T = void> T OnTitleClick() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C850C))(this);
	}
	template <typename T = void> T Extend(bool bExtend) {
		return ((T (*)(FriendGroupManager*, bool))(Il2CppBase() + 0x32C7F48))(this, bExtend);
	}
	template <typename T = void> T OnAddFriendBtnClick(uint64_t playerID) {
		return ((T (*)(FriendGroupManager*, uint64_t))(Il2CppBase() + 0x32C85D0))(this, playerID);
	}
	template <typename T = void> T OnMoreRecommendBtnClick() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C8BF0))(this);
	}
	template <typename T = void> T OnHeadIconClick(uint64_t playerID) {
		return ((T (*)(FriendGroupManager*, uint64_t))(Il2CppBase() + 0x32C8EEC))(this, playerID);
	}
	template <typename T = float> T xLuaBaseProxy_GetHeight(bool P0) {
		return ((T (*)(FriendGroupManager*, bool))(Il2CppBase() + 0x32C9090))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnInitializeItem(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(FriendGroupManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32C9098))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PostSetData() {
		return ((T (*)(FriendGroupManager*))(Il2CppBase() + 0x32C90B8))(this);
	}

};

}
