#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSWSMoveSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSWSMoveSpawnPoint"));
	}

	template <typename T = uintptr_t> T& Path() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializePawnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(AIPawnSWSMoveSpawnPoint*))(Il2CppBase() + 0x49B1450))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InitializePawnData() {
		return ((T (*)(AIPawnSWSMoveSpawnPoint*))(Il2CppBase() + 0x49B1560))(this);
	}

};

}
