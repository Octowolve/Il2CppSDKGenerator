#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGameEventChannel"));
	}

	template <typename T = uintptr_t> T& mLocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(CTFGameEventChannel*))(Il2CppBase() + 0x2B27E04))(this);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(CTFGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2B27EB4))(this, Msg);
	}
	template <typename T = void> T OnEndMatch(uintptr_t Msg) {
		return ((T (*)(CTFGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2B28560))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(CTFGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2B28B08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch(uintptr_t P0) {
		return ((T (*)(CTFGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2B28B0C))(this, P0);
	}

};

}
