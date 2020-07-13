#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadVideoClipAsynccAnonStoreyE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadVideoClipAsync>c__AnonStoreyE"));
	}

	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& videoPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t vc) {
		return ((T (*)(LoadVideoClipAsynccAnonStoreyE*, uintptr_t))(Il2CppBase() + 0x2B782A0))(this, vc);
	}

};

}
