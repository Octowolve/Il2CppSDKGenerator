#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVETutorialGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVETutorialGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVETutorialGameBuilder*))(Il2CppBase() + 0x4628FE0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVETutorialGameBuilder*))(Il2CppBase() + 0x4628FE8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVETutorialGameBuilder*))(Il2CppBase() + 0x46290A4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVETutorialGameBuilder*))(Il2CppBase() + 0x4629160))(this);
	}

};

}
