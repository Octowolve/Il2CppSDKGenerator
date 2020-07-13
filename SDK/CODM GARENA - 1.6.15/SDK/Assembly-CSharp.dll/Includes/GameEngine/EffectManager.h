#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EffectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EffectManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T SpawnEffect(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float duration, void* cb, uintptr_t pri) {
		return ((T (*)(void *, int32_t, Il2CppVector3, Il2CppQuaternion, float, void*, uintptr_t))(Il2CppBase() + 0x1E7EE78))(0, assetID, pos, rot, duration, cb, pri);
	}

};

}
