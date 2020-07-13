#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraEffectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraEffectManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CameraEffects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T FindEffect(uintptr_t type) {
		return ((T (*)(CameraEffectManager*, uintptr_t))(Il2CppBase() + 0x41914BC))(this, type);
	}
	template <typename T = void> T StopAllEffect() {
		return ((T (*)(CameraEffectManager*))(Il2CppBase() + 0x41915F0))(this);
	}
	template <typename T = void> T SetEffectActive(uintptr_t type, bool bActive) {
		return ((T (*)(CameraEffectManager*, uintptr_t, bool))(Il2CppBase() + 0x41916FC))(this, type, bActive);
	}
	template <typename T = void> T StopEffect(uintptr_t type) {
		return ((T (*)(CameraEffectManager*, uintptr_t))(Il2CppBase() + 0x4191850))(this, type);
	}

};

}
