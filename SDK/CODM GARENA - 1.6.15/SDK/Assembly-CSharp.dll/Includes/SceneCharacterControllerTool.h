#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneCharacterControllerTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneCharacterControllerTool"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnControllerColliderHit(uintptr_t hit) {
		return ((T (*)(SceneCharacterControllerTool*, uintptr_t))(Il2CppBase() + 0x3BF9118))(this, hit);
	}

};

}
