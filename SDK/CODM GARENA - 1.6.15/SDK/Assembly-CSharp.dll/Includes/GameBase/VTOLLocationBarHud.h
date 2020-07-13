#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLLocationBarHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLLocationBarHud"));
	}

	template <typename T = uintptr_t> T& m_LocationBarTex() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_LocationBarAngles2Offset() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_TacticalGPS() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ViewTarget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t inGPS, uintptr_t viewTarget) {
		return ((T (*)(VTOLLocationBarHud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BE999C))(this, inGPS, viewTarget);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VTOLLocationBarHud*))(Il2CppBase() + 0x1BE9A60))(this);
	}

};

}
