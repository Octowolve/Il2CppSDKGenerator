#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HelicopterPawnSPHellstrom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HelicopterPawn_SP_Hellstrom"));
	}

	template <typename T = int32_t> T& DamageSmokeEffectID() {
		return *(T*)((uintptr_t)this + 0xC1C);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xC20);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect2() {
		return *(T*)((uintptr_t)this + 0xC24);
	}
	template <typename T = Il2CppVector3> T& LocalPos_Offset() {
		return *(T*)((uintptr_t)this + 0xC28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ShowSmokeEffect() {
		return ((T (*)(HelicopterPawnSPHellstrom*))(Il2CppBase() + 0x1EE8488))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(HelicopterPawnSPHellstrom*, bool, uintptr_t))(Il2CppBase() + 0x1EE8904))(this, isHeadShot, damageType);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSmokeEffect() {
		return ((T (*)(HelicopterPawnSPHellstrom*))(Il2CppBase() + 0x1EE8ABC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(HelicopterPawnSPHellstrom*, bool, uintptr_t))(Il2CppBase() + 0x1EE8AC0))(this, P0, P1);
	}

};

}
