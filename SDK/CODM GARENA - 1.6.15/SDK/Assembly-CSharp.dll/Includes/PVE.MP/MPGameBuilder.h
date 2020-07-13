#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x460696C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x46069E4))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x46069EC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x4606AA8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x4606B64))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(MPGameBuilder*))(Il2CppBase() + 0x4606C20))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MPGameBuilder*, uintptr_t))(Il2CppBase() + 0x4606C28))(this, InActorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(MPGameBuilder*, uintptr_t))(Il2CppBase() + 0x4606F1C))(this, P0);
	}

};

}
