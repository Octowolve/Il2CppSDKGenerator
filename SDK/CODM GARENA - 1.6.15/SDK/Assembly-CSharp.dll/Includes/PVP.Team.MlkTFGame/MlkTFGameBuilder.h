#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add3PCommonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MlkTFGameBuilder*))(Il2CppBase() + 0x348AC3C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MlkTFGameBuilder*))(Il2CppBase() + 0x348AC44))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MlkTFGameBuilder*))(Il2CppBase() + 0x348AD00))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MlkTFGameBuilder*))(Il2CppBase() + 0x348ADBC))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(MlkTFGameBuilder*))(Il2CppBase() + 0x348AE78))(this);
	}
	template <typename T = void> T Add3PCommonComponent(uintptr_t actorInfo) {
		return ((T (*)(MlkTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x348AF34))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Add3PCommonComponent(uintptr_t P0) {
		return ((T (*)(MlkTFGameBuilder*, uintptr_t))(Il2CppBase() + 0x348B020))(this, P0);
	}

};

}
