#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CullingGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CullingGroup"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_OnStateChanged() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(CullingGroup*))(Il2CppBase() + 0x4DA38CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CullingGroup*))(Il2CppBase() + 0x4DA3A58))(this);
	}
	template <typename T = uintptr_t> T get_onStateChanged() {
		return ((T (*)(CullingGroup*))(Il2CppBase() + 0x4DA3AF0))(this);
	}
	template <typename T = void> T set_onStateChanged(uintptr_t value) {
		return ((T (*)(CullingGroup*, uintptr_t))(Il2CppBase() + 0x4DA3AF8))(this, value);
	}
	template <typename T = void> T set_targetCamera(uintptr_t value) {
		return ((T (*)(CullingGroup*, uintptr_t))(Il2CppBase() + 0x4DA3B00))(this, value);
	}
	template <typename T = void> T SetBoundingSpheres(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(CullingGroup*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA3BA0))(this, array);
	}
	template <typename T = void> T SetBoundingSphereCount(int32_t count) {
		return ((T (*)(CullingGroup*, int32_t))(Il2CppBase() + 0x4DA3C40))(this, count);
	}
	template <typename T = bool> T IsVisible(int32_t index) {
		return ((T (*)(CullingGroup*, int32_t))(Il2CppBase() + 0x4DA3CE0))(this, index);
	}
	template <typename T = int32_t> T GetDistance(int32_t index) {
		return ((T (*)(CullingGroup*, int32_t))(Il2CppBase() + 0x4DA3D80))(this, index);
	}
	template <typename T = void> T SetBoundingDistances(Il2CppArray<uintptr_t>* distances) {
		return ((T (*)(CullingGroup*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA3E20))(this, distances);
	}
	template <typename T = void> T SetDistanceReferencePoint(uintptr_t transform) {
		return ((T (*)(CullingGroup*, uintptr_t))(Il2CppBase() + 0x4DA3EC0))(this, transform);
	}
	template <typename T = void> static T SendEvents(uintptr_t cullingGroup, uintptr_t eventsPtr, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DA3F60))(0, cullingGroup, eventsPtr, count);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CullingGroup*))(Il2CppBase() + 0x4DA3834))(this);
	}
	template <typename T = void> T FinalizerFailure() {
		return ((T (*)(CullingGroup*))(Il2CppBase() + 0x4DA39C0))(this);
	}

};

}
