#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendCell"));
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
	template <typename T = uintptr_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BRLadderLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Gender() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& HighlightedBG() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& AvatarBtn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsSendValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T set_PlayerID(uint64_t value) {
		return ((T (*)(FriendCell*, uint64_t))(Il2CppBase() + 0x3CE2330))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerID() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE2340))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE2348))(this);
	}
	template <typename T = void> T Configure(uintptr_t profile, uintptr_t mCutPanel, bool bShowEffect) {
		return ((T (*)(FriendCell*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3CE24E8))(this, profile, mCutPanel, bShowEffect);
	}
	template <typename T = bool> T IsSendValid() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE309C))(this);
	}
	template <typename T = void> T OnDragStart() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE322C))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE332C))(this);
	}
	template <typename T = void> T OnAvatarBtnClick() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE33D4))(this);
	}
	template <typename T = void> static T SetLadderIcon(int32_t ladder, uintptr_t icon, uintptr_t ladderLevel, bool isBR) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3CE2A08))(0, ladder, icon, ladderLevel, isBR);
	}
	template <typename T = void> T SetRecentRank(uintptr_t profile) {
		return ((T (*)(FriendCell*, uintptr_t))(Il2CppBase() + 0x3CE3564))(this, profile);
	}
	template <typename T = void> T SetPlayerState(uintptr_t StateLabel, uintptr_t state) {
		return ((T (*)(FriendCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE3604))(this, StateLabel, state);
	}
	template <typename T = bool> T IsSendValidm__0(uint64_t it) {
		return ((T (*)(FriendCell*, uint64_t))(Il2CppBase() + 0x3CE3E4C))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE3E68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(FriendCell*))(Il2CppBase() + 0x3CE3E70))(this);
	}

};

}
