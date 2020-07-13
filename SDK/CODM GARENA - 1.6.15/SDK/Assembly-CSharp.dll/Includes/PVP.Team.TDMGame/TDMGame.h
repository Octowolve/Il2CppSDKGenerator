#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TDMGame {

class TDMGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TDMGame", "TDMGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T StartMatch() {
		return ((T (*)(TDMGame*))(Il2CppBase() + 0x3D89228))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(TDMGame*))(Il2CppBase() + 0x3D89360))(this);
	}

};

}
