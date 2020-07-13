#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WorldManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WorldManager"));
	}

	template <typename T = uintptr_t> T& m_GameWorld() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsValidWorld() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBeginLoadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_GameWorld() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CAB98))(this);
	}
	template <typename T = bool> T InitWorld(uintptr_t gameConstructor, int32_t mapID) {
		return ((T (*)(WorldManager*, uintptr_t, int32_t))(Il2CppBase() + 0x33CABA0))(this, gameConstructor, mapID);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CAD60))(this);
	}
	template <typename T = void> T ShutdownWorld() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CAE10))(this);
	}
	template <typename T = void> T NotifyBeginLoadMap() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CAEC8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WorldManager*, float))(Il2CppBase() + 0x33CAF6C))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CB034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WorldManager*, float))(Il2CppBase() + 0x33CB0D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(WorldManager*))(Il2CppBase() + 0x33CB0E0))(this);
	}

};

}
