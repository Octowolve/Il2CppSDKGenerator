#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildTalkItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildTalkItemView"));
	}

	template <typename T = uintptr_t> T& SelfTalkItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OtherTalkItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NotifyTalkItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& InviteTalkItem() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_ChatInfo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTalkItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeTalkItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetChatInfo(uintptr_t chatInfo) {
		return ((T (*)(GuildTalkItemView*, uintptr_t))(Il2CppBase() + 0x4741A70))(this, chatInfo);
	}
	template <typename T = void> T UpdateTalkItem(uintptr_t item) {
		return ((T (*)(GuildTalkItemView*, uintptr_t))(Il2CppBase() + 0x4741DC0))(this, item);
	}
	template <typename T = void> T ResizeTalkItem(uintptr_t item) {
		return ((T (*)(GuildTalkItemView*, uintptr_t))(Il2CppBase() + 0x47424A0))(this, item);
	}
	template <typename T = void> T JoinOther() {
		return ((T (*)(GuildTalkItemView*))(Il2CppBase() + 0x47415E0))(this);
	}

};

}
