#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SwitchBagBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SwitchBagBtnController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutPvpGameToShowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOutNotifyPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B5440))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B554C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B55F0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B57B8))(this);
	}
	template <typename T = void> T OnNotifyLoadoutPvpGameToShowTime(uintptr_t msg) {
		return ((T (*)(SwitchBagBtnController*, uintptr_t))(Il2CppBase() + 0x30B58E0))(this, msg);
	}
	template <typename T = void> T OnOutNotifyPrepareTime(uintptr_t msg) {
		return ((T (*)(SwitchBagBtnController*, uintptr_t))(Il2CppBase() + 0x30B5C24))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B5D30))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B5D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B5D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SwitchBagBtnController*))(Il2CppBase() + 0x30B5D48))(this);
	}

};

}
