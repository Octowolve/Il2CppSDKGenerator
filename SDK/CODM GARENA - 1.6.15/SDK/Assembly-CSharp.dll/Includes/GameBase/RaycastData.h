#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RaycastData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RaycastData"));
	}

	template <typename T = Il2CppVector3> T& origin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& cdTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& currentCdTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& hitInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DDC93C))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DDCAD0))(0, lhs, rhs);
	}

};

}
