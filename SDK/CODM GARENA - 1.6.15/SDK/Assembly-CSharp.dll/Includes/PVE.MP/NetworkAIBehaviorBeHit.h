#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorBeHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorBeHit"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& animTriggerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lastTriggerTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(NetworkAIBehaviorBeHit*, uintptr_t))(Il2CppBase() + 0x4CBB498))(this, pawn);
	}
	template <typename T = void> T OnTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(NetworkAIBehaviorBeHit*, uintptr_t))(Il2CppBase() + 0x4CBB6CC))(this, damageInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorBeHit*, uintptr_t))(Il2CppBase() + 0x4CBB844))(this, P0);
	}

};

}
