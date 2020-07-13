#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetViewcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetView>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetViewcAnonStorey1*))(Il2CppBase() + 0x34EE3D8))(this);
	}

};

}
