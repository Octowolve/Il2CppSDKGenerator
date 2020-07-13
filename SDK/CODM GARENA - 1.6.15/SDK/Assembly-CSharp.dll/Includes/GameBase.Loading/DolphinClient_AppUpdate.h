#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinClientAppUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinClient_AppUpdate"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupUpdateVersionCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeNewVersionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateProgressInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetupUpdateVersionCfg() {
		return ((T (*)(DolphinClientAppUpdate*))(Il2CppBase() + 0x2E33EC8))(this);
	}
	template <typename T = bool> T get_mNeedExtract() {
		return ((T (*)(DolphinClientAppUpdate*))(Il2CppBase() + 0x2E341A0))(this);
	}
	template <typename T = void> T OnNoticeNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(DolphinClientAppUpdate*, uintptr_t))(Il2CppBase() + 0x2E341D4))(this, newVersionInfo);
	}
	template <typename T = void> T OnUpdateProgressInfo(uintptr_t curVersionStage, Il2CppString* msg, uint32_t nowSize, uint32_t totalSize, bool isDownloading) {
		return ((T (*)(DolphinClientAppUpdate*, uintptr_t, Il2CppString*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x2E34674))(this, curVersionStage, msg, nowSize, totalSize, isDownloading);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateProgressInfo(uintptr_t P0, Il2CppString* P1, uint32_t P2, uint32_t P3, bool P4) {
		return ((T (*)(DolphinClientAppUpdate*, uintptr_t, Il2CppString*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x2E34788))(this, P0, P1, P2, P3, P4);
	}

};

}
