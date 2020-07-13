#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class PhysicsRaycaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "PhysicsRaycaster"));
	}

	template <typename T = int32_t> static T& kNoEventMaskSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_EventCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_EventMask() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_eventCamera() {
		return ((T (*)(PhysicsRaycaster*))(Il2CppBase() + 0x3D01E40))(this);
	}
	template <typename T = int32_t> T get_depth() {
		return ((T (*)(PhysicsRaycaster*))(Il2CppBase() + 0x3D01F3C))(this);
	}
	template <typename T = int32_t> T get_finalEventMask() {
		return ((T (*)(PhysicsRaycaster*))(Il2CppBase() + 0x3D01D10))(this);
	}
	template <typename T = uintptr_t> T get_eventMask() {
		return ((T (*)(PhysicsRaycaster*))(Il2CppBase() + 0x3D0204C))(this);
	}
	template <typename T = void> T set_eventMask(uintptr_t value) {
		return ((T (*)(PhysicsRaycaster*, uintptr_t))(Il2CppBase() + 0x3D02054))(this, value);
	}
	template <typename T = void> T ComputeRayAndDistance(uintptr_t eventData, uintptr_t* ray, uintptr_t* distanceToClipPlane) {
		return ((T (*)(PhysicsRaycaster*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3D01B08))(this, eventData, ray, distanceToClipPlane);
	}
	template <typename T = void> T Raycast(uintptr_t eventData, Il2CppList<uintptr_t>* resultAppendList) {
		return ((T (*)(PhysicsRaycaster*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D0205C))(this, eventData, resultAppendList);
	}
	template <typename T = int32_t> static T Raycastm__0(uintptr_t r1, uintptr_t r2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D025E0))(0, r1, r2);
	}

};

}
