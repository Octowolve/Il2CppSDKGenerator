#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayTaskSimulate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayTaskSimulate"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_SimulteFPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_SimulateTPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IndividuationPlayTaskSimulate*, float))(Il2CppBase() + 0x1F075E4))(this, deltaTime);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayTaskSimulate*))(Il2CppBase() + 0x1F08254))(this);
	}
	template <typename T = void> T Tick_SimulteFPP(float deltaTime) {
		return ((T (*)(IndividuationPlayTaskSimulate*, float))(Il2CppBase() + 0x1F076B0))(this, deltaTime);
	}
	template <typename T = void> T Tick_SimulateTPP(float deltaTime) {
		return ((T (*)(IndividuationPlayTaskSimulate*, float))(Il2CppBase() + 0x1F07CF0))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(IndividuationPlayTaskSimulate*, float))(Il2CppBase() + 0x1F0844C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayTaskSimulate*))(Il2CppBase() + 0x1F08450))(this);
	}

};

}
