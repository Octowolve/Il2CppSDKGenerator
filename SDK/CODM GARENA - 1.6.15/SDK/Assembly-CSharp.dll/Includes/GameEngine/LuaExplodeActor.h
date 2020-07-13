#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaExplodeActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaExplodeActor"));
	}

	template <typename T = uintptr_t> T& m_actorConfig() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(LuaExplodeActor*))(Il2CppBase() + 0x4A8C868))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(LuaExplodeActor*))(Il2CppBase() + 0x4A8C964))(this);
	}
	template <typename T = void> T Init(uint32_t actorID, uint32_t configID) {
		return ((T (*)(LuaExplodeActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8CA3C))(this, actorID, configID);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(LuaExplodeActor*))(Il2CppBase() + 0x4A8D1DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(LuaExplodeActor*))(Il2CppBase() + 0x4A8D2DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaExplodeActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8D3B8))(this, P0, P1);
	}

};

}
