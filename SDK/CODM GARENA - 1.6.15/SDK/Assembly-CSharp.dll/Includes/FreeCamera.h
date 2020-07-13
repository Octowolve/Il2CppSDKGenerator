#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreeCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreeCamera"));
	}

	template <typename T = float> T& m_deltX() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_deltY() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_distance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_mSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mCamera() {
		return *(T*)((uintptr_t)this + 0x1C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ClampAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FreeCamera*))(Il2CppBase() + 0x3CD9B68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FreeCamera*))(Il2CppBase() + 0x3CD9C9C))(this);
	}
	template <typename T = float> T ClampAngle(float angle, float minAngle, float maxAgnle) {
		return ((T (*)(FreeCamera*, float, float, float))(Il2CppBase() + 0x3CDA398))(this, angle, minAngle, maxAgnle);
	}

};

}
