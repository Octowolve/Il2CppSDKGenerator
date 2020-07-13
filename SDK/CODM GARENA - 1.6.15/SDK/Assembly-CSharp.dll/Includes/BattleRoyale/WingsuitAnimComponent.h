#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class WingsuitAnimComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "WingsuitAnimComponent"));
	}

	template <typename T = uintptr_t> T& LTPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RTPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& FPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BPosition() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(WingsuitAnimComponent*, Il2CppVector2, float))(Il2CppBase() + 0x35B8380))(this, movementInput, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSkydivingAnim(Il2CppVector2 P0, float P1) {
		return ((T (*)(WingsuitAnimComponent*, Il2CppVector2, float))(Il2CppBase() + 0x35B8710))(this, P0, P1);
	}

};

}
