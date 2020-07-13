#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WheeledVehicleWheelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WheeledVehicleWheelController"));
	}

	template <typename T = uintptr_t> T& wheelMesh() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RotateAxis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsSteerWithLogicalWheel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& targetVehicle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_InitialWheelLocalPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& InitialLocalAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& WheelHitCollidersParent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WheelHitColliders() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isBroken() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isFakeWheel() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T get_InitialWheelLocalPosition() {
		return ((T (*)(WheeledVehicleWheelController*))(Il2CppBase() + 0x4594510))(this);
	}
	template <typename T = bool> T get_isBroken() {
		return ((T (*)(WheeledVehicleWheelController*))(Il2CppBase() + 0x4594524))(this);
	}
	template <typename T = void> T set_isBroken(bool value) {
		return ((T (*)(WheeledVehicleWheelController*, bool))(Il2CppBase() + 0x459452C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WheeledVehicleWheelController*))(Il2CppBase() + 0x4594534))(this);
	}

};

}
