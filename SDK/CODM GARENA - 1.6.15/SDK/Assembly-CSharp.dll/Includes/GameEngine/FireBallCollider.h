#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FireBallCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FireBallCollider"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PawnTriggerMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t initMap) {
		return ((T (*)(FireBallCollider*, uintptr_t))(Il2CppBase() + 0x51BED80))(this, initMap);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(FireBallCollider*, uintptr_t))(Il2CppBase() + 0x51BEE2C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(FireBallCollider*, uintptr_t))(Il2CppBase() + 0x51BF058))(this, other);
	}

};

}
