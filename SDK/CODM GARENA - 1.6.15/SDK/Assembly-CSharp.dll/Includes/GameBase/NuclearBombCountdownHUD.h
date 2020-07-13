#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NuclearBombCountdownHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NuclearBombCountdownHUD"));
	}

	template <typename T = uintptr_t> T& CountdownLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_Countdown() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_BeginCountdown() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_LastTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCountdownLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetCountdownLabel(float countdown) {
		return ((T (*)(NuclearBombCountdownHUD*, float))(Il2CppBase() + 0x19DD8E8))(this, countdown);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NuclearBombCountdownHUD*))(Il2CppBase() + 0x19DDAC0))(this);
	}
	template <typename T = void> T UpdateCountdown() {
		return ((T (*)(NuclearBombCountdownHUD*))(Il2CppBase() + 0x19DDBB8))(this);
	}
	template <typename T = void> T SetData(float countdown) {
		return ((T (*)(NuclearBombCountdownHUD*, float))(Il2CppBase() + 0x19DDD0C))(this, countdown);
	}

};

}
