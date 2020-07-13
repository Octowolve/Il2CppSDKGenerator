#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobHitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobHitInfo"));
	}

	template <typename T = uint32_t> T& Guid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& HitDistance() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& CheckBackFace() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HitType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> static T& GUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T BuildHitInfo(uintptr_t hitType, bool checkBackFace) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3A25F84))(0, hitType, checkBackFace);
	}

};

}
