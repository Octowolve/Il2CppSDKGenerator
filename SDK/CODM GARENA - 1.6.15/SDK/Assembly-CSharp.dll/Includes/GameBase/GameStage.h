#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameStage"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMapComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(GameStage*))(Il2CppBase() + 0x1E8F074))(this);
	}
	template <typename T = void> T OnLeave() {
		return ((T (*)(GameStage*))(Il2CppBase() + 0x1E8F154))(this);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(GameStage*, uintptr_t))(Il2CppBase() + 0x1E8F30C))(this, msg);
	}
	template <typename T = void> T OnLoadMapComplete(uintptr_t msg) {
		return ((T (*)(GameStage*, uintptr_t))(Il2CppBase() + 0x1E8F410))(this, msg);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(GameStage*, bool))(Il2CppBase() + 0x1E8FAC4))(this, paused);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(GameStage*))(Il2CppBase() + 0x1E8FE64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeave() {
		return ((T (*)(GameStage*))(Il2CppBase() + 0x1E8FE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneEvent(uintptr_t P0) {
		return ((T (*)(GameStage*, uintptr_t))(Il2CppBase() + 0x1E8FE74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadMapComplete(uintptr_t P0) {
		return ((T (*)(GameStage*, uintptr_t))(Il2CppBase() + 0x1E8FE7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(GameStage*, bool))(Il2CppBase() + 0x1E8FE84))(this, P0);
	}

};

}
