#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorSpawnPlayAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorSpawnPlayAnim"));
	}

	template <typename T = Il2CppString*> T& spawnAnimName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& playState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& spawnAnimLen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& invincibleTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& oldCullingMode() {
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

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorSpawnPlayAnim*))(Il2CppBase() + 0x3E8D0B4))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorSpawnPlayAnim*))(Il2CppBase() + 0x3E8D19C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorSpawnPlayAnim*))(Il2CppBase() + 0x3E8D404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorSpawnPlayAnim*))(Il2CppBase() + 0x3E8D40C))(this);
	}

};

}
