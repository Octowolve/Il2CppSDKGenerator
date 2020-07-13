#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CampShowAnimHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CampShowAnimHUD"));
	}

	template <typename T = uintptr_t> T& CampSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CampLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ModeSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ModeNameLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ModeNameBG() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bCurShow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCampShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T get_AnimDuration() {
		return ((T (*)(CampShowAnimHUD*))(Il2CppBase() + 0x3DDAEDC))(this);
	}
	template <typename T = void> T ShowCamp(Il2CppString* CampSpriteName, Il2CppString* ModeSpriteName, Il2CppString* ModeName, Il2CppString* CampText) {
		return ((T (*)(CampShowAnimHUD*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3DDAEE8))(this, CampSpriteName, ModeSpriteName, ModeName, CampText);
	}
	template <typename T = void> T ResetCampShow() {
		return ((T (*)(CampShowAnimHUD*))(Il2CppBase() + 0x3DDB244))(this);
	}

};

}
