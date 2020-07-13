#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVEClassicalGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVEClassicalGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVEClassicalGameBuilder*))(Il2CppBase() + 0x4625498))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVEClassicalGameBuilder*))(Il2CppBase() + 0x46254A0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVEClassicalGameBuilder*))(Il2CppBase() + 0x462555C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVEClassicalGameBuilder*))(Il2CppBase() + 0x4625618))(this);
	}

};

}
