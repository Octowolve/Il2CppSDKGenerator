#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DrumTrapCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DrumTrapCollider"));
	}

	template <typename T = uintptr_t> T& ExpectFallPointsRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExpectFallPoints() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DrumTrapCollider*))(Il2CppBase() + 0x51E9344))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DrumTrapCollider*, uintptr_t))(Il2CppBase() + 0x51E9474))(this, other);
	}

};

}
