#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVERaidGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVERaidGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(MPVERaidGameBuilder*))(Il2CppBase() + 0x4628A28))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(MPVERaidGameBuilder*))(Il2CppBase() + 0x4628A30))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(MPVERaidGameBuilder*))(Il2CppBase() + 0x4628AEC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(MPVERaidGameBuilder*))(Il2CppBase() + 0x4628BA8))(this);
	}

};

}
