#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationProperties"));
	}

	template <typename T = uintptr_t> T& animationOrder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& overlap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& randomDurations() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& randomness() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& offsetRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& rot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& alpha() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
