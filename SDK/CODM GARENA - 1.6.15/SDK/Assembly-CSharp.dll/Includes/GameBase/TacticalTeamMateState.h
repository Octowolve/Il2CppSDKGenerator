#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTeamMateState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTeamMateState"));
	}

	template <typename T = uint32_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& seatID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isOffline() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& offLinePos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
