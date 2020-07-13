#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRRunEscapeHUDOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRRunEscapeHUD_OB"));
	}

	template <typename T = uintptr_t> T& GameTimeLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CircleCountLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Tick() {
		return ((T (*)(BRRunEscapeHUDOB*))(Il2CppBase() + 0x1B26D14))(this);
	}
	template <typename T = void> T SetGameTimeLabel(float secondCount) {
		return ((T (*)(BRRunEscapeHUDOB*, float))(Il2CppBase() + 0x1B26EB8))(this, secondCount);
	}
	template <typename T = void> T xLuaBaseProxy_Tick() {
		return ((T (*)(BRRunEscapeHUDOB*))(Il2CppBase() + 0x1B27080))(this);
	}

};

}
