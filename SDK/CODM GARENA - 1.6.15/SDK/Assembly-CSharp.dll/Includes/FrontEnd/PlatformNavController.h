#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class PlatformNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "PlatformNavController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_playerDataStore() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlatformNav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842070))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842114))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842264))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842510))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x38426A8))(this);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x384281C))(this);
	}
	template <typename T = void> T ShowPlatformNav() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842314))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842940))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlatformNavController*))(Il2CppBase() + 0x3842960))(this);
	}

};

}
