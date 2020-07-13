#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core.PathCore {

class Path
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "Path"));
	}

	template <typename T = uintptr_t> static T& _catmullRomDecoder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _linearDecoder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wpLengths() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& subdivisionsXSegment() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& subdivisions() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wps() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& controlPoints() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& length() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isFinalized() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& timesTable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lengthsTable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& linearWPIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _incrementalClone() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _incrementalIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _decoder() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _changed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nonLinearDrawWps() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& lookAtPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& gizmoColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = void> T FinalizePath(bool isClosedPath, uintptr_t lockPositionAxes, Il2CppVector3 currTargetVal) {
		return ((T (*)(Path*, bool, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x44B2DD4))(this, isClosedPath, lockPositionAxes, currTargetVal);
	}
	template <typename T = Il2CppVector3> T GetPoint(float perc, bool convertToConstantPerc) {
		return ((T (*)(Path*, float, bool))(Il2CppBase() + 0x44B2F64))(this, perc, convertToConstantPerc);
	}
	template <typename T = float> T ConvertToConstantPathPerc(float perc) {
		return ((T (*)(Path*, float))(Il2CppBase() + 0x44B2FE0))(this, perc);
	}
	template <typename T = int32_t> T GetWaypointIndexFromPerc(float perc, bool isMovingForward) {
		return ((T (*)(Path*, float, bool))(Il2CppBase() + 0x44B319C))(this, perc, isMovingForward);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDrawPoints(uintptr_t p, int32_t drawSubdivisionsXSegment) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x44B32B8))(0, p, drawSubdivisionsXSegment);
	}
	template <typename T = void> static T RefreshNonLinearDrawWps(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44B3420))(0, p);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(Path*))(Il2CppBase() + 0x44B35A4))(this);
	}
	template <typename T = uintptr_t> T CloneIncremental(int32_t loopIncrement) {
		return ((T (*)(Path*, int32_t))(Il2CppBase() + 0x44B3734))(this, loopIncrement);
	}
	template <typename T = void> T AssignWaypoints(Il2CppArray<uintptr_t>* newWps, bool cloneWps) {
		return ((T (*)(Path*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x44B2AC8))(this, newWps, cloneWps);
	}
	template <typename T = void> T AssignDecoder(uintptr_t pathType) {
		return ((T (*)(Path*, uintptr_t))(Il2CppBase() + 0x44B2C24))(this, pathType);
	}
	template <typename T = void> T Draw() {
		return ((T (*)(Path*))(Il2CppBase() + 0x44B3EB0))(this);
	}
	template <typename T = void> static T Draw_1(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44B3EB8))(0, p);
	}

};

}
