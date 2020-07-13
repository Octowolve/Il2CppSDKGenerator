#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class Spline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "Spline"));
	}

	template <typename T = uintptr_t> T& splineColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& displayResolution() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& splineSolver() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& CurrentSegment() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsClosed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsReversed() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = int32_t> T get_CurrentSegment() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B060))(this);
	}
	template <typename T = void> T set_CurrentSegment(int32_t value) {
		return ((T (*)(Spline*, int32_t))(Il2CppBase() + 0x485B068))(this, value);
	}
	template <typename T = bool> T get_IsClosed() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B070))(this);
	}
	template <typename T = void> T set_IsClosed(bool value) {
		return ((T (*)(Spline*, bool))(Il2CppBase() + 0x485B078))(this, value);
	}
	template <typename T = bool> T get_IsReversed() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B080))(this);
	}
	template <typename T = void> T set_IsReversed(bool value) {
		return ((T (*)(Spline*, bool))(Il2CppBase() + 0x485B088))(this, value);
	}
	template <typename T = uintptr_t> T get_SplineColor() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B090))(this);
	}
	template <typename T = void> T set_SplineColor(uintptr_t value) {
		return ((T (*)(Spline*, uintptr_t))(Il2CppBase() + 0x485B0A0))(this, value);
	}
	template <typename T = float> T get_DisplayResolution() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B0B8))(this);
	}
	template <typename T = void> T set_DisplayResolution(float value) {
		return ((T (*)(Spline*, float))(Il2CppBase() + 0x485B0C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Nodes() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B0C8))(this);
	}
	template <typename T = uintptr_t> T get_SplineSolver() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B0EC))(this);
	}
	template <typename T = void> T set_SplineSolver(uintptr_t value) {
		return ((T (*)(Spline*, uintptr_t))(Il2CppBase() + 0x485B0F4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastNode() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B0FC))(this);
	}
	template <typename T = void> T BuildFromKeyframes(Il2CppList<uintptr_t>* keyframes) {
		return ((T (*)(Spline*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x485B1D4))(this, keyframes);
	}
	template <typename T = Il2CppVector3> T GetPosition(float time) {
		return ((T (*)(Spline*, float))(Il2CppBase() + 0x485B690))(this, time);
	}
	template <typename T = Il2CppVector3> T GetPositionOnPath(float time) {
		return ((T (*)(Spline*, float))(Il2CppBase() + 0x485B6C4))(this, time);
	}
	template <typename T = void> T Close() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B7F4))(this);
	}
	template <typename T = void> T Reverse() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B8E0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x485B918))(this);
	}

};

}
