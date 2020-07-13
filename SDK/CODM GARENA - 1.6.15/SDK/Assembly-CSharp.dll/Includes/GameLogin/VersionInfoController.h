#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionInfoController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& temp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VersionCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& IntranetIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerAlias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsWarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2542F68))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x254303C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2543178))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x25434C0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x25437F4))(this);
	}
	template <typename T = void> T Refresh(uintptr_t msg) {
		return ((T (*)(VersionInfoController*, uintptr_t))(Il2CppBase() + 0x25438E0))(this, msg);
	}
	template <typename T = void> T RefreshInternal() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2543258))(this);
	}
	template <typename T = Il2CppString*> T GetServerAlias(Il2CppString* ip) {
		return ((T (*)(VersionInfoController*, Il2CppString*))(Il2CppBase() + 0x25444A0))(this, ip);
	}
	template <typename T = void> T SetIsWarm() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2543620))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2544C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2544C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2544C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2544C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VersionInfoController*))(Il2CppBase() + 0x2544C44))(this);
	}

};

}
