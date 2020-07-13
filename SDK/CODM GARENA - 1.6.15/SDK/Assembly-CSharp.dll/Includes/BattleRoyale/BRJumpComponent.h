#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRJumpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRJumpComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Land() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Land(float landTime) {
		return ((T (*)(BRJumpComponent*, float))(Il2CppBase() + 0x1948BAC))(this, landTime);
	}
	template <typename T = void> T xLuaBaseProxy_Land(float P0) {
		return ((T (*)(BRJumpComponent*, float))(Il2CppBase() + 0x1948DD8))(this, P0);
	}

};

}
