#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobCell"));
	}

	template <typename T = uintptr_t> T& Bound() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BoxList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TriangleList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T IsHitBy(uintptr_t line, uintptr_t hitInfo) {
		return ((T (*)(CobCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A24830))(this, line, hitInfo);
	}
	template <typename T = void> T AddTriangle(uintptr_t triangle) {
		return ((T (*)(CobCell*, uintptr_t))(Il2CppBase() + 0x3A24D00))(this, triangle);
	}

};

}
