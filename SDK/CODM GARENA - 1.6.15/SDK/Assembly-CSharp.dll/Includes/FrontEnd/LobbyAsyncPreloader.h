#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyAsyncPreloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyAsyncPreloader"));
	}

	template <typename T = void*> T& toPreloadList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& readyList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& loadingTask() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lobbyRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isPreloading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& loadingType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T StartPreload(uintptr_t lobbyShack, uintptr_t scene) {
		return ((T (*)(LobbyAsyncPreloader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x368CBD0))(this, lobbyShack, scene);
	}
	template <typename T = void> T CheckAndPreload() {
		return ((T (*)(LobbyAsyncPreloader*))(Il2CppBase() + 0x368CFA8))(this);
	}
	template <typename T = void> T OnPreloaded(int32_t assetID, uintptr_t sobj) {
		return ((T (*)(LobbyAsyncPreloader*, int32_t, uintptr_t))(Il2CppBase() + 0x368D180))(this, assetID, sobj);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LobbyAsyncPreloader*))(Il2CppBase() + 0x368D420))(this);
	}

};

}
