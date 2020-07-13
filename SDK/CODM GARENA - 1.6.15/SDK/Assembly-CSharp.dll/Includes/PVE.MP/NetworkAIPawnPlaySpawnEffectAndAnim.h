#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIPawnPlaySpawnEffectAndAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIPawnPlaySpawnEffectAndAnim"));
	}

	template <typename T = uintptr_t> T& oldCullingMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& effectName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& animStateName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& playAnimTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& animLength() {
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
		return ((T (*)(NetworkAIPawnPlaySpawnEffectAndAnim*))(Il2CppBase() + 0x3EA507C))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIPawnPlaySpawnEffectAndAnim*))(Il2CppBase() + 0x3EA5164))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIPawnPlaySpawnEffectAndAnim*))(Il2CppBase() + 0x3EA5398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIPawnPlaySpawnEffectAndAnim*))(Il2CppBase() + 0x3EA53A0))(this);
	}

};

}
