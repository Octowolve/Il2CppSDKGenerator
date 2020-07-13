#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaFunctionalActorAgentGold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaFunctionalActorAgent_Gold"));
	}

	template <typename T = uintptr_t> T& m_Flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_FlagBase() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLuaPropertyChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnModelUpdated(uintptr_t model) {
		return ((T (*)(LuaFunctionalActorAgentGold*, uintptr_t))(Il2CppBase() + 0x4A8F320))(this, model);
	}
	template <typename T = void> T OnSyncLuaPropertyChange(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaFunctionalActorAgentGold*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8F584))(this, propertyID, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnModelUpdated(uintptr_t P0) {
		return ((T (*)(LuaFunctionalActorAgentGold*, uintptr_t))(Il2CppBase() + 0x4A8F874))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncLuaPropertyChange(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaFunctionalActorAgentGold*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8F878))(this, P0, P1);
	}

};

}
