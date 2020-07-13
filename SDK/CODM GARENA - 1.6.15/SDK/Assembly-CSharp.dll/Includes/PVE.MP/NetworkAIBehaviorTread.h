#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorTread
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorTread"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& onAttack() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTread*))(Il2CppBase() + 0x3E927E8))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorTread*))(Il2CppBase() + 0x3E928D0))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorTread*, uintptr_t))(Il2CppBase() + 0x3E92968))(this, skillRepInfo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTread*))(Il2CppBase() + 0x3E92A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorTread*))(Il2CppBase() + 0x3E92A24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorTread*, uintptr_t))(Il2CppBase() + 0x3E92A2C))(this, P0);
	}

};

}
