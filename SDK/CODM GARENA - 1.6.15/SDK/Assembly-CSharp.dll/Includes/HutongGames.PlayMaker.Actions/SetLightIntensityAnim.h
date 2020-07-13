#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightIntensityAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightIntensityAnim"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fromIntensity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& toIntensity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mCurIntensity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mIsIncrease() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightIntensityAnim*))(Il2CppBase() + 0x502782C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightIntensityAnim*))(Il2CppBase() + 0x5027884))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetLightIntensityAnim*))(Il2CppBase() + 0x50278F4))(this);
	}
	template <typename T = void> T DoSetLightIntensity(float intensity) {
		return ((T (*)(SetLightIntensityAnim*, float))(Il2CppBase() + 0x50279E4))(this, intensity);
	}

};

}
