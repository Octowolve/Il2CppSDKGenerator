#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class HardpointGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "HardpointGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x40316CC))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x4031744))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x40317BC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x4031834))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x403183C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x40318F8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x40319B4))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x4031A70))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(HardpointGameBuilder*))(Il2CppBase() + 0x4031AE8))(this);
	}

};

}
