#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombSignboardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombSignboardHUD"));
	}

	template <typename T = uintptr_t> T& SignboardA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SignboardB() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SignboardBomb() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_GameInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVolumeSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BombSignboardHUD*))(Il2CppBase() + 0x2D80FDC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BombSignboardHUD*))(Il2CppBase() + 0x2D80FE4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BombSignboardHUD*))(Il2CppBase() + 0x2D80FF0))(this);
	}
	template <typename T = uintptr_t> T GetVolumeSignboard(uintptr_t pointType) {
		return ((T (*)(BombSignboardHUD*, uintptr_t))(Il2CppBase() + 0x2D81418))(this, pointType);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BombSignboardHUD*))(Il2CppBase() + 0x2D81544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BombSignboardHUD*))(Il2CppBase() + 0x2D81B84))(this);
	}

};

}
