#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtendUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtendUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_AngleXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceXZPower2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MagnitudeXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MagnitudeXZPower2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveLocalX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveLocalY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveLocalZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePositive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToHDEuler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeltaXPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeltaYPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeltaZPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReferenceValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SearchChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_doSearchChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameObjectLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = float> static T AngleXZ(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4BDA31C))(0, lhs, rhs);
	}
	template <typename T = float> static T DistanceXZ(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4BDA490))(0, lhs, rhs);
	}
	template <typename T = float> static T DistanceXZPower2(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4BDA5E8))(0, lhs, rhs);
	}
	template <typename T = float> static T MagnitudeXZ(Il2CppVector3 lhs) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4BDA6E0))(0, lhs);
	}
	template <typename T = float> static T MagnitudeXZPower2(Il2CppVector3 lhs) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4BDA814))(0, lhs);
	}
	template <typename T = void> static T SetX(uintptr_t trans, float x) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDA8E8))(0, trans, x);
	}
	template <typename T = void> static T SetY(uintptr_t trans, float y) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDAA10))(0, trans, y);
	}
	template <typename T = void> static T SetZ(uintptr_t trans, float z) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDAB38))(0, trans, z);
	}
	template <typename T = void> static T MoveX(uintptr_t trans, float x) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDAC60))(0, trans, x);
	}
	template <typename T = void> static T MoveY(uintptr_t trans, float y) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDADB0))(0, trans, y);
	}
	template <typename T = void> static T MoveZ(uintptr_t trans, float z) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDAF00))(0, trans, z);
	}
	template <typename T = void> static T MoveLocalX(uintptr_t trans, float x) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB054))(0, trans, x);
	}
	template <typename T = void> static T MoveLocalY(uintptr_t trans, float y) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB1A4))(0, trans, y);
	}
	template <typename T = void> static T MoveLocalZ(uintptr_t trans, float z) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB2F4))(0, trans, z);
	}
	template <typename T = void> static T SetLocalX(uintptr_t trans, float x) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB448))(0, trans, x);
	}
	template <typename T = void> static T SetLocalY(uintptr_t trans, float y) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB570))(0, trans, y);
	}
	template <typename T = void> static T SetLocalZ(uintptr_t trans, float z) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4BDB698))(0, trans, z);
	}
	template <typename T = Il2CppVector3> static T MakePositive(Il2CppVector3 euler) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4BDB7C0))(0, euler);
	}
	template <typename T = Il2CppVector3> static T ToHDEuler(Il2CppQuaternion qua) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x4BDB980))(0, qua);
	}
	template <typename T = Il2CppVector3> static T GetDeltaXPoint(Il2CppVector3 pos, float x) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4BDBC88))(0, pos, x);
	}
	template <typename T = Il2CppVector3> static T GetDeltaYPoint(Il2CppVector3 pos, float y) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4BDBD80))(0, pos, y);
	}
	template <typename T = Il2CppVector3> static T GetDeltaZPoint(Il2CppVector3 pos, float z) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4BDBE78))(0, pos, z);
	}
	template <typename T = Il2CppString*> static T GetFullName(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BDBF74))(0, trans);
	}
	template <typename T = bool> static T IsReferenceValid(uintptr_t managedObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BDC148))(0, managedObj);
	}
	template <typename T = uintptr_t> static T SearchChild(uintptr_t tr, Il2CppString* childName, int32_t recursivelyDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4BDC1FC))(0, tr, childName, recursivelyDepth);
	}
	template <typename T = uintptr_t> static T SearchChild_1(uintptr_t obj, Il2CppString* childName, int32_t recursivelyDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4BDC850))(0, obj, childName, recursivelyDepth);
	}
	template <typename T = uintptr_t> static T doSearchChild(uintptr_t tr, Il2CppString* childName, int32_t recursivelyDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4BDC324))(0, tr, childName, recursivelyDepth);
	}
	template <typename T = uintptr_t> static T GetScript(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x334A41C))(0, go);
	}
	template <typename T = uintptr_t> static T GetScript_1(uintptr_t mono) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x334A5A4))(0, mono);
	}
	template <typename T = void> static T SetGameObjectLayer(uintptr_t go, Il2CppString* layerName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BDC998))(0, go, layerName);
	}

};

}
