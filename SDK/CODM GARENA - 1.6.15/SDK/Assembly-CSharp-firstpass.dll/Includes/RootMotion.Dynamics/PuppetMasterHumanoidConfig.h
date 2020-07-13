#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PuppetMasterHumanoidConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PuppetMasterHumanoidConfig"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& stateSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& blendTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& fixTargetTransforms() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& solverIterationCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& visualizeTargetPose() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mappingWeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& pinWeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& muscleWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& muscleSpring() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& muscleDamper() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& pinPow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& pinDistanceFalloff() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& updateJointAnchors() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& supportTranslationAnimation() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& angularLimits() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& internalCollisions() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& muscles() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T ApplyTo(uintptr_t p) {
		return ((T (*)(PuppetMasterHumanoidConfig*, uintptr_t))(Il2CppBase() + 0x38C1C58))(this, p);
	}
	template <typename T = uintptr_t> T GetMuscle(uintptr_t boneId, uintptr_t animator, uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterHumanoidConfig*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38D02F8))(this, boneId, animator, puppetMaster);
	}

};

}
