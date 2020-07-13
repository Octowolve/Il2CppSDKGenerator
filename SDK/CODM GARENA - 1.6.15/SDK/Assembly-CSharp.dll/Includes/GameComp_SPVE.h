#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameCompSPVE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameComp_SPVE"));
	}

	template <typename T = uintptr_t> T& m_ActorFactory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AISightManager() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_ActorFactory() {
		return ((T (*)(GameCompSPVE*))(Il2CppBase() + 0x4A01448))(this);
	}
	template <typename T = uintptr_t> T get_GameAISightManager() {
		return ((T (*)(GameCompSPVE*))(Il2CppBase() + 0x4A01450))(this);
	}
	template <typename T = void> T Init(uintptr_t game) {
		return ((T (*)(GameCompSPVE*, uintptr_t))(Il2CppBase() + 0x4A01458))(this, game);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GameCompSPVE*, float))(Il2CppBase() + 0x4A01680))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GameCompSPVE*))(Il2CppBase() + 0x4A01758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(GameCompSPVE*, uintptr_t))(Il2CppBase() + 0x4A01844))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GameCompSPVE*, float))(Il2CppBase() + 0x4A01848))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(GameCompSPVE*))(Il2CppBase() + 0x4A01850))(this);
	}

};

}
