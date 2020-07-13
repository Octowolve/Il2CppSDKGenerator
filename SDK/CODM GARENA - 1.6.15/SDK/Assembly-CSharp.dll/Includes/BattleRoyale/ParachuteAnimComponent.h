#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ParachuteAnimComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ParachuteAnimComponent"));
	}

	template <typename T = uintptr_t> T& LTRotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RTRotation() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& FRotation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BRotation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnimValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(ParachuteAnimComponent*, Il2CppVector2, float))(Il2CppBase() + 0x3D5BD08))(this, movementInput, deltaTime);
	}
	template <typename T = void> T UpdateSkydivingAnimValue(Il2CppVector2 animValue) {
		return ((T (*)(ParachuteAnimComponent*, Il2CppVector2))(Il2CppBase() + 0x3D5C130))(this, animValue);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSkydivingAnim(Il2CppVector2 P0, float P1) {
		return ((T (*)(ParachuteAnimComponent*, Il2CppVector2, float))(Il2CppBase() + 0x3D5C4D4))(this, P0, P1);
	}

};

}
