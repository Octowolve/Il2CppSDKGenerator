#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BlackHaloDieEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BlackHaloDieEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_HaloMats() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_StartValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_EndValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_SocketName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> static T& LERP_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HOLE_POS_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMatEffectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferMatParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitMatEffectType(uintptr_t type) {
		return ((T (*)(BlackHaloDieEffect*, uintptr_t))(Il2CppBase() + 0x3611DC0))(this, type);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(BlackHaloDieEffect*))(Il2CppBase() + 0x3611F14))(this);
	}
	template <typename T = void> T UpdateMaterial(float percent) {
		return ((T (*)(BlackHaloDieEffect*, float))(Il2CppBase() + 0x361201C))(this, percent);
	}
	template <typename T = void> T TransferMatParameter(uintptr_t renderer, Il2CppArray<uintptr_t>* orignalMats, Il2CppArray<uintptr_t>* nowMats, uintptr_t templateMat, uintptr_t pawn, bool inheritTexture) {
		return ((T (*)(BlackHaloDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3612260))(this, renderer, orignalMats, nowMats, templateMat, pawn, inheritTexture);
	}
	template <typename T = void> T xLuaBaseProxy_InitMatEffectType(uintptr_t P0) {
		return ((T (*)(BlackHaloDieEffect*, uintptr_t))(Il2CppBase() + 0x3612A78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndEffect() {
		return ((T (*)(BlackHaloDieEffect*))(Il2CppBase() + 0x3612A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMaterial(float P0) {
		return ((T (*)(BlackHaloDieEffect*, float))(Il2CppBase() + 0x3612A80))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TransferMatParameter(uintptr_t P0, Il2CppArray<uintptr_t>* P1, Il2CppArray<uintptr_t>* P2, uintptr_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(BlackHaloDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3612A84))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
