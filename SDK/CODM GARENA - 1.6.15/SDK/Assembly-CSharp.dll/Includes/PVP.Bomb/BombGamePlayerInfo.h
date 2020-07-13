#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGamePlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGamePlayerInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Bomb_BombGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Bomb_BombGamePlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4080AD0))(0, src, dest);
	}
	template <typename T = unsigned char> T GetSide() {
		return ((T (*)(BombGamePlayerInfo*))(Il2CppBase() + 0x4080F2C))(this);
	}
	template <typename T = unsigned char> T xLuaBaseProxy_GetSide() {
		return ((T (*)(BombGamePlayerInfo*))(Il2CppBase() + 0x408108C))(this);
	}

};

}
