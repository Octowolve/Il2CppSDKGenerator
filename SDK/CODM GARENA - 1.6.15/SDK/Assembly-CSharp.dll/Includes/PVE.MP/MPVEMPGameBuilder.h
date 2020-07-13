#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVEMPGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVEMPGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVEMPGameBuilder*))(Il2CppBase() + 0x462874C))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVEMPGameBuilder*))(Il2CppBase() + 0x4628754))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVEMPGameBuilder*))(Il2CppBase() + 0x4628810))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVEMPGameBuilder*))(Il2CppBase() + 0x46288CC))(this);
	}

};

}
