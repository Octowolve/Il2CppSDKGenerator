#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LightAttenVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LightAttenVolume"));
	}

	template <typename T = uintptr_t> T& TargetLight() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FromIntensity() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ToIntensity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& mCurIntensity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& mIsIncrease() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& mNeedUpdate() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LightAttenVolume*))(Il2CppBase() + 0x2496AAC))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(LightAttenVolume*, uintptr_t, bool))(Il2CppBase() + 0x2496B9C))(this, p, enter);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(LightAttenVolume*))(Il2CppBase() + 0x2496CA8))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(LightAttenVolume*, float))(Il2CppBase() + 0x2496CB0))(this, fDeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LightAttenVolume*))(Il2CppBase() + 0x2496DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LightAttenVolume*, float))(Il2CppBase() + 0x2496DE8))(this, P0);
	}

};

}
