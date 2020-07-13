#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameProgressBar"));
	}

	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_ElapseTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_ShouldShowProgressBar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& mStartTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Countdown() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& inverseProgress() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShowProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_inverseProgress() {
		return ((T (*)(BombGameProgressBar*))(Il2CppBase() + 0x2D7CC08))(this);
	}
	template <typename T = void> T set_inverseProgress(bool value) {
		return ((T (*)(BombGameProgressBar*, bool))(Il2CppBase() + 0x2D7CC10))(this, value);
	}
	template <typename T = void> T StartProgressBar(float inTotalTime) {
		return ((T (*)(BombGameProgressBar*, float))(Il2CppBase() + 0x2D7CC18))(this, inTotalTime);
	}
	template <typename T = void> T StopShowProgressBar() {
		return ((T (*)(BombGameProgressBar*))(Il2CppBase() + 0x2D7CE70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BombGameProgressBar*))(Il2CppBase() + 0x2D7CF50))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BombGameProgressBar*))(Il2CppBase() + 0x2D7D210))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BombGameProgressBar*))(Il2CppBase() + 0x2D7D2B4))(this);
	}

};

}
