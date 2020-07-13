#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorCircleWait
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorCircleWait"));
	}

	template <typename T = uintptr_t> T& CircleWaitCfg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& lastSideLeft() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& startTurn() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Turn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorCircleWait*))(Il2CppBase() + 0x4CC0298))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorCircleWait*, float))(Il2CppBase() + 0x4CC0380))(this, deltaTime);
	}
	template <typename T = void> T Turn() {
		return ((T (*)(NetworkAIBehaviorCircleWait*))(Il2CppBase() + 0x4CC0440))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorCircleWait*))(Il2CppBase() + 0x4CC092C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorCircleWait*))(Il2CppBase() + 0x4CC0A70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIBehaviorCircleWait*, float))(Il2CppBase() + 0x4CC0A78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorCircleWait*))(Il2CppBase() + 0x4CC0A80))(this);
	}

};

}
