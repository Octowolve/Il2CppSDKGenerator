#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIEffectComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ShowEffect(uintptr_t effectAssetId, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale, float duration) {
		return ((T (*)(PVEAIEffectComponent*, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, float))(Il2CppBase() + 0x4378740))(this, effectAssetId, pos, rot, scale, duration);
	}
	template <typename T = void> T SetEffectProperty(uintptr_t effect, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale) {
		return ((T (*)(PVEAIEffectComponent*, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x4378964))(this, effect, pos, rot, scale);
	}

};

}
