#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MathTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MathTool"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CalcRotateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalcRotateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfSphereInBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfSphereInSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBezier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MulMatrixExpanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MulMatrixRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MulMatrixFor3dTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Square() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LongToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedStepLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CrossProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInTriangle_CrossProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInTriangle_Barycentric() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnwindRadians() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnwindDegrees() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = float> static T CalcRotateAngle(Il2CppVector3 pos1, Il2CppVector3 pos2, Il2CppVector3 forward) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x41C9918))(0, pos1, pos2, forward);
	}
	template <typename T = float> static T CalcRotateAngle_1(Il2CppVector3 dir, Il2CppVector3 forward) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x41C9BAC))(0, dir, forward);
	}
	template <typename T = bool> static T CheckIfSphereInBox(Il2CppVector3 sphereCenter, float sphereRadius, Il2CppVector3 boxCenter, Il2CppVector3 boxSize) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x41C9E0C))(0, sphereCenter, sphereRadius, boxCenter, boxSize);
	}
	template <typename T = bool> static T CheckIfSphereInSphere(Il2CppVector3 sphereCenter, float sphereRadius, Il2CppVector3 desSphereCenter, float desSphereRadius) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, float))(Il2CppBase() + 0x41CA040))(0, sphereCenter, sphereRadius, desSphereCenter, desSphereRadius);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T BuildBezier(Il2CppVector3 startPos, Il2CppVector3 endPos, float dis, int32_t ptCount) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x41CA17C))(0, startPos, endPos, dis, ptCount);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T GetPoints(Il2CppVector3 p0, Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3, float detail) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x41CA874))(0, p0, p1, p2, p3, detail);
	}
	template <typename T = uintptr_t> static T MulMatrixExpanded(uintptr_t m1, uintptr_t m2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41CAD10))(0, m1, m2);
	}
	template <typename T = void> static T MulMatrixRef(uintptr_t result, uintptr_t m1, uintptr_t m2) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41CB2C0))(0, result, m1, m2);
	}
	template <typename T = void> static T MulMatrixFor3dTrans(uintptr_t result, uintptr_t m1, uintptr_t m2) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41CB77C))(0, result, m1, m2);
	}
	template <typename T = float> static T ClampAngle(float value, float baseValue) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x41CBB50))(0, value, baseValue);
	}
	template <typename T = float> static T Square(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41CBC50))(0, f);
	}
	template <typename T = float> static T SqrDistance(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x41CBCF8))(0, a, b);
	}
	template <typename T = float> static T SqrDistance_1(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x41CBDEC))(0, a, b);
	}
	template <typename T = int64_t> static T IntToLong(int32_t low, int32_t high) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x41CBF0C))(0, low, high);
	}
	template <typename T = void> static T LongToInt(int64_t longValue, uintptr_t low, uintptr_t high) {
		return ((T (*)(void *, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41CBFB8))(0, longValue, low, high);
	}
	template <typename T = float> static T FixedStepLerp(float current, float target, float step) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x41CC080))(0, current, target, step);
	}
	template <typename T = bool> static T IsInRange(float value, float a, float b) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x41CC1C0))(0, value, a, b);
	}
	template <typename T = float> static T CrossProduct(Il2CppVector2 p1, Il2CppVector2 p2) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x41CC2C0))(0, p1, p2);
	}
	template <typename T = bool> static T IsPointInTriangle_CrossProduct(Il2CppVector2 p1, Il2CppVector2 p2, Il2CppVector2 p3, Il2CppVector2 p0) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x41CC3A0))(0, p1, p2, p3, p0);
	}
	template <typename T = bool> static T IsPointInTriangle_Barycentric(Il2CppVector2 p1, Il2CppVector2 p2, Il2CppVector2 p3, Il2CppVector2 p0) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x41CC610))(0, p1, p2, p3, p0);
	}
	template <typename T = float> static T UnwindRadians(float A) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41CC80C))(0, A);
	}
	template <typename T = float> static T UnwindDegrees(float A) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41CC908))(0, A);
	}
	template <typename T = Il2CppVector3> static T NormalizeAngle(Il2CppVector3 eulurAngle) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x41CCA04))(0, eulurAngle);
	}

};

}
