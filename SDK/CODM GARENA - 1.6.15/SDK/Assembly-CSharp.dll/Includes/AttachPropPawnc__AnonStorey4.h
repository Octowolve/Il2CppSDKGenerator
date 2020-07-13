#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachPropPawncAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AttachPropPawn>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& propPawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& uLauncherActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(AttachPropPawncAnonStorey4*))(Il2CppBase() + 0x1B0B99C))(this);
	}

};

}
