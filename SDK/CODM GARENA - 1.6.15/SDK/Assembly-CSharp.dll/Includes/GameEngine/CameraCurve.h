#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraCurve"));
	}

	template <typename T = uintptr_t> T& FOV() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Modify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Modify(float inElapsedTime) {
		return ((T (*)(CameraCurve*, float))(Il2CppBase() + 0x41912DC))(this, inElapsedTime);
	}
	template <typename T = void> T xLuaBaseProxy_Modify(float P0) {
		return ((T (*)(CameraCurve*, float))(Il2CppBase() + 0x4191410))(this, P0);
	}

};

}
