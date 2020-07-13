#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VehicleNotOnRigidbody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VehicleNotOnRigidbody"));
	}

	template <typename T = uintptr_t> T& hitCheckBounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& tickEnabled() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_rigidbody() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransfrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T Init(uintptr_t _owner) {
		return ((T (*)(VehicleNotOnRigidbody*, uintptr_t))(Il2CppBase() + 0x27DF8F8))(this, _owner);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(VehicleNotOnRigidbody*))(Il2CppBase() + 0x27DFA64))(this);
	}
	template <typename T = void> T ResetTransfrom() {
		return ((T (*)(VehicleNotOnRigidbody*))(Il2CppBase() + 0x27DFBC0))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(VehicleNotOnRigidbody*, uintptr_t))(Il2CppBase() + 0x27DFD18))(this, other);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(VehicleNotOnRigidbody*))(Il2CppBase() + 0x27E092C))(this);
	}

};

}
