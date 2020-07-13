#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CDKeyTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CDKeyTipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291EDE0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291EEEC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291EF90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F128))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F2B4))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F354))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F408))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F418))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F420))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(CDKeyTipsController*))(Il2CppBase() + 0x291F428))(this);
	}

};

}
