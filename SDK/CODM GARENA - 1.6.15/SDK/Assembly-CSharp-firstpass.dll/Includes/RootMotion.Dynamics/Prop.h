#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class Prop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "Prop"));
	}

	template <typename T = int32_t> T& propType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& muscle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& muscleProps() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& forceLayers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& additionalPin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& additionalPinTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& additionalPinWeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& propRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& xMotion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& yMotion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& zMotion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& angularXMotion() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& angularYMotion() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& angularZMotion() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colliders() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T get_isPickedUp() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BB878))(this);
	}
	template <typename T = uintptr_t> T get_propRoot() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BB928))(this);
	}
	template <typename T = void> T set_propRoot(uintptr_t value) {
		return ((T (*)(Prop*, uintptr_t))(Il2CppBase() + 0x38BB930))(this, value);
	}
	template <typename T = void> T PickUp(uintptr_t propRoot) {
		return ((T (*)(Prop*, uintptr_t))(Il2CppBase() + 0x38BB938))(this, propRoot);
	}
	template <typename T = void> T Drop() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBB04))(this);
	}
	template <typename T = void> T StartPickedUp(uintptr_t propRoot) {
		return ((T (*)(Prop*, uintptr_t))(Il2CppBase() + 0x38BBB1C))(this, propRoot);
	}
	template <typename T = void> T OnPickUp(uintptr_t propRoot) {
		return ((T (*)(Prop*, uintptr_t))(Il2CppBase() + 0x38BBB24))(this, propRoot);
	}
	template <typename T = void> T OnDrop() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBB28))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBB2C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBB30))(this);
	}
	template <typename T = void> T ReleaseJoint() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBD84))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x38BBF60))(this);
	}

};

}
