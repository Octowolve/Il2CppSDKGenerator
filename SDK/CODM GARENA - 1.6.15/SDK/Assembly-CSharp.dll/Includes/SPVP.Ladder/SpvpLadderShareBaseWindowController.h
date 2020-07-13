#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderShareBaseWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderShareBaseWindowController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonTemplateConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonTemplateShareFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareToFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonTemplateShareZoneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenShotScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4302820))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4302F78))(this);
	}
	template <typename T = uintptr_t> T get_CurPlatform() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x43081A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4302A74))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4302DA4))(this);
	}
	template <typename T = uintptr_t> T get_ReturnMessage() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x43082DC))(this);
	}
	template <typename T = void> T OnButtonTemplateConfirmClick() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x43082E4))(this);
	}
	template <typename T = void> T OnButtonTemplateShareFriendClick() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x430849C))(this);
	}
	template <typename T = void> T ShareToFriend(uintptr_t texture) {
		return ((T (*)(SpvpLadderShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x430860C))(this, texture);
	}
	template <typename T = void> T OnButtonTemplateShareZoneClick() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4308C08))(this);
	}
	template <typename T = void> T ShareToZone(uintptr_t texture) {
		return ((T (*)(SpvpLadderShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4308CB0))(this, texture);
	}
	template <typename T = void> T ScreenShotScreen(bool toFriend) {
		return ((T (*)(SpvpLadderShareBaseWindowController*, bool))(Il2CppBase() + 0x4308544))(this, toFriend);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x43049F4))(this);
	}
	template <typename T = void> static T ShareToFriendm__0(bool boolValue) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4309474))(0, boolValue);
	}
	template <typename T = void> static T ShareToZonem__1(bool boolValue) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4309478))(0, boolValue);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x430947C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4309484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x430948C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x4309494))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderShareBaseWindowController*))(Il2CppBase() + 0x430949C))(this);
	}

};

}
