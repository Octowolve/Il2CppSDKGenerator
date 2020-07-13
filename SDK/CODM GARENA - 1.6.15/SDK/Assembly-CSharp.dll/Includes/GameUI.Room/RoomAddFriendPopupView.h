#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomAddFriendPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomAddFriendPopupView"));
	}

	template <typename T = uintptr_t> T& CheckInfoBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AddFriendBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& PlayerFrame() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ClanLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ClanSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NoClanLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& HavePlayedLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& StateSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& StateLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BindFriend(uintptr_t friend, uintptr_t RoomDS, bool hasRecentPlayed) {
		return ((T (*)(RoomAddFriendPopupView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2CE15AC))(this, friend, RoomDS, hasRecentPlayed);
	}

};

}
