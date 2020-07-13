#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameModeTargetHUDPVP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameModeTargetHUD_PVP"));
	}

	template <typename T = uintptr_t> T& ModeTarget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SPGameModeTargetHUDPVP*))(Il2CppBase() + 0x3916D98))(this);
	}
	template <typename T = void> T ShowFadeIn(float showTime, Il2CppString* modeTargetInfo) {
		return ((T (*)(SPGameModeTargetHUDPVP*, float, Il2CppString*))(Il2CppBase() + 0x3916EB8))(this, showTime, modeTargetInfo);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(SPGameModeTargetHUDPVP*))(Il2CppBase() + 0x391709C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SPGameModeTargetHUDPVP*))(Il2CppBase() + 0x3917218))(this);
	}

};

}
