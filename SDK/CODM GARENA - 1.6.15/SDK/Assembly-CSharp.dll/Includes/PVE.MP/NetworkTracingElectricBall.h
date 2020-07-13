#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkTracingElectricBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkTracingElectricBall"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedNormalMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetworkTracingElectricBall*, bool, uintptr_t))(Il2CppBase() + 0x3EBCBD0))(this, isHeadShot, damageType);
	}
	template <typename T = void> T SimulatedNormalMove(float deltaTime) {
		return ((T (*)(NetworkTracingElectricBall*, float))(Il2CppBase() + 0x3EBCF10))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(NetworkTracingElectricBall*, bool, uintptr_t))(Il2CppBase() + 0x3EBD070))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedNormalMove(float P0) {
		return ((T (*)(NetworkTracingElectricBall*, float))(Il2CppBase() + 0x3EBD074))(this, P0);
	}

};

}
