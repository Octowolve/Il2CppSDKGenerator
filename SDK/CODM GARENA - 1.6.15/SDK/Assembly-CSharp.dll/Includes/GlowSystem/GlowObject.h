#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GlowSystem {

class GlowObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GlowSystem", "GlowObject"));
	}

	template <typename T = int32_t> static T& Flag_MeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Flag_SkinnedMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Flag_SpriteRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Flag_ParticleSystemRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& renderTypeFilter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& doublePI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& occluderColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& zTestLessEqual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& zTestAlways() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& renderingOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& supportedRenderTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& opaqueShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& transparentShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& glowObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& zWrite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& depthOffsetFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& depthOffsetUnits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> T& seeThrough() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& occluder() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& cachedTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& glowRendererCacheList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& renderersDirty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& zTest() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& stencilRef() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = int32_t> T& _once() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& flashing() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& currentColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& transitionValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& transitionTarget() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& transitionTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& onceColor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& flashingFreq() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& flashingColorStart() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& flashingColorEnd() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& constantColor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _opaqueShader() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _transparentShader() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& _opaqueMaterial() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mCacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderTypeFilter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReinitMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_On() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlashingParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlashingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FlashingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_FlashingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_FlashingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlashingOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlashingSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConstantOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantOnImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConstantOnImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantOffImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstantSwitchImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Off() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeeThrough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCachedRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCachedRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GrabRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShaderParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillBufferInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStencilRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZWrite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDepthOffsetFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDepthOffsetUnits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = void> T SetRenderTypeFilter(int32_t flag) {
		return ((T (*)(GlowObject*, int32_t))(Il2CppBase() + 0x3E1B14C))(this, flag);
	}
	template <typename T = void> T ReinitMaterials() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1B7A8))(this);
	}
	template <typename T = void> T OnParams(uintptr_t color) {
		return ((T (*)(GlowObject*, uintptr_t))(Il2CppBase() + 0x3E1B87C))(this, color);
	}
	template <typename T = void> T On() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1B984))(this);
	}
	template <typename T = void> T On_1(uintptr_t color) {
		return ((T (*)(GlowObject*, uintptr_t))(Il2CppBase() + 0x3E1BA98))(this, color);
	}
	template <typename T = void> T FlashingParams(uintptr_t startColor, uintptr_t endColor, float freq) {
		return ((T (*)(GlowObject*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3E1BBAC))(this, startColor, endColor, freq);
	}
	template <typename T = void> T FlashingOn() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1BCE4))(this);
	}
	template <typename T = void> T FlashingOn_1(uintptr_t startColor, uintptr_t endColor) {
		return ((T (*)(GlowObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E1BDB8))(this, startColor, endColor);
	}
	template <typename T = void> T FlashingOn_2(uintptr_t startColor, uintptr_t endColor, float freq) {
		return ((T (*)(GlowObject*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3E1BEFC))(this, startColor, endColor, freq);
	}
	template <typename T = void> T FlashingOn_3(float freq) {
		return ((T (*)(GlowObject*, float))(Il2CppBase() + 0x3E1C03C))(this, freq);
	}
	template <typename T = void> T FlashingOff() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1C120))(this);
	}
	template <typename T = void> T FlashingSwitch() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1C1F4))(this);
	}
	template <typename T = void> T ConstantParams(uintptr_t color) {
		return ((T (*)(GlowObject*, uintptr_t))(Il2CppBase() + 0x3E1C2CC))(this, color);
	}
	template <typename T = void> T ConstantOn(float time) {
		return ((T (*)(GlowObject*, float))(Il2CppBase() + 0x3E1C3D4))(this, time);
	}
	template <typename T = void> T ConstantOn_1(uintptr_t color, float time) {
		return ((T (*)(GlowObject*, uintptr_t, float))(Il2CppBase() + 0x3E1C4E0))(this, color, time);
	}
	template <typename T = void> T ConstantOff(float time) {
		return ((T (*)(GlowObject*, float))(Il2CppBase() + 0x3E1C628))(this, time);
	}
	template <typename T = void> T ConstantSwitch(float time) {
		return ((T (*)(GlowObject*, float))(Il2CppBase() + 0x3E1C734))(this, time);
	}
	template <typename T = void> T ConstantOnImmediate() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1C854))(this);
	}
	template <typename T = void> T ConstantOnImmediate_1(uintptr_t color) {
		return ((T (*)(GlowObject*, uintptr_t))(Il2CppBase() + 0x3E1C92C))(this, color);
	}
	template <typename T = void> T ConstantOffImmediate() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CA40))(this);
	}
	template <typename T = void> T ConstantSwitchImmediate() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CB14))(this);
	}
	template <typename T = void> T Off() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CC14))(this);
	}
	template <typename T = void> T SetSeeThrough(bool inSeeThrough) {
		return ((T (*)(GlowObject*, bool))(Il2CppBase() + 0x3E1CD0C))(this, inSeeThrough);
	}
	template <typename T = void> T Die() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CDE4))(this);
	}
	template <typename T = bool> T get_once() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CEF8))(this);
	}
	template <typename T = void> T set_once(bool value) {
		return ((T (*)(GlowObject*, bool))(Il2CppBase() + 0x3E1BA5C))(this, value);
	}
	template <typename T = uintptr_t> T get_opaqueShader() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1CF24))(this);
	}
	template <typename T = uintptr_t> T get_transparentShader() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1D030))(this);
	}
	template <typename T = uintptr_t> T get_opaqueMaterial() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1D13C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1D678))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1D8D0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1DA10))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1DD04))(this);
	}
	template <typename T = void> T ClearCachedRenderers() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1DB80))(this);
	}
	template <typename T = void> T UpdateCachedRenderers() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1E038))(this);
	}
	template <typename T = void> T GrabRenderers(uintptr_t t, Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(GlowObject*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E1E330))(this, t, renderers);
	}
	template <typename T = void> T UpdateShaderParams(bool zt, bool sr) {
		return ((T (*)(GlowObject*, bool, bool))(Il2CppBase() + 0x3E1EDE0))(this, zt, sr);
	}
	template <typename T = void> T UpdateColors() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1F4F4))(this);
	}
	template <typename T = void> T UpdateTransition() {
		return ((T (*)(GlowObject*))(Il2CppBase() + 0x3E1DDD8))(this);
	}
	template <typename T = void> T FillBufferInternal(uintptr_t buffer, uintptr_t m, bool depthAvailable) {
		return ((T (*)(GlowObject*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E1FAE8))(this, buffer, m, depthAvailable);
	}
	template <typename T = void> static T FillBuffer(uintptr_t buffer, Il2CppVector3 camPos, bool depthAvailable) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x3E18440))(0, buffer, camPos, depthAvailable);
	}
	template <typename T = int32_t> static T GetZTest(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3E1D420))(0, enabled);
	}
	template <typename T = int32_t> static T GetStencilRef(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3E1D5A8))(0, enabled);
	}
	template <typename T = void> static T SetZWrite(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E20108))(0, value);
	}
	template <typename T = void> static T SetDepthOffsetFactor(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E20368))(0, value);
	}
	template <typename T = void> static T SetDepthOffsetUnits(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E205E0))(0, value);
	}
	template <typename T = bool> static T SetRenderTypeFilterm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E20B94))(0, e);
	}
	template <typename T = bool> static T SetRenderTypeFilterm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E20C84))(0, e);
	}
	template <typename T = bool> static T SetRenderTypeFilterm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E20D74))(0, e);
	}
	template <typename T = bool> static T SetRenderTypeFilterm__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E20E64))(0, e);
	}

};

}
