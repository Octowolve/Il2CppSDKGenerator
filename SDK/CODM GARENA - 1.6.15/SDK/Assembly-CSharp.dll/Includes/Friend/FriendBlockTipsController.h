#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendBlockTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendBlockTipsController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mChatDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE169C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE1740))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE1890))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE1B3C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE1D40))(this);
	}
	template <typename T = void> T OnOkButtonClick() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE1DFC))(this);
	}
	template <typename T = void> T HideView(uintptr_t Msg) {
		return ((T (*)(FriendBlockTipsController*, uintptr_t))(Il2CppBase() + 0x3CE2050))(this, Msg);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE210C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE21C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE21C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE21D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE21D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendBlockTipsController*))(Il2CppBase() + 0x3CE21E0))(this);
	}

};

}
