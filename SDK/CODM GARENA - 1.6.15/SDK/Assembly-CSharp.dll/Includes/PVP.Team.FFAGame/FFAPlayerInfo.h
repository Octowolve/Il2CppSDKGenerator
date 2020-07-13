#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAPlayerInfo"));
	}

	template <typename T = int32_t> T& m_KillScore() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Team_FFAGame_FFAPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Team_FFAGame_FFAPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x401C7E0))(0, src, dest);
	}
	template <typename T = int32_t> T get_KillScore() {
		return ((T (*)(FFAPlayerInfo*))(Il2CppBase() + 0x4019110))(this);
	}
	template <typename T = void> T set_KillScore(int32_t value) {
		return ((T (*)(FFAPlayerInfo*, int32_t))(Il2CppBase() + 0x40177E0))(this, value);
	}

};

}
