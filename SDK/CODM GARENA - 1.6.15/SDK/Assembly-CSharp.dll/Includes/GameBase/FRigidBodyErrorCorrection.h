#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FRigidBodyErrorCorrection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FRigidBodyErrorCorrection"));
	}

	template <typename T = float> T& LinearDeltaThresholdSq() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& LinearInterpAlpha() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& LinearRecipFixTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& AngularDeltaThreshold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& AngularInterpAlpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AngularRecipFixTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BodySpeedThresholdSq() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
