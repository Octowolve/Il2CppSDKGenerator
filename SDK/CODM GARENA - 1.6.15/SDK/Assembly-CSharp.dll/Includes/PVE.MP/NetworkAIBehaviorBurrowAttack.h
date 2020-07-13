#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorBurrowAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorBurrowAttack"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& moveEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleRotationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnMoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ToggleRotationAnim(bool enable) {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*, bool))(Il2CppBase() + 0x4CBBBE8))(this, enable);
	}
	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*))(Il2CppBase() + 0x4CBBD6C))(this);
	}
	template <typename T = void> T DespawnMoveEffect(uintptr_t effect) {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*, uintptr_t))(Il2CppBase() + 0x4CBBE54))(this, effect);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*))(Il2CppBase() + 0x4CBBF90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*))(Il2CppBase() + 0x4CBC0E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorBurrowAttack*))(Il2CppBase() + 0x4CBC0E8))(this);
	}

};

}
