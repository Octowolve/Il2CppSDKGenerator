#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorGoliathBoxKilled
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_GoliathBoxKilled"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorGoliathBoxKilled*))(Il2CppBase() + 0x3457C1C))(this);
	}

};

}
