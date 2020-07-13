#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class MonsterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "MonsterData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdatePosition(float deltaTime) {
		return ((T (*)(MonsterData*, float))(Il2CppBase() + 0x3D57578))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePosition(float P0) {
		return ((T (*)(MonsterData*, float))(Il2CppBase() + 0x3D576EC))(this, P0);
	}

};

}
