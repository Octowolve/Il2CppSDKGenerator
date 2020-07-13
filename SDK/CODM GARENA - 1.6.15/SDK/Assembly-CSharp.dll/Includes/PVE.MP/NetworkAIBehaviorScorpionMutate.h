#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorScorpionMutate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorScorpionMutate"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleTurnLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorScorpionMutate*))(Il2CppBase() + 0x4CD5F24))(this);
	}
	template <typename T = void> T ToggleTurnLayer(bool enable) {
		return ((T (*)(NetworkAIBehaviorScorpionMutate*, bool))(Il2CppBase() + 0x4CD600C))(this, enable);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorScorpionMutate*))(Il2CppBase() + 0x4CD6180))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorScorpionMutate*))(Il2CppBase() + 0x4CD62B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorScorpionMutate*))(Il2CppBase() + 0x4CD62C0))(this);
	}

};

}
