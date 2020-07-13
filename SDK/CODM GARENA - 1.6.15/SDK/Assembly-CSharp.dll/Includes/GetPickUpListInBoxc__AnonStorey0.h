#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPickUpListInBoxcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPickUpListInBox>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& boxActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t droppedPickUp) {
		return ((T (*)(GetPickUpListInBoxcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1904C60))(this, droppedPickUp);
	}

};

}
