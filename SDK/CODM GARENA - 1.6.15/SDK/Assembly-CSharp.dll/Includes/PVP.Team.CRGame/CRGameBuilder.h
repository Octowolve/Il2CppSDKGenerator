#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CRGame {

class CRGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CRGame", "CRGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(CRGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B244F0))(this, InActorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(CRGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B24648))(this, P0);
	}

};

}
