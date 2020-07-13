#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class GuestBindingNewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "GuestBindingNewController"));
	}

	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& bindPlatform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUnoBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUNOLinkClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_platformReloginFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindCallbackHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuccessContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFakeChannelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T DoUnoBind() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355AC34))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355AD94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355AF3C))(this);
	}
	template <typename T = void> T OnUNOLinkClick() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355ACEC))(this);
	}
	template <typename T = void> T BindPlatform(uintptr_t platform) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355B010))(this, platform);
	}
	template <typename T = void> T platformReloginFail(uintptr_t msg) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355B344))(this, msg);
	}
	template <typename T = void> T OnGuestBindCallbackHandler(uintptr_t Msg) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355B750))(this, Msg);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355BFE4))(this);
	}
	template <typename T = Il2CppString*> T GetSuccessContent(uintptr_t channel) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355BBE8))(this, channel);
	}
	template <typename T = Il2CppString*> T GetFakeChannelName(uintptr_t channelType) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355BD08))(this, channelType);
	}
	template <typename T = void> T OnLinkTimeout(uintptr_t msg) {
		return ((T (*)(GuestBindingNewController*, uintptr_t))(Il2CppBase() + 0x355C0D8))(this, msg);
	}
	template <typename T = void> T OnLinkFailed(bool timeout) {
		return ((T (*)(GuestBindingNewController*, bool))(Il2CppBase() + 0x355BE3C))(this, timeout);
	}
	template <typename T = int32_t> T get_linkTimeoutTime() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355B334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355C220))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuestBindingNewController*))(Il2CppBase() + 0x355C228))(this);
	}

};

}
