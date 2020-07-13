#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GFAreaState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GFAreaState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update(float delaTime) {
		return ((T (*)(GFAreaState*, float))(Il2CppBase() + 0x401D4F4))(this, delaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Update(float P0) {
		return ((T (*)(GFAreaState*, float))(Il2CppBase() + 0x401D594))(this, P0);
	}

};

}
