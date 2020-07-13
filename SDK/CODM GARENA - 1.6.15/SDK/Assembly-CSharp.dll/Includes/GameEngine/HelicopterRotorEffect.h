#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HelicopterRotorEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HelicopterRotorEffect"));
	}

	template <typename T = bool> T& rotorHidden() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& lastLiftForce() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isEngineSoundPlaying() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& vehicleOwner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& propellerMesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& propellerEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLiftForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRotor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTakeOffSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRotor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleRotor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshToggleRotor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRotorEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FB658))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FB71C))(this);
	}
	template <typename T = void> T RefreshLiftForce(float liftForce) {
		return ((T (*)(HelicopterRotorEffect*, float))(Il2CppBase() + 0x36FB8A4))(this, liftForce);
	}
	template <typename T = void> T ShowRotor() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FBD6C))(this);
	}
	template <typename T = void> T PlayTakeOffSound() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FBB38))(this);
	}
	template <typename T = void> T HideRotor() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FBCC4))(this);
	}
	template <typename T = void> T ToggleRotor(bool show) {
		return ((T (*)(HelicopterRotorEffect*, bool))(Il2CppBase() + 0x36FBF04))(this, show);
	}
	template <typename T = void> T RefreshToggleRotor() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FC09C))(this);
	}
	template <typename T = void> T ResetRotorEffectState() {
		return ((T (*)(HelicopterRotorEffect*))(Il2CppBase() + 0x36FC214))(this);
	}

};

}
