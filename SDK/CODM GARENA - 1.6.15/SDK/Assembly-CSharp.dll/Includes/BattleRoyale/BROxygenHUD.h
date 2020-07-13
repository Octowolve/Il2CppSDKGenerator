#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BROxygenHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BROxygenHUD"));
	}

	template <typename T = uintptr_t> T& OxygenSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& TickSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_CurrentOxygen() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0AA8))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0CAC))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0CB4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0CC0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0CCC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC0FA0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BROxygenHUD*, float))(Il2CppBase() + 0x1AC0FA8))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC13E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BROxygenHUD*))(Il2CppBase() + 0x1AC13F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BROxygenHUD*, float))(Il2CppBase() + 0x1AC13F8))(this, P0);
	}

};

}
