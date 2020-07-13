#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PrcGame {

class PrcGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PrcGame", "PrcGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(PrcGameBuilder*))(Il2CppBase() + 0x348EACC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PrcGameBuilder*))(Il2CppBase() + 0x348EAD4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(PrcGameBuilder*))(Il2CppBase() + 0x348EB90))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PrcGameBuilder*))(Il2CppBase() + 0x348EC4C))(this);
	}

};

}
