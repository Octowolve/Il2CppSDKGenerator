#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationEndEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationEndEvent"));
	}

	template <typename T = Il2CppString*> T& AnimationName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& AnimationTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_AnimID() {
		return ((T (*)(AnimationEndEvent*))(Il2CppBase() + 0x2B4AFA0))(this);
	}

};

}
