#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorTentacleGrab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorTentacleGrab"));
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
		return ((T (*)(NetworkAIBehaviorTentacleGrab*))(Il2CppBase() + 0x3E91910))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorTentacleGrab*, uintptr_t))(Il2CppBase() + 0x3E919F8))(this, skillRepInfo);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorTentacleGrab*))(Il2CppBase() + 0x3E91A98))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorTentacleGrab*))(Il2CppBase() + 0x3E91B30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorTentacleGrab*, uintptr_t))(Il2CppBase() + 0x3E91B38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorTentacleGrab*))(Il2CppBase() + 0x3E91B40))(this);
	}

};

}
