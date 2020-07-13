#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class DummyPVEAIAnimEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "DummyPVEAIAnimEventHandler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLaunchProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoteAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnMeleeAttack() {
		return ((T (*)(DummyPVEAIAnimEventHandler*))(Il2CppBase() + 0x49C0868))(this);
	}
	template <typename T = void> T OnLaunchProjectile() {
		return ((T (*)(DummyPVEAIAnimEventHandler*))(Il2CppBase() + 0x49C0900))(this);
	}
	template <typename T = void> T OnRemoteAttack() {
		return ((T (*)(DummyPVEAIAnimEventHandler*))(Il2CppBase() + 0x49C0998))(this);
	}

};

}
