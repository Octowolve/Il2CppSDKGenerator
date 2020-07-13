#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobBox"));
	}

	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Size() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Vects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Edges() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateByLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateByBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSeparate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TestSeparate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_TestSeparate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxMixProjPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetBound() {
		return ((T (*)(CobBox*))(Il2CppBase() + 0x3A21ED0))(this);
	}
	template <typename T = void> T GetBound_1(uintptr_t* max, uintptr_t* min) {
		return ((T (*)(CobBox*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3A21FD0))(this, max, min);
	}
	template <typename T = void> T UpdateByLocation(Il2CppVector3 max, Il2CppVector3 min, uintptr_t localToWorld) {
		return ((T (*)(CobBox*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A22290))(this, max, min, localToWorld);
	}
	template <typename T = void> T UpdateByBoxCollider(uintptr_t collider) {
		return ((T (*)(CobBox*, uintptr_t))(Il2CppBase() + 0x3A2373C))(this, collider);
	}
	template <typename T = bool> T TestSeparate(uintptr_t triangle) {
		return ((T (*)(CobBox*, uintptr_t))(Il2CppBase() + 0x3A23A18))(this, triangle);
	}
	template <typename T = bool> T TestSeparate_1(uintptr_t other) {
		return ((T (*)(CobBox*, uintptr_t))(Il2CppBase() + 0x3A242D8))(this, other);
	}
	template <typename T = bool> static T TestSeparate_2(uintptr_t boxA, uintptr_t boxB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A244D8))(0, boxA, boxB);
	}
	template <typename T = void> T GetMaxMixProjPoint(uintptr_t line, uintptr_t max, uintptr_t min) {
		return ((T (*)(CobBox*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A23EA0))(this, line, max, min);
	}

};

}
