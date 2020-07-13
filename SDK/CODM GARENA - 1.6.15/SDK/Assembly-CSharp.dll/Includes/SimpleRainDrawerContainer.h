#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleRainDrawerContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleRainDrawerContainer"));
	}

	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& startSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& startPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TimeElapsed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lifetime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
