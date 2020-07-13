#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRecentCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRecentCell"));
	}

	template <typename T = uintptr_t> T& AddFriendBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& IsAdd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& SpriteAddFriend() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mDS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& WinColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& DrawColor() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& LoseColor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ItemWideget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendRecentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWideget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(FriendRecentCell*))(Il2CppBase() + 0x32B0BE8))(this);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(FriendRecentCell*))(Il2CppBase() + 0x32B0D30))(this);
	}
	template <typename T = void> T Configure(uintptr_t groupInfo, uintptr_t mCutPanel) {
		return ((T (*)(FriendRecentCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B1260))(this, groupInfo, mCutPanel);
	}
	template <typename T = void> T ConfigureBattleInfo(uintptr_t battleInfo) {
		return ((T (*)(FriendRecentCell*, uintptr_t))(Il2CppBase() + 0x32B0B40))(this, battleInfo);
	}
	template <typename T = void> T SetFriendRecentState(uintptr_t state) {
		return ((T (*)(FriendRecentCell*, uintptr_t))(Il2CppBase() + 0x32B16C8))(this, state);
	}
	template <typename T = void> T SetWideget(int32_t width) {
		return ((T (*)(FriendRecentCell*, int32_t))(Il2CppBase() + 0x32B17DC))(this, width);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendRecentCell*))(Il2CppBase() + 0x32B18FC))(this);
	}

};

}
