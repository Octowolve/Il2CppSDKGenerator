#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorHash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorHash"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& BRTWAnimHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T ToHash(uintptr_t define) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22B598C))(0, define);
	}

};

}
