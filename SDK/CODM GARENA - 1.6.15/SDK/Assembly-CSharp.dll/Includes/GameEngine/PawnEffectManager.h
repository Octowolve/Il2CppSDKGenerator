#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnEffectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnEffectManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& MaterialEffectDict() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EnableEffectType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_EnableMatAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_EnableEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_EnableMat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_DurationTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_EndTimer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_RenderStateEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_EndPerspectiveEffectTimer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableMatEffectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableMaterialEffectImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableMaterialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableMaterialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRendererChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnablePerspectiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisablePerspectiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPerspectiveEffec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveRenderStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnEffectManager*, uintptr_t))(Il2CppBase() + 0x2736B3C))(this, pawn);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2736BF4))(this);
	}
	template <typename T = void> T OnReSpawn() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x273707C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2737134))(this);
	}
	template <typename T = bool> T IsEnableMatEffectType(uintptr_t type) {
		return ((T (*)(PawnEffectManager*, uintptr_t))(Il2CppBase() + 0x27371EC))(this, type);
	}
	template <typename T = bool> T get_IsEnableChangeMat() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x27372B8))(this);
	}
	template <typename T = bool> T EnableMaterialEffectImmediately(uintptr_t mat, uintptr_t input) {
		return ((T (*)(PawnEffectManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2737368))(this, mat, input);
	}
	template <typename T = bool> T EnableMaterialEffect(uintptr_t input) {
		return ((T (*)(PawnEffectManager*, uintptr_t))(Il2CppBase() + 0x2737708))(this, input);
	}
	template <typename T = void> T DisableMaterialEffect() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2736CAC))(this);
	}
	template <typename T = void> T OnRendererChanged() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2737AD8))(this);
	}
	template <typename T = bool> T get_IsEnablePerspectiveEffect() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2737BC0))(this);
	}
	template <typename T = void> T EnablePerspectiveEffect(uintptr_t assetID, float duration) {
		return ((T (*)(PawnEffectManager*, uintptr_t, float))(Il2CppBase() + 0x2737CA4))(this, assetID, duration);
	}
	template <typename T = void> T DisablePerspectiveEffect(uintptr_t assetID) {
		return ((T (*)(PawnEffectManager*, uintptr_t))(Il2CppBase() + 0x2737F4C))(this, assetID);
	}
	template <typename T = void> T RefreshPerspectiveEffec() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x273826C))(this);
	}
	template <typename T = void> T RemoveRenderStateEffect() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x2736F44))(this);
	}
	template <typename T = void> T EnableMaterialEffectImmediatelym__0() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x27383B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnEffectManager*, uintptr_t))(Il2CppBase() + 0x27383B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x27383BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawn() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x27383C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PawnEffectManager*))(Il2CppBase() + 0x27383C8))(this);
	}

};

}
