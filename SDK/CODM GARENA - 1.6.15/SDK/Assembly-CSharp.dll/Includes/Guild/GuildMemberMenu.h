#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberMenu"));
	}

	template <typename T = uintptr_t> T& AddFriendBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ViewDetailBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& KickOffBtn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AppointViceCaptainBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DeposeViceCaptainBtn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SwitchCaptainBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ImpeachCaptainBtn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& menuBg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_SelfRoleType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_TargetRoleType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActiveMenuItemList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_Max() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_Min() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMenuOtherAreaClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildActiveMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestrictInPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionBtnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScrollOffsetInWorldSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBgTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uint64_t> T get_PlayerID() {
		return ((T (*)(GuildMemberMenu*))(Il2CppBase() + 0x3BD7584))(this);
	}
	template <typename T = void> T HideAllMenu() {
		return ((T (*)(GuildMemberMenu*))(Il2CppBase() + 0x3BD71DC))(this);
	}
	template <typename T = void> T OnMenuOtherAreaClick(uintptr_t obj) {
		return ((T (*)(GuildMemberMenu*, uintptr_t))(Il2CppBase() + 0x3BD9084))(this, obj);
	}
	template <typename T = void> T BuildActiveMenu(uintptr_t roleType, uintptr_t targetroleType) {
		return ((T (*)(GuildMemberMenu*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BD9178))(this, roleType, targetroleType);
	}
	template <typename T = void> T RestrictInPanel(Il2CppVector3 panelMax, Il2CppVector3 panelMin) {
		return ((T (*)(GuildMemberMenu*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3BD96A8))(this, panelMax, panelMin);
	}
	template <typename T = void> T RepositionBtnList() {
		return ((T (*)(GuildMemberMenu*))(Il2CppBase() + 0x3BD9440))(this);
	}
	template <typename T = void> T ShowMenu(uintptr_t roleType, uintptr_t targetRoleType, uint64_t playerID, Il2CppVector3 position, Il2CppVector2 offset) {
		return ((T (*)(GuildMemberMenu*, uintptr_t, uintptr_t, uint64_t, Il2CppVector3, Il2CppVector2))(Il2CppBase() + 0x3BD6E60))(this, roleType, targetRoleType, playerID, position, offset);
	}
	template <typename T = Il2CppVector3> T GetScrollOffsetInWorldSpace() {
		return ((T (*)(GuildMemberMenu*))(Il2CppBase() + 0x3BD703C))(this);
	}
	template <typename T = void> T UpdateBgTransform() {
		return ((T (*)(GuildMemberMenu*))(Il2CppBase() + 0x3BD9A64))(this);
	}

};

}
