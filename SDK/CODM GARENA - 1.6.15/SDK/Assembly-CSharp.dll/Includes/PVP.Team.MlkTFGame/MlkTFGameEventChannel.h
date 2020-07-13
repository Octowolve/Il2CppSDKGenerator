#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFGameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_MlkGameInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMlkSwithGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MlkTFGameEventChannel*))(Il2CppBase() + 0x348B0D8))(this);
	}
	template <typename T = void> T OnMlkSwithGun(uintptr_t msg) {
		return ((T (*)(MlkTFGameEventChannel*, uintptr_t))(Il2CppBase() + 0x348B284))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MlkTFGameEventChannel*))(Il2CppBase() + 0x348BB94))(this);
	}

};

}
