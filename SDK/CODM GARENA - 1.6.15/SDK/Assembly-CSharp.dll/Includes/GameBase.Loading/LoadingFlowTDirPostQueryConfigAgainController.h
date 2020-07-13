#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowTDirPostQueryConfigAgainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowTDirPostQueryConfigAgainController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstQueryConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T FirstQueryConfig() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigAgainController*))(Il2CppBase() + 0x2E658C0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_FirstQueryConfig() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigAgainController*))(Il2CppBase() + 0x2E65960))(this);
	}

};

}
