#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LimbSoverBone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LimbSoverBone"));
	}

	template <typename T = uintptr_t> T& BoneTransform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& sqrMag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& targetToLocalSpace() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& defaultLocalBendNormal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& LastLocalPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& LastLocalRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& fixedRotation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordFixedRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFixedRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordLocalPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBendNormalFromCurrentRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RecordFixedRotation(Il2CppVector3 position) {
		return ((T (*)(LimbSoverBone*, Il2CppVector3))(Il2CppBase() + 0x2E2E8B0))(this, position);
	}
	template <typename T = void> T ResetFixedRotation() {
		return ((T (*)(LimbSoverBone*))(Il2CppBase() + 0x2E2EA18))(this);
	}
	template <typename T = void> T RecordLocalPose() {
		return ((T (*)(LimbSoverBone*))(Il2CppBase() + 0x2E2EAF0))(this);
	}
	template <typename T = void> T Initiate(Il2CppVector3 childPosition, Il2CppVector3 bendNormal) {
		return ((T (*)(LimbSoverBone*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2E2EBF8))(this, childPosition, bendNormal);
	}
	template <typename T = Il2CppQuaternion> T GetRotation(Il2CppVector3 direction, Il2CppVector3 bendNormal) {
		return ((T (*)(LimbSoverBone*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2E2EE54))(this, direction, bendNormal);
	}
	template <typename T = Il2CppVector3> T GetBendNormalFromCurrentRotation() {
		return ((T (*)(LimbSoverBone*))(Il2CppBase() + 0x2E2EF98))(this);
	}

};

}
