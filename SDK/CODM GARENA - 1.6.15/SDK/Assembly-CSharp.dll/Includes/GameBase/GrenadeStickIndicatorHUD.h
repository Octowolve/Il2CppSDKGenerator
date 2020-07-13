#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GrenadeStickIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GrenadeStickIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& m_StickProj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraceGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T TraceGrenade(uintptr_t obj) {
		return ((T (*)(GrenadeStickIndicatorHUD*, uintptr_t))(Il2CppBase() + 0x1ED7E08))(this, obj);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GrenadeStickIndicatorHUD*))(Il2CppBase() + 0x1ED7F04))(this);
	}

};

}
