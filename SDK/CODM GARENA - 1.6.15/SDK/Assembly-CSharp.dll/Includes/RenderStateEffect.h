#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderStateEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderStateEffect"));
	}

	template <typename T = bool> static T& EnableDetailLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsSkip1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RenderStateDataStack() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CurrentRenderStateData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& NearWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FarWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& FarDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RimIntensity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RimRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Style() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PassType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsMultipleRoundMode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllRenderers() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnableRenderers() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsLoadingEffect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_EffectEnable() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& m_AllowParticleSystem() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_AddMaterialDict() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& offsetUnits() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& offsetFactor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& TestNeedUpdata() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDataFromOutlineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDataFromRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushEffectWithRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushEffectWithOutlineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropertyBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromRenderStateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffectWithTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StartEffectWithTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = bool> T get_EffectEnable() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412A838))(this);
	}
	template <typename T = bool> T get_AllowParticleSystem() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412A840))(this);
	}
	template <typename T = void> T set_AllowParticleSystem(bool value) {
		return ((T (*)(RenderStateEffect*, bool))(Il2CppBase() + 0x412A848))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412A850))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412A93C))(this);
	}
	template <typename T = uintptr_t> T CreateDataFromOutlineEffect(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412AB5C))(this, template, input);
	}
	template <typename T = uintptr_t> T CreateDataFromRenderStateEffect(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412ACFC))(this, template, input);
	}
	template <typename T = bool> T PushEffectWithRenderStateEffect(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412AE9C))(this, template, input);
	}
	template <typename T = bool> T PushEffectWithOutlineEffect(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412AFDC))(this, template, input);
	}
	template <typename T = bool> T PushEffect() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412B11C))(this);
	}
	template <typename T = bool> T PopEffect() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412B244))(this);
	}
	template <typename T = int32_t> T FindEffect(uintptr_t assetID) {
		return ((T (*)(RenderStateEffect*, uintptr_t))(Il2CppBase() + 0x412B510))(this, assetID);
	}
	template <typename T = bool> T RemoveEffect(uintptr_t assetID) {
		return ((T (*)(RenderStateEffect*, uintptr_t))(Il2CppBase() + 0x412B688))(this, assetID);
	}
	template <typename T = void> T SetRenderState(uintptr_t rd, uintptr_t style) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412B7B4))(this, rd, style);
	}
	template <typename T = void> T SetPropertyBlock(uintptr_t rd, bool overrideRenderQueue) {
		return ((T (*)(RenderStateEffect*, uintptr_t, bool))(Il2CppBase() + 0x412BAD4))(this, rd, overrideRenderQueue);
	}
	template <typename T = void> T SetupEffect(uintptr_t rd, bool enable) {
		return ((T (*)(RenderStateEffect*, uintptr_t, bool))(Il2CppBase() + 0x412BF58))(this, rd, enable);
	}
	template <typename T = void> T InitFromRenderStateData() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412B3D4))(this);
	}
	template <typename T = void> T StartEffectWithTemplate(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412C760))(this, template, input);
	}
	template <typename T = void> T StartEffectWithTemplate_1(uintptr_t template, uintptr_t input) {
		return ((T (*)(RenderStateEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x412C894))(this, template, input);
	}
	template <typename T = bool> T CheckMesh(uintptr_t renderer) {
		return ((T (*)(RenderStateEffect*, uintptr_t))(Il2CppBase() + 0x412C9C8))(this, renderer);
	}
	template <typename T = void> T StartEffect(void* rds) {
		return ((T (*)(RenderStateEffect*, void*))(Il2CppBase() + 0x412CD90))(this, rds);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412D7A0))(this);
	}
	template <typename T = void> T RecoverEffect() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412D8DC))(this);
	}
	template <typename T = void> T UpdateEffect(Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(RenderStateEffect*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x412DDA0))(this, renderers);
	}
	template <typename T = void> T AddMaterial(uintptr_t rd) {
		return ((T (*)(RenderStateEffect*, uintptr_t))(Il2CppBase() + 0x412C110))(this, rd);
	}
	template <typename T = void> T RemoveMaterial(uintptr_t rd) {
		return ((T (*)(RenderStateEffect*, uintptr_t))(Il2CppBase() + 0x412C4F4))(this, rd);
	}
	template <typename T = void> T TestSort() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412DEA0))(this);
	}
	template <typename T = void> T TestStart() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412DF68))(this);
	}
	template <typename T = void> T TestEnd() {
		return ((T (*)(RenderStateEffect*))(Il2CppBase() + 0x412E030))(this);
	}
	template <typename T = int32_t> static T Sortm__0(uintptr_t l, uintptr_t r) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x412E17C))(0, l, r);
	}

};

}
