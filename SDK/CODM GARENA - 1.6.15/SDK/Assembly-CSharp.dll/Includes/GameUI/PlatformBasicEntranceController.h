#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlatformBasicEntranceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlatformBasicEntranceController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91830))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A9193C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A919E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91BD8))(this);
	}
	template <typename T = void> T OnNotifyClose(uintptr_t msg) {
		return ((T (*)(PlatformBasicEntranceController*, uintptr_t))(Il2CppBase() + 0x3A91C94))(this, msg);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(PlatformBasicEntranceController*, uintptr_t))(Il2CppBase() + 0x3A91D50))(this, closeType);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91E4C))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91EF4))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91F94))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A91B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A92034))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A9203C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A92044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A9204C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(PlatformBasicEntranceController*, uintptr_t))(Il2CppBase() + 0x3A92054))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A9205C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A92064))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(PlatformBasicEntranceController*))(Il2CppBase() + 0x3A9206C))(this);
	}

};

}
