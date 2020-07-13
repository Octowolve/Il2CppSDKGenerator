#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightSpotAngle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightSpotAngle"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightSpotAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightSpotAngle*))(Il2CppBase() + 0x5027D58))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightSpotAngle*))(Il2CppBase() + 0x5027D8C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetLightSpotAngle*))(Il2CppBase() + 0x5027EC8))(this);
	}
	template <typename T = void> T DoSetLightRange() {
		return ((T (*)(SetLightSpotAngle*))(Il2CppBase() + 0x5027DB8))(this);
	}

};

}
