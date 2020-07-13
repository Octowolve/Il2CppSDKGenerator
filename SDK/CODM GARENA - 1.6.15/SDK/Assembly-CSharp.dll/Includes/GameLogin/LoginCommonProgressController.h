#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginCommonProgressController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginCommonProgressController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWarmUpProgressChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D71E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D728C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D74D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D75EC))(this);
	}
	template <typename T = void> T OnWarmUpProgressChange(uintptr_t msg) {
		return ((T (*)(LoginCommonProgressController*, uintptr_t))(Il2CppBase() + 0x33D769C))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D79A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D79A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D79B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoginCommonProgressController*))(Il2CppBase() + 0x33D79B8))(this);
	}

};

}
