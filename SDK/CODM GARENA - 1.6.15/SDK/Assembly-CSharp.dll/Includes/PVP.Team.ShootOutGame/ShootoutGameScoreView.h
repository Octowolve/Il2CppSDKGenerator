#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootoutGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootoutGameScoreView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_warningInfo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(ShootoutGameScoreView*))(Il2CppBase() + 0x34C34E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetCustomTimeWarningInfo() {
		return ((T (*)(ShootoutGameScoreView*))(Il2CppBase() + 0x34C3588))(this);
	}

};

}
