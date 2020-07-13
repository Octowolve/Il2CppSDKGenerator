#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class PVPDOMGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "PVPDOMGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC2C8))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC340))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC3B8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC430))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC438))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC4F4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC5B0))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC66C))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(PVPDOMGameBuilder*))(Il2CppBase() + 0x34BC6E4))(this);
	}

};

}
