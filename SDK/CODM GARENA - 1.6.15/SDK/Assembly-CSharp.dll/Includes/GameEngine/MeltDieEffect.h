#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MeltDieEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MeltDieEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_MeltMats() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsSpreading() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_StartValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_EndValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& MELT_RADIUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SPREADING_INTERVAL_RATIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LERP_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COLOR_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& POS_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferMatParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T EndEffect() {
		return ((T (*)(MeltDieEffect*))(Il2CppBase() + 0x2705D58))(this);
	}
	template <typename T = void> T UpdateMaterial(float percent) {
		return ((T (*)(MeltDieEffect*, float))(Il2CppBase() + 0x2705E64))(this, percent);
	}
	template <typename T = void> T TransferMatParameter(uintptr_t renderer, Il2CppArray<uintptr_t>* orignalMats, Il2CppArray<uintptr_t>* nowMats, uintptr_t templateMat, uintptr_t pawn, bool inheritTexture) {
		return ((T (*)(MeltDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2706248))(this, renderer, orignalMats, nowMats, templateMat, pawn, inheritTexture);
	}
	template <typename T = void> T xLuaBaseProxy_EndEffect() {
		return ((T (*)(MeltDieEffect*))(Il2CppBase() + 0x27066B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMaterial(float P0) {
		return ((T (*)(MeltDieEffect*, float))(Il2CppBase() + 0x27066B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TransferMatParameter(uintptr_t P0, Il2CppArray<uintptr_t>* P1, Il2CppArray<uintptr_t>* P2, uintptr_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(MeltDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27066C0))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
