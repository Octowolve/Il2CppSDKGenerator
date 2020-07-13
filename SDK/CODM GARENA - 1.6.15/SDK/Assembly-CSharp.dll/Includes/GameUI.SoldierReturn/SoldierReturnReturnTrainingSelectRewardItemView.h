#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingSelectRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingSelectRewardItemView"));
	}

	template <typename T = uintptr_t> T& qualitySprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& itemUI() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& selected() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T get_width() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CB5350))(0);
	}
	template <typename T = int32_t> static T get_height() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CB5358))(0);
	}

};

}
