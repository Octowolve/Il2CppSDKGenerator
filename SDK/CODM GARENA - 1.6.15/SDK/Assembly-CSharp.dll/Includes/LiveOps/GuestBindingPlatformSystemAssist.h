#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class GuestBindingPlatformSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "GuestBindingPlatformSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& gbds() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tmpPlatform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isBinding() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoBindingPlatfrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_excuteGuestBindCallbackHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAccountextBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActvBindAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRefreshCurrentChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T GotoBindingPlatfrom(uintptr_t platform) {
		return ((T (*)(GuestBindingPlatformSystemAssist*, uintptr_t))(Il2CppBase() + 0x355A474))(this, platform);
	}
	template <typename T = void> T OnLinkTimeout() {
		return ((T (*)(GuestBindingPlatformSystemAssist*))(Il2CppBase() + 0x355A988))(this);
	}
	template <typename T = void> T OnGuestBindCallback(bool success, int32_t retCode, int32_t innerCode, Il2CppString* confirmCode) {
		return ((T (*)(GuestBindingPlatformSystemAssist*, bool, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x355F9A8))(this, success, retCode, innerCode, confirmCode);
	}
	template <typename T = void> T excuteGuestBindCallbackHandler(uintptr_t channelType, bool success, int32_t retCode, int32_t innerCode) {
		return ((T (*)(GuestBindingPlatformSystemAssist*, uintptr_t, bool, int32_t, int32_t))(Il2CppBase() + 0x355FBA4))(this, channelType, success, retCode, innerCode);
	}
	template <typename T = void> T ReqAccountextBind(uintptr_t channelType) {
		return ((T (*)(GuestBindingPlatformSystemAssist*, uintptr_t))(Il2CppBase() + 0x3560258))(this, channelType);
	}
	template <typename T = void> T ReqActvBindAccount() {
		return ((T (*)(GuestBindingPlatformSystemAssist*))(Il2CppBase() + 0x35603B4))(this);
	}
	template <typename T = void> T NotifyRefreshCurrentChannel() {
		return ((T (*)(GuestBindingPlatformSystemAssist*))(Il2CppBase() + 0x3560554))(this);
	}

};

}
