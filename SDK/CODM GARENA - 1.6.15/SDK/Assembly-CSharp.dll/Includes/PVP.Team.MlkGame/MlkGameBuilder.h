#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkGame {

class MlkGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkGame", "MlkGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MlkGameBuilder*))(Il2CppBase() + 0x4044F20))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MlkGameBuilder*))(Il2CppBase() + 0x4044F28))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MlkGameBuilder*))(Il2CppBase() + 0x4044FE4))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MlkGameBuilder*))(Il2CppBase() + 0x40450A0))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(MlkGameBuilder*))(Il2CppBase() + 0x404515C))(this);
	}

};

}
