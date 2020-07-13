#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPhysicsVolumecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetPhysicsVolume>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(SetPhysicsVolumecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x16A1634))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t e) {
		return ((T (*)(SetPhysicsVolumecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x16A16E8))(this, e);
	}

};

}
