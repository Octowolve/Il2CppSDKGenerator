#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorTrample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorTrample"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x28);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTrample*))(Il2CppBase() + 0x3E92258))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorTrample*, uintptr_t))(Il2CppBase() + 0x3E92340))(this, skillRepInfo);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorTrample*))(Il2CppBase() + 0x3E923E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTrample*))(Il2CppBase() + 0x3E92478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorTrample*, uintptr_t))(Il2CppBase() + 0x3E92480))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorTrample*))(Il2CppBase() + 0x3E92488))(this);
	}

};

}
