#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Sparrow"));
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

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorSparrow*))(Il2CppBase() + 0x346956C))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorSparrow*))(Il2CppBase() + 0x3469574))(this);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorSparrow*, float))(Il2CppBase() + 0x3469614))(this, replayTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorSparrow*))(Il2CppBase() + 0x3469784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorSparrow*, float))(Il2CppBase() + 0x3469788))(this, P0);
	}

};

}
