#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseMatEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseMatEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& EnableRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& BackupMats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EffectEnable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Percent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_UpdateMaterialCoroutine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_EnableMat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMatEffectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferMatParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T InitPawn(uintptr_t pawn) {
		return ((T (*)(BaseMatEffect*, uintptr_t))(Il2CppBase() + 0x360CFFC))(this, pawn);
	}
	template <typename T = void> T InitMatEffectType(uintptr_t type) {
		return ((T (*)(BaseMatEffect*, uintptr_t))(Il2CppBase() + 0x360D0A4))(this, type);
	}
	template <typename T = void> T SetRenderers(Il2CppList<uintptr_t>* allrds) {
		return ((T (*)(BaseMatEffect*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x360D144))(this, allrds);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FilterRenderer(Il2CppList<uintptr_t>* allRenderers) {
		return ((T (*)(BaseMatEffect*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x360D438))(this, allRenderers);
	}
	template <typename T = void> T TransferMatParameter(uintptr_t renderer, Il2CppArray<uintptr_t>* orignalMats, Il2CppArray<uintptr_t>* nowMats, uintptr_t templateMat, uintptr_t pawn, bool inheritTexture) {
		return ((T (*)(BaseMatEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x360D844))(this, renderer, orignalMats, nowMats, templateMat, pawn, inheritTexture);
	}
	template <typename T = void> T StartEffect(Il2CppList<uintptr_t>* allRenderers, uintptr_t input, uintptr_t mat) {
		return ((T (*)(BaseMatEffect*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x360D918))(this, allRenderers, input, mat);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(BaseMatEffect*))(Il2CppBase() + 0x360DB94))(this);
	}
	template <typename T = void> T SetupEffect(Il2CppList<uintptr_t>* enableRenderers) {
		return ((T (*)(BaseMatEffect*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x360DC4C))(this, enableRenderers);
	}
	template <typename T = void> T ModifyMaterial(uintptr_t rd) {
		return ((T (*)(BaseMatEffect*, uintptr_t))(Il2CppBase() + 0x360DF78))(this, rd);
	}
	template <typename T = void> T RecoverMats() {
		return ((T (*)(BaseMatEffect*))(Il2CppBase() + 0x360D21C))(this);
	}
	template <typename T = void> T UpdateMaterial(float percent) {
		return ((T (*)(BaseMatEffect*, float))(Il2CppBase() + 0x360E0AC))(this, percent);
	}
	template <typename T = void> T RefreshProgress() {
		return ((T (*)(BaseMatEffect*))(Il2CppBase() + 0x360D790))(this);
	}
	template <typename T = uintptr_t> T UpdateMaterial_1(float duration, float endTime) {
		return ((T (*)(BaseMatEffect*, float, float))(Il2CppBase() + 0x360DA7C))(this, duration, endTime);
	}

};

}
