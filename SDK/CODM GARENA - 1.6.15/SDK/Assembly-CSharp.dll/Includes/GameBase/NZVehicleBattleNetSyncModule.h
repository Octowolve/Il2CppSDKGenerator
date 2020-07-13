#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleBattleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleBattleNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_RealOwner() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(NZVehicleBattleNetSyncModule*))(Il2CppBase() + 0x19E1440))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NZVehicleBattleNetSyncModule*))(Il2CppBase() + 0x19E1544))(this);
	}

};

}
