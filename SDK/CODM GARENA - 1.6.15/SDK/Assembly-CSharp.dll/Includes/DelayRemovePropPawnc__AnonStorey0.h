#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayRemovePropPawncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayRemovePropPawn>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(DelayRemovePropPawncAnonStorey0*))(Il2CppBase() + 0x2DC19D4))(this);
	}

};

}
