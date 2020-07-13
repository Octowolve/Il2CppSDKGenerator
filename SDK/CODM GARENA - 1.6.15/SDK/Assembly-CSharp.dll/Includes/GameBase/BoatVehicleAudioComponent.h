#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BoatVehicleAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BoatVehicleAudioComponent"));
	}

	template <typename T = Il2CppString*> T& immersionDepth() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& rotationRatio() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& maxImmersionDepth() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(BoatVehicleAudioComponent*, float))(Il2CppBase() + 0x373F760))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(BoatVehicleAudioComponent*, float))(Il2CppBase() + 0x373FB18))(this, P0);
	}

};

}
