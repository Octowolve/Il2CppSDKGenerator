#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRGameScoreInfoHUDOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRGameScoreInfoHUD_OB"));
	}

	template <typename T = uintptr_t> T& SurviveTeamLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TeamKillNum() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TeamID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TeamColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TeamObj() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRGameScoreInfoHUDOB*, float))(Il2CppBase() + 0x2D908C4))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGameScoreInfoHUDOB*, float))(Il2CppBase() + 0x2D90E8C))(this, P0);
	}

};

}
