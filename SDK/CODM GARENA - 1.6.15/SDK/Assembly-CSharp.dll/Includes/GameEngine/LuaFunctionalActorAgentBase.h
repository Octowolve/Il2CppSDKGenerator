#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaFunctionalActorAgentBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaFunctionalActorAgentBase"));
	}

	template <typename T = uintptr_t> T& m_Actor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ActorInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_FunConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLuaPropertyChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t actor, uintptr_t actorInfo, uintptr_t funConfig) {
		return ((T (*)(LuaFunctionalActorAgentBase*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A8F91C))(this, actor, actorInfo, funConfig);
	}
	template <typename T = void> T OnSyncLuaPropertyChange(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaFunctionalActorAgentBase*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8F7C0))(this, propertyID, value);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LuaFunctionalActorAgentBase*, float))(Il2CppBase() + 0x4A8FAA8))(this, deltaTime);
	}
	template <typename T = void> T OnModelUpdated(uintptr_t model) {
		return ((T (*)(LuaFunctionalActorAgentBase*, uintptr_t))(Il2CppBase() + 0x4A8F4E4))(this, model);
	}

};

}
