#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallItemView"));
	}

	template <typename T = uintptr_t> T& RecallBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AvatarSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SocialNameLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NickNameLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& InvitedState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SocialIconFB() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SocialIconGarena() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SocialIconLine() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SocialIconGoogle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& SocialIconApple() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SocialIconGuest() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& PlatformIconContainer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& OnRecallFriendDelegate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_Player() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlatformIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDragScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FriendRecallItemView*))(Il2CppBase() + 0x32CFE94))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FriendRecallItemView*))(Il2CppBase() + 0x32D0028))(this);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t Player) {
		return ((T (*)(FriendRecallItemView*, uintptr_t))(Il2CppBase() + 0x32D01BC))(this, Player);
	}
	template <typename T = void> T OnRecallBtnClick() {
		return ((T (*)(FriendRecallItemView*))(Il2CppBase() + 0x32D06E4))(this);
	}
	template <typename T = void> T ItemAdapt(int32_t width) {
		return ((T (*)(FriendRecallItemView*, int32_t))(Il2CppBase() + 0x32D07D0))(this, width);
	}
	template <typename T = void> T SetPlatformIcon() {
		return ((T (*)(FriendRecallItemView*))(Il2CppBase() + 0x32D04D0))(this);
	}
	template <typename T = void> T SetDragScroll(uintptr_t scrollView) {
		return ((T (*)(FriendRecallItemView*, uintptr_t))(Il2CppBase() + 0x32D0870))(this, scrollView);
	}

};

}
