#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorGotoCombat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorGotoCombat"));
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

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorGotoCombat*))(Il2CppBase() + 0x4CC9A0C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorGotoCombat*))(Il2CppBase() + 0x4CC9AF4))(this);
	}

};

}
