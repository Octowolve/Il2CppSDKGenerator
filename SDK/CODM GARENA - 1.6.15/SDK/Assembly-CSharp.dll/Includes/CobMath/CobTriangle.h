#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobTriangle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobTriangle"));
	}

	template <typename T = Il2CppVector3> T& A() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& B() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& C() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AB() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& BC() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CA() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& Normal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& HitGuid() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxMixProjPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildFromMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T GetBound(uintptr_t max, uintptr_t min) {
		return ((T (*)(CobTriangle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A2554C))(this, max, min);
	}
	template <typename T = Il2CppVector3> T GetVect(uintptr_t vectType) {
		return ((T (*)(CobTriangle*, uintptr_t))(Il2CppBase() + 0x3A28004))(this, vectType);
	}
	template <typename T = uintptr_t> T GetEdge(uintptr_t edgeType) {
		return ((T (*)(CobTriangle*, uintptr_t))(Il2CppBase() + 0x3A280F8))(this, edgeType);
	}
	template <typename T = bool> T IsHitBy(uintptr_t line, uintptr_t hitInfo) {
		return ((T (*)(CobTriangle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A24A88))(this, line, hitInfo);
	}
	template <typename T = bool> T IsPointInTriangle(Il2CppVector3 point) {
		return ((T (*)(CobTriangle*, Il2CppVector3))(Il2CppBase() + 0x3A28200))(this, point);
	}
	template <typename T = bool> T SameSide(Il2CppVector3 a, Il2CppVector3 b, Il2CppVector3 c, Il2CppVector3 p) {
		return ((T (*)(CobTriangle*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3A283C0))(this, a, b, c, p);
	}
	template <typename T = void> T GetMaxMixProjPoint(uintptr_t line, uintptr_t max, uintptr_t min) {
		return ((T (*)(CobTriangle*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A240A4))(this, line, max, min);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T BuildFromMesh(Il2CppArray<uintptr_t>* rootList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A285F4))(0, rootList);
	}

};

}
