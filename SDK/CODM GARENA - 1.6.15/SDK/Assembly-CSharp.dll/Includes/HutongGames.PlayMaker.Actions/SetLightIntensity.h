#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightIntensity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightIntensity"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightIntensity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightIntensity*))(Il2CppBase() + 0x5027630))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightIntensity*))(Il2CppBase() + 0x5027660))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetLightIntensity*))(Il2CppBase() + 0x502779C))(this);
	}
	template <typename T = void> T DoSetLightIntensity() {
		return ((T (*)(SetLightIntensity*))(Il2CppBase() + 0x502768C))(this);
	}

};

}
