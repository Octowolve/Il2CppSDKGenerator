#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuestBindingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuestBindingView"));
	}

	template <typename T = uintptr_t> T& ChannelGrid() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& facebookBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& garenaBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& lineBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& googlePlayLinkBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& gameCenterLinkBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& UNOLinkBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& AppleLinkBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& qqBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& wechatBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& contentLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefaut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeResetButtonActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowItem(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E33E08))(this, buttons);
	}
	template <typename T = void> T ResetDefaut() {
		return ((T (*)(GuestBindingView*))(Il2CppBase() + 0x3E34144))(this);
	}
	template <typename T = void> T SafeResetButtonActive(uintptr_t button, bool active) {
		return ((T (*)(GuestBindingView*, uintptr_t, bool))(Il2CppBase() + 0x3E34230))(this, button, active);
	}

};

}
