#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVEEndlessGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVEEndlessGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVEEndlessGameBuilder*))(Il2CppBase() + 0x4625774))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVEEndlessGameBuilder*))(Il2CppBase() + 0x462577C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVEEndlessGameBuilder*))(Il2CppBase() + 0x4625838))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVEEndlessGameBuilder*))(Il2CppBase() + 0x46258F4))(this);
	}

};

}
