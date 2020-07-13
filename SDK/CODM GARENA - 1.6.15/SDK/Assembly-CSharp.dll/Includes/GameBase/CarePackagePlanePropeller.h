#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackagePlanePropeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackagePlanePropeller"));
	}

	template <typename T = Il2CppVector3> T& Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Multiplier() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CarePackagePlanePropeller*))(Il2CppBase() + 0x3C64788))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CarePackagePlanePropeller*))(Il2CppBase() + 0x3C64820))(this);
	}

};

}
