#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobLine"));
	}

	template <typename T = Il2CppVector3> T& Origin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Direction() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Length() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Trace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjection_Plane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIntersectPoint_Plane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetProjection(Il2CppVector3 point, uintptr_t proj) {
		return ((T (*)(CobLine*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A260DC))(this, point, proj);
	}
	template <typename T = int32_t> T Trace(Il2CppArray<uintptr_t>* triangles, uintptr_t hitInfo) {
		return ((T (*)(CobLine*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3A26294))(this, triangles, hitInfo);
	}
	template <typename T = Il2CppVector3> T GetProjection_Plane(Il2CppVector3 point) {
		return ((T (*)(CobLine*, Il2CppVector3))(Il2CppBase() + 0x3A2643C))(this, point);
	}
	template <typename T = float> T GetIntersectPoint_Plane(uintptr_t line, uintptr_t point) {
		return ((T (*)(CobLine*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A2675C))(this, line, point);
	}

};

}
