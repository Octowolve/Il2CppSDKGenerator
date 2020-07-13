#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorGravitySpikes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_GravitySpikes"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillFrameTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorGravitySpikes*))(Il2CppBase() + 0x34586D4))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorGravitySpikes*))(Il2CppBase() + 0x34586DC))(this);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorGravitySpikes*, float))(Il2CppBase() + 0x345877C))(this, replayTime);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorGravitySpikes*))(Il2CppBase() + 0x3458EA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorGravitySpikes*))(Il2CppBase() + 0x34590A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorGravitySpikes*, float))(Il2CppBase() + 0x3459378))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorGravitySpikes*))(Il2CppBase() + 0x345937C))(this);
	}

};

}
