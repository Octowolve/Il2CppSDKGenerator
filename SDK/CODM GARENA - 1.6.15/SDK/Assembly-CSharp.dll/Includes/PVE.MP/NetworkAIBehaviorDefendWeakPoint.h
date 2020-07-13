#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorDefendWeakPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorDefendWeakPoint"));
	}

	template <typename T = void*> T& onDefendWeakPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorDefendWeakPoint*))(Il2CppBase() + 0x4CC7ED8))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorDefendWeakPoint*, uintptr_t))(Il2CppBase() + 0x4CC7F84))(this, skillRepInfo);
	}

};

}
