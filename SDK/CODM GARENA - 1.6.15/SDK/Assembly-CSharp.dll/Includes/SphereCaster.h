#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SphereCaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SphereCaster"));
	}

	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& soften() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& coreRadius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& minCoreRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& miSoftenRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstainSizeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T ConstainSizeData(uintptr_t coreRadius, uintptr_t softenRadius) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E9F9C))(0, coreRadius, softenRadius);
	}

};

}
