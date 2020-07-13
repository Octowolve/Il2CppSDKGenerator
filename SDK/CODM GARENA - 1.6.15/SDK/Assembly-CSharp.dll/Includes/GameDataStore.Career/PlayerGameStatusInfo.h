#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class PlayerGameStatusInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "PlayerGameStatusInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ModeCareerDataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCareerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCareerModeByGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InitData(uintptr_t gameStatInfo) {
		return ((T (*)(PlayerGameStatusInfo*, uintptr_t))(Il2CppBase() + 0x4A05F10))(this, gameStatInfo);
	}
	template <typename T = uintptr_t> T GetModeCareerData(uintptr_t mode) {
		return ((T (*)(PlayerGameStatusInfo*, uintptr_t))(Il2CppBase() + 0x4A06ABC))(this, mode);
	}
	template <typename T = uintptr_t> T GetCareerModeByGameMode(uintptr_t gameMode) {
		return ((T (*)(PlayerGameStatusInfo*, uintptr_t))(Il2CppBase() + 0x4A08D04))(this, gameMode);
	}

};

}
