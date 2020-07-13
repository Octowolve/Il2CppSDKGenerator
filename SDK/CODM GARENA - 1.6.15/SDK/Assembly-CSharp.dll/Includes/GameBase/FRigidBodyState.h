#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FRigidBodyState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FRigidBodyState"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& Quaternion() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& LinVel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& AngVel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& TimeStamp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Flags() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T IsSameState(uintptr_t Other) {
		return ((T (*)(FRigidBodyState*, uintptr_t))(Il2CppBase() + 0x31E9D30))(this, Other);
	}

};

}
