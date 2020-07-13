#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_VTOL"));
	}

	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(CrossHairVTOL*, bool, bool))(Il2CppBase() + 0x40D111C))(this, value, enableOptimize);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(CrossHairVTOL*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40D1450))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(CrossHairVTOL*, uintptr_t))(Il2CppBase() + 0x40D1628))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(CrossHairVTOL*, bool, bool))(Il2CppBase() + 0x40D1764))(this, P0, P1);
	}

};

}
