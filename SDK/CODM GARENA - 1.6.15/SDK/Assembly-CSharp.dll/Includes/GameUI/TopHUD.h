#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TopHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TopHUD"));
	}

	template <typename T = uintptr_t> T& TimeSharkGo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_ShowTimeShark() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& TIME_SHAKE_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeShark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CheckTimeShark(float time) {
		return ((T (*)(TopHUD*, float))(Il2CppBase() + 0x29BC1F4))(this, time);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TopHUD*))(Il2CppBase() + 0x2999124))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(TopHUD*, uintptr_t))(Il2CppBase() + 0x29BC3AC))(this, result);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TopHUD*))(Il2CppBase() + 0x29BC4DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(TopHUD*, uintptr_t))(Il2CppBase() + 0x29BC4E4))(this, P0);
	}

};

}
