#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(TrainingGameBuilder*))(Il2CppBase() + 0x3D8D160))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(TrainingGameBuilder*))(Il2CppBase() + 0x3D8D168))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(TrainingGameBuilder*))(Il2CppBase() + 0x3D8D224))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(TrainingGameBuilder*))(Il2CppBase() + 0x3D8D2E0))(this);
	}

};

}
