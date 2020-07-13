#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HunterKillerActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HunterKillerActor"));
	}

	template <typename T = uintptr_t> T& m_EMPEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(HunterKillerActor*, uintptr_t))(Il2CppBase() + 0x476ADE0))(this, inData);
	}
	template <typename T = void> T BeginEMPEffect(float duration, uintptr_t range) {
		return ((T (*)(HunterKillerActor*, float, uintptr_t))(Il2CppBase() + 0x476AEDC))(this, duration, range);
	}
	template <typename T = void> T Deactive() {
		return ((T (*)(HunterKillerActor*))(Il2CppBase() + 0x476B0C4))(this);
	}
	template <typename T = void> T EndEMPEffect() {
		return ((T (*)(HunterKillerActor*))(Il2CppBase() + 0x476B0F0))(this);
	}

};

}
