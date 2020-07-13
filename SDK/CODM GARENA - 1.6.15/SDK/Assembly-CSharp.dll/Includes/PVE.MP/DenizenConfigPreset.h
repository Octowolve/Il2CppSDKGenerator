#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DenizenConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DenizenConfigPreset"));
	}

	template <typename T = float> T& ctrlZombieAddDamage() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& ctrlZombieAddSpeed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& ctrlZombieAddHealth() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& ctrlZombieTriggerRange() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& faceGrabTriggerRange() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& faceGrabInterval() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& jumpAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& jumpDestOffset() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& releaseTargetAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& attachBoneOffsetZombie() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppQuaternion> T& attachBoneRotationZombie() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& attachBoneNameZombie() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& attachBoneOffset3P() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppQuaternion> T& attachBoneRotation3P() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& attachBoneName3P() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& attachBoneOffset1P() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppVector3> T& attachBoneOffsetOrigMesh1P() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppQuaternion> T& attachBoneRotationOrigMesh1P() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppVector3> T& attachBoneOffsetOrigMesh1PDettach() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& grabArmPrefab() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& JumpUpAnim() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& JumpDownAnim() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& prepareMoveDuration() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& controlZombieProbability() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& faceGrabProbability() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(DenizenConfigPreset*))(Il2CppBase() + 0x45FE734))(this);
	}
	template <typename T = float> T get_releaseTargetAnimLen() {
		return ((T (*)(DenizenConfigPreset*))(Il2CppBase() + 0x45FE744))(this);
	}
	template <typename T = float> T get_jumpUpDuration() {
		return ((T (*)(DenizenConfigPreset*))(Il2CppBase() + 0x45FE754))(this);
	}
	template <typename T = float> T get_jumpDownDuration() {
		return ((T (*)(DenizenConfigPreset*))(Il2CppBase() + 0x45FE784))(this);
	}
	template <typename T = float> T get_climbDuration() {
		return ((T (*)(DenizenConfigPreset*))(Il2CppBase() + 0x45FE7B4))(this);
	}

};

}
