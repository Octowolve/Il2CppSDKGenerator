#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateSkillProjectile3PcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateSkillProjectile_3P>c__AnonStorey1"));
	}

	template <typename T = Il2CppVector3> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ownerPlayerID() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t _) {
		return ((T (*)(CreateSkillProjectile3PcAnonStorey1*, int32_t, uintptr_t))(Il2CppBase() + 0x51E7578))(this, id, _);
	}

};

}
