#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OutlineEffectUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutlineEffectUtility"));
	}

	template <typename T = bool> static T& StaticInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& OutlineStencilBit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = unsigned char> static T& XedgeStencilBit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = unsigned char> static T& ShadowbladeStencilBit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = int32_t> static T& PropIDOutlineColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& PropIDOutlineParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& StandardDynamicRenderQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& XedgeDynamicRenderQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& RenderStateMaterialCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& ShadowbladeNeedStencil() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& ShadowbladeOutlineWriteZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19);
	}
	template <typename T = bool> static T& CloseNoNeedStencil() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& XedgeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& RenderStateEnableDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& MPBOutline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& offsetUnits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> static T& offsetFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseContour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseSilhouette() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseSilhouetteSeeThrough_OccludedOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseXedge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBaseShadowblade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSilhouette() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSilhouetteSeeThrough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSilhouetteOccludedOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitXedge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShadowbladeXedge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShadowbladeXedgeNoStencil() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShadowbladeOutline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShadowbladeOutlineWriteZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCullFrontOutline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRenderStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTemplatePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_EnableRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderStateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRenderStateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6558))(0);
	}
	template <typename T = void> static T InitSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6878))(0);
	}
	template <typename T = void> static T InitDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6A58))(0);
	}
	template <typename T = void> static T InitDefaultPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6BBC))(0);
	}
	template <typename T = void> static T InitBaseContour() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6DB8))(0);
	}
	template <typename T = void> static T InitBaseSilhouette() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6F1C))(0);
	}
	template <typename T = void> static T InitBaseSilhouetteSeeThrough_OccludedOnly() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF7188))(0);
	}
	template <typename T = void> static T InitBaseXedge() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF73F4))(0);
	}
	template <typename T = void> static T InitBaseShadowblade() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF7660))(0);
	}
	template <typename T = void> static T InitContour() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF78CC))(0);
	}
	template <typename T = void> static T InitSilhouette() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF7A8C))(0);
	}
	template <typename T = void> static T InitSilhouetteSeeThrough() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF7D18))(0);
	}
	template <typename T = void> static T InitSilhouetteOccludedOnly() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF7FA4))(0);
	}
	template <typename T = void> static T InitXedge() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF8230))(0);
	}
	template <typename T = void> static T InitShadowbladeXedge() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF8674))(0);
	}
	template <typename T = void> static T InitShadowbladeXedgeNoStencil() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF8AD8))(0);
	}
	template <typename T = void> static T InitShadowbladeOutline() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF8E7C))(0);
	}
	template <typename T = void> static T InitShadowbladeOutlineWriteZ() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF912C))(0);
	}
	template <typename T = void> static T InitCullFrontOutline() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF949C))(0);
	}
	template <typename T = void> static T InitRenderStates() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EF6714))(0);
	}
	template <typename T = uintptr_t> static T GetTemplatePriority(uintptr_t template, uintptr_t input) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EF9688))(0, template, input);
	}
	template <typename T = uintptr_t> static T EnableRenderStateEffect(uintptr_t target, uintptr_t assetID, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EF9880))(0, target, assetID, style);
	}
	template <typename T = uintptr_t> static T EnableRenderStateEffect_1(uintptr_t input) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EF9A54))(0, input);
	}
	template <typename T = bool> static T DisableRenderStateEffect(uintptr_t target, uintptr_t assetID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EFA268))(0, target, assetID);
	}
	template <typename T = void> static T SetPawnDefaultState(uintptr_t rd, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3EFA738))(0, rd, enable);
	}
	template <typename T = uintptr_t> static T GetRenderStateMaterial(Il2CppString* shaderName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3EFA86C))(0, shaderName);
	}
	template <typename T = void> static T ClearRenderStateMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EFAB94))(0);
	}
	template <typename T = void> static T Shutdown() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EFAF28))(0);
	}

};

}
