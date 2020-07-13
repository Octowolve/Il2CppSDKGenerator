#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailView"));
	}

	template <typename T = uintptr_t> T& TypeSelect_SystemNotice() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TypeSelect_FriendSend() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& DefaultToggle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mailListGroup() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitUI() {
		return ((T (*)(MailView*))(Il2CppBase() + 0x3838CD4))(this);
	}
	template <typename T = void> T ShowRedPoint(bool isShowSystemRedPoint, bool isShowFriendRedPoint) {
		return ((T (*)(MailView*, bool, bool))(Il2CppBase() + 0x3838D6C))(this, isShowSystemRedPoint, isShowFriendRedPoint);
	}
	template <typename T = void> T SetCapacity(Il2CppString* CurNum, Il2CppString* Count) {
		return ((T (*)(MailView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3838FA4))(this, CurNum, Count);
	}
	template <typename T = void> T RefreshAnimation() {
		return ((T (*)(MailView*))(Il2CppBase() + 0x3839100))(this);
	}

};

}
