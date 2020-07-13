#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalEnemyPawnManagerMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalEnemyPawnManager_MP"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalEnemyPawnManagerMP*))(Il2CppBase() + 0x30CB610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalEnemyPawnManagerMP*))(Il2CppBase() + 0x30CB8E8))(this);
	}

};

}
