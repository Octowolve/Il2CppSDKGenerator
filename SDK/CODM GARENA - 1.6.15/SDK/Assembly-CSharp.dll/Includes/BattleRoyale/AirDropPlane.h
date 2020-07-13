#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class AirDropPlane
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "AirDropPlane"));
	}

	template <typename T = uintptr_t> T& m_PawnMovement() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = uintptr_t> T& m_PawnManager() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FlyingTrailRenderers() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = bool> T& m_HasClearedFlyingTrailRenderer() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = int32_t> T& m_CurrentAirDropCount() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = Il2CppVector3> T& m_StartPosition() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = Il2CppVector3> T& m_EndPosition() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = bool> T& m_IsFallingDown() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMoveAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyDirectly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFallingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndDestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57578))(this);
	}
	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57588))(this);
	}
	template <typename T = uintptr_t> T get_PawnMovement() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57590))(this);
	}
	template <typename T = int32_t> T get_CurrentAirDropCount() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57598))(this);
	}
	template <typename T = void> T set_CurrentAirDropCount(int32_t value) {
		return ((T (*)(AirDropPlane*, int32_t))(Il2CppBase() + 0x2C575A0))(this, value);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C575A8))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C5764C))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57654))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C5765C))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57664))(this);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C5766C))(this);
	}
	template <typename T = Il2CppVector3> T get_StartPosition() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57674))(this);
	}
	template <typename T = void> T set_StartPosition(Il2CppVector3 value) {
		return ((T (*)(AirDropPlane*, Il2CppVector3))(Il2CppBase() + 0x2C57690))(this, value);
	}
	template <typename T = Il2CppVector3> T get_EndPosition() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C576A0))(this);
	}
	template <typename T = void> T set_EndPosition(Il2CppVector3 value) {
		return ((T (*)(AirDropPlane*, Il2CppVector3))(Il2CppBase() + 0x2C576BC))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(AirDropPlane*, uintptr_t))(Il2CppBase() + 0x2C576CC))(this, info);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AirDropPlane*, float))(Il2CppBase() + 0x2C57C0C))(this, deltaTime);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57DAC))(this);
	}
	template <typename T = void> T ProcessMoveAnimationParameter(float deltaTime) {
		return ((T (*)(AirDropPlane*, float))(Il2CppBase() + 0x2C58450))(this, deltaTime);
	}
	template <typename T = void> T DestroyDirectly() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C584F0))(this);
	}
	template <typename T = void> T SetPawnManager(uintptr_t PawnManager) {
		return ((T (*)(AirDropPlane*, uintptr_t))(Il2CppBase() + 0x2C58634))(this, PawnManager);
	}
	template <typename T = void> T StartFallingDown() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C586DC))(this);
	}
	template <typename T = void> T PlayDestroyEffect() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C57F40))(this);
	}
	template <typename T = void> T DelayAndDestroyPawn() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C58BAC))(this);
	}
	template <typename T = void> static T PlayDestroyEffectm__0(uintptr_t destroyEffect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2C58C54))(0, destroyEffect);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C58C8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(AirDropPlane*, uintptr_t))(Il2CppBase() + 0x2C58C94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AirDropPlane*, float))(Il2CppBase() + 0x2C58C9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(AirDropPlane*))(Il2CppBase() + 0x2C58CA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessMoveAnimationParameter(float P0) {
		return ((T (*)(AirDropPlane*, float))(Il2CppBase() + 0x2C58CAC))(this, P0);
	}

};

}
