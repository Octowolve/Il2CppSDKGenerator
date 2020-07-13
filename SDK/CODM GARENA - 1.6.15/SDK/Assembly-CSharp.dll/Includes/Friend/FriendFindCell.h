#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendFindCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendFindCell"));
	}

	template <typename T = uintptr_t> T& Head() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FavorGameType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& BRLadderLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Gender() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AddFriendBtn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& RequestObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RequestedObj() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& AvatarBtn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& IdLabel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& clanNameLabel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& clanIconLabel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& NoClanLabel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ClassicRoundsLabel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ZMModeWidget() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isAddFriendBtnClick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ItemWidget() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAddFriendBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T set_PlayerID(uint64_t value) {
		return ((T (*)(FriendFindCell*, uint64_t))(Il2CppBase() + 0x329BA38))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerID() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329BA48))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329BA50))(this);
	}
	template <typename T = void> T Configure(uintptr_t profile, uintptr_t mCutPanel) {
		return ((T (*)(FriendFindCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x329BC8C))(this, profile, mCutPanel);
	}
	template <typename T = void> T SetAddFriendBtnActive() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329C3F0))(this);
	}
	template <typename T = void> T Configure_1(uintptr_t friend, uintptr_t mCutPanel) {
		return ((T (*)(FriendFindCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x329C5C8))(this, friend, mCutPanel);
	}
	template <typename T = void> T Configure_2(uintptr_t info, uintptr_t mCutPanel) {
		return ((T (*)(FriendFindCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x329C6AC))(this, info, mCutPanel);
	}
	template <typename T = void> T Configure_3(uintptr_t searchRes, uintptr_t mCutPanel) {
		return ((T (*)(FriendFindCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x329C9C4))(this, searchRes, mCutPanel);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329CC90))(this);
	}
	template <typename T = void> T OnAvatarBtnClick() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329D360))(this);
	}
	template <typename T = void> T SetSize(int32_t width) {
		return ((T (*)(FriendFindCell*, int32_t))(Il2CppBase() + 0x329D4F0))(this, width);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendFindCell*))(Il2CppBase() + 0x329D5B8))(this);
	}

};

}
