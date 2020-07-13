#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class PVPFFAGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "PVPFFAGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(PVPFFAGameBuilder*))(Il2CppBase() + 0x34BC6EC))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PVPFFAGameBuilder*))(Il2CppBase() + 0x34BC6F4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PVPFFAGameBuilder*))(Il2CppBase() + 0x34BC7B0))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(PVPFFAGameBuilder*))(Il2CppBase() + 0x34BC86C))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PVPFFAGameBuilder*))(Il2CppBase() + 0x34BC928))(this);
	}

};

}
