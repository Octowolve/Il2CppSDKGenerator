#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ForEachAllPickupEntitycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ForEachAllPickupEntity>c__AnonStorey0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t e) {
		return ((T (*)(ForEachAllPickupEntitycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x18C708C))(this, e);
	}
	template <typename T = void> T m__1(uintptr_t e) {
		return ((T (*)(ForEachAllPickupEntitycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x18C712C))(this, e);
	}

};

}
