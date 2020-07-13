#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorTwine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorTwine"));
	}

	template <typename T = uintptr_t> T& configPreset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& linkEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& twineEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& twine1PScreenEffect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& targetPawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanupEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTwine*))(Il2CppBase() + 0x3E93A94))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorTwine*, uintptr_t))(Il2CppBase() + 0x3E93B7C))(this, skillRepInfo);
	}
	template <typename T = void> T CleanupEffect() {
		return ((T (*)(NetworkAIBehaviorTwine*))(Il2CppBase() + 0x3E93C1C))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorTwine*))(Il2CppBase() + 0x3E94BA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTwine*))(Il2CppBase() + 0x3E94C44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorTwine*, uintptr_t))(Il2CppBase() + 0x3E94C4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorTwine*))(Il2CppBase() + 0x3E94C54))(this);
	}

};

}
