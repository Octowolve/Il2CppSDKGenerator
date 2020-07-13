#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AStarVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AStarVolume"));
	}

	template <typename T = bool> T& Bar() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsPointInVolume(Il2CppVector3 points) {
		return ((T (*)(AStarVolume*, Il2CppVector3))(Il2CppBase() + 0x35CC150))(this, points);
	}

};

}
