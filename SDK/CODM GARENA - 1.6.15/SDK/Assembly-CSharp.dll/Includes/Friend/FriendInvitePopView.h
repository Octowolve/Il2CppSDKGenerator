#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendInvitePopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendInvitePopView"));
	}

	template <typename T = uintptr_t> T& InviteMessengerBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& InviteFacebookBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& InviteGarenaBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& InviteLineBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& InviteLocalBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& InviteWhatsAppBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& InviteSMSBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& InviteBtnGrid() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
