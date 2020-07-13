#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ZiZi.Graphics.Sampling.Hammersley {

class HammersleyPointSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ZiZi.Graphics.Sampling.Hammersley", "HammersleyPointSet"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Generate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnitHemisphereRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetUnitHemisphereRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHemisphereRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T Value(int32_t index, int32_t totalCount, uintptr_t result) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4DD75E8))(0, index, totalCount, result);
	}
	template <typename T = Il2CppVector2> static T Value_1(int32_t index, int32_t totalCount) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4DD7808))(0, index, totalCount);
	}
	template <typename T = void> static T Generate(int32_t count, uintptr_t result) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4DD7928))(0, count, result);
	}
	template <typename T = Il2CppVector3> static T GetUnitHemisphereRay(Il2CppVector2 hammersleyPoint) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4DD7AA0))(0, hammersleyPoint);
	}
	template <typename T = void> static T GetUnitHemisphereRay_1(Il2CppVector2 hammersleyPoint, uintptr_t result) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x4DD7C20))(0, hammersleyPoint, result);
	}
	template <typename T = Il2CppVector3> static T GetHemisphereRay(Il2CppVector2 hammersleyPoint, float radius) {
		return ((T (*)(void *, Il2CppVector2, float))(Il2CppBase() + 0x4DD7D84))(0, hammersleyPoint, radius);
	}

};

}
