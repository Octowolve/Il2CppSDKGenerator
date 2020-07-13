#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VTOLViewChangeMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VTOLViewChangeMask"));
	}

	template <typename T = uintptr_t> T& m_TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T FadeOut(float duration) {
		return ((T (*)(VTOLViewChangeMask*, float))(Il2CppBase() + 0x3D9F304))(this, duration);
	}
	template <typename T = void> T DelayDeactive() {
		return ((T (*)(VTOLViewChangeMask*))(Il2CppBase() + 0x3D9F490))(this);
	}

};

}
