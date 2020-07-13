#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class BRTutorialReviveController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "BRTutorialReviveController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFED10))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFEDB4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFEEC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFEF68))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF010))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF0B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF0C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF0C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF0D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTutorialReviveController*))(Il2CppBase() + 0x4AFF0D8))(this);
	}

};

}
