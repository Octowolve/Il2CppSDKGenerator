#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZombieSnowTrackPawnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZombieSnowTrackPawnComponent"));
	}

	template <typename T = float> T& m_NextSpawnTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T CheckTarget() {
		return ((T (*)(BRZombieSnowTrackPawnComponent*))(Il2CppBase() + 0x26797D4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRZombieSnowTrackPawnComponent*, float))(Il2CppBase() + 0x267999C))(this, deltaTime);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckTarget() {
		return ((T (*)(BRZombieSnowTrackPawnComponent*))(Il2CppBase() + 0x2679C30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRZombieSnowTrackPawnComponent*, float))(Il2CppBase() + 0x2679C34))(this, P0);
	}

};

}
