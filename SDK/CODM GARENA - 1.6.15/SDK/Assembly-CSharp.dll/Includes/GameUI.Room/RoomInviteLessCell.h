#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteLessCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteLessCell"));
	}

	template <typename T = uintptr_t> T& RootNormal() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FrameTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ClickBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& AddFriendIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& HasSentContainer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& StateSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& StateLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& OfflineMask() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MoreRecommendBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindMoreRecommendBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomInviteLessCell*))(Il2CppBase() + 0x20DC3A0))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomInviteLessCell*))(Il2CppBase() + 0x20DC450))(this);
	}
	template <typename T = void> T BindMoreRecommendBtn() {
		return ((T (*)(RoomInviteLessCell*))(Il2CppBase() + 0x20DC500))(this);
	}
	template <typename T = void> T BindFriend(uintptr_t info) {
		return ((T (*)(RoomInviteLessCell*, uintptr_t))(Il2CppBase() + 0x20DC600))(this, info);
	}
	template <typename T = void> T UpdateStateView(uintptr_t StateInfo, bool isRecommend, bool hasRequested, uint64_t playerId) {
		return ((T (*)(RoomInviteLessCell*, uintptr_t, bool, bool, uint64_t))(Il2CppBase() + 0x20DC87C))(this, StateInfo, isRecommend, hasRequested, playerId);
	}

};

}
