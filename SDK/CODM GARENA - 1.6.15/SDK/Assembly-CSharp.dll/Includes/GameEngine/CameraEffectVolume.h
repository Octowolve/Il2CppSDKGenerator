#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraEffectVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraEffectVolume"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& EnterVolumeActions() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LeaveVolumeActions() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(CameraEffectVolume*, uintptr_t))(Il2CppBase() + 0x4191AD4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(CameraEffectVolume*, uintptr_t))(Il2CppBase() + 0x4191D9C))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(CameraEffectVolume*, uintptr_t))(Il2CppBase() + 0x4192064))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(CameraEffectVolume*, uintptr_t))(Il2CppBase() + 0x419206C))(this, P0);
	}

};

}
