#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractiveObjectCommonTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractiveObjectCommonTipsController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E0D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E174))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E29C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InteractiveObjectCommonTipsController*))(Il2CppBase() + 0x317E368))(this);
	}

};

}
