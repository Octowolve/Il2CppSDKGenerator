#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundVisibleShowInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundVisibleShowInfo"));
	}

	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& ShoudPlayLoopAnimation() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& ShouldPlayEndAnimation() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
