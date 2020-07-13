#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateSkillProjectilecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateSkillProjectile>c__AnonStorey0"));
	}

	template <typename T = Il2CppVector3> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t _) {
		return ((T (*)(CreateSkillProjectilecAnonStorey0*, int32_t, uintptr_t))(Il2CppBase() + 0x51E7B94))(this, id, _);
	}

};

}
