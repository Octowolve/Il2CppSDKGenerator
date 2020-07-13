#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVESPGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVESPGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVESPGameBuilder*))(Il2CppBase() + 0x4628D04))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVESPGameBuilder*))(Il2CppBase() + 0x4628D0C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVESPGameBuilder*))(Il2CppBase() + 0x4628DC8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVESPGameBuilder*))(Il2CppBase() + 0x4628E84))(this);
	}

};

}
