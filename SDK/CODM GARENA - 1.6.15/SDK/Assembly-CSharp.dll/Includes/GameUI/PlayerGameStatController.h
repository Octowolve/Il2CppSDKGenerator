#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlayerGameStatController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlayerGameStatController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PlayerGameStatData() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A92E1C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A92EC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A931A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A93264))(this);
	}
	template <typename T = void> T RequestPlayerGameStat() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A9306C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(PlayerGameStatController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3A93324))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A94C58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A94C60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A94C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlayerGameStatController*))(Il2CppBase() + 0x3A94C70))(this);
	}

};

}
