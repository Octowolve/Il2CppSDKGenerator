#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TextureAtlas {

class TextureAtlasingUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TextureAtlas", "TextureAtlasingUpdater"));
	}

	template <typename T = float> T& uvMetricMinValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& uvMetricRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TextureAtlasingUpdater*))(Il2CppBase() + 0x3435B30))(this);
	}

};

}
