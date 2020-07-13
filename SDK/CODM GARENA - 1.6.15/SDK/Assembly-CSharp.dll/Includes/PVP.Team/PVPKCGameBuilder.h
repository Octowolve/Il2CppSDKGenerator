#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class PVPKCGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "PVPKCGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(PVPKCGameBuilder*))(Il2CppBase() + 0x34BCA4C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PVPKCGameBuilder*))(Il2CppBase() + 0x34BCA54))(this);
	}

};

}
