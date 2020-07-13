#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleWheel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleWheel"));
	}

	template <typename T = uintptr_t> T& attachedAxle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& simulation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& brokenRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& brokenSlowdown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& meshTranslationObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& meshRotationObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& collision() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& dustEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sparkEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& dustRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& brokenDisableCollider() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& explodeState() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& restPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& rotationAngle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update1PWheel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update3PWheel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_explodeState() {
		return ((T (*)(VehicleWheel*))(Il2CppBase() + 0x2E8D64C))(this);
	}
	template <typename T = void> T set_explodeState(bool value) {
		return ((T (*)(VehicleWheel*, bool))(Il2CppBase() + 0x2E8D654))(this, value);
	}
	template <typename T = void> T Init(uintptr_t axle) {
		return ((T (*)(VehicleWheel*, uintptr_t))(Il2CppBase() + 0x2E8D65C))(this, axle);
	}
	template <typename T = void> T Update1PWheel(float deltaTime, float speed) {
		return ((T (*)(VehicleWheel*, float, float))(Il2CppBase() + 0x2E8D77C))(this, deltaTime, speed);
	}
	template <typename T = void> T Update3PWheel(float deltaTime, float speed) {
		return ((T (*)(VehicleWheel*, float, float))(Il2CppBase() + 0x2E8DDD8))(this, deltaTime, speed);
	}
	template <typename T = void> T UpdateEffect(float deltaTime, float speed) {
		return ((T (*)(VehicleWheel*, float, float))(Il2CppBase() + 0x2E8D91C))(this, deltaTime, speed);
	}
	template <typename T = void> T SetBroken() {
		return ((T (*)(VehicleWheel*))(Il2CppBase() + 0x2E8E014))(this);
	}

};

}
