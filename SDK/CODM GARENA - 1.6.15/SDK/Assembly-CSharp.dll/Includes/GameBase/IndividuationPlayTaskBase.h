#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayTaskBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayTaskBase"));
	}

	template <typename T = uintptr_t> T& PostPlayCallBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurrentIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OwnerViewType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_OwnerPawnIndividuationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CurrentIndividuationPlayAnimationInstance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_AnimationTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PostAnimationTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_CurrentItemId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_CurrentIndividuationIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_IndividuationEffectID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsLoadedEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_IndviduationEffect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_CurrentInviduationEffectTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_TickInviduationEffectTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxPlayCameraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateIndividuationPlayAnimationInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndividuationAnimPlayType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryPlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffectTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearIndividuationEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = float> T GetMaxPlayCameraTime() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F060D8))(this);
	}
	template <typename T = void> T Init(uintptr_t owner, uintptr_t component) {
		return ((T (*)(IndividuationPlayTaskBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F046C0))(this, owner, component);
	}
	template <typename T = void> T CreateIndividuationPlayAnimationInstance() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F06374))(this);
	}
	template <typename T = uintptr_t> T GetIndividuationAnimPlayType() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F06738))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IndividuationPlayTaskBase*, float))(Il2CppBase() + 0x1F062D0))(this, deltaTime);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F06870))(this);
	}
	template <typename T = void> T Interrupt() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F0691C))(this);
	}
	template <typename T = uintptr_t> T GetOwner() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1EFF244))(this);
	}
	template <typename T = void> T ShowModel() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F04204))(this);
	}
	template <typename T = void> T HideModel() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F04100))(this);
	}
	template <typename T = void> T RegisterRenderer() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F0618C))(this);
	}
	template <typename T = void> T UnRegisterRenderer() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F06AD0))(this);
	}
	template <typename T = void> T GatherRenderers(uintptr_t list) {
		return ((T (*)(IndividuationPlayTaskBase*, uintptr_t))(Il2CppBase() + 0x1F06BA0))(this, list);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F05AC8))(this);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F05EF8))(this);
	}
	template <typename T = void> T ShowWeapon() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F05B74))(this);
	}
	template <typename T = bool> T TryPlayEffect() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F05DEC))(this);
	}
	template <typename T = void> T LoadEffect() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F065D4))(this);
	}
	template <typename T = void> T OnEffectAssetLoaded(int32_t assetid, uintptr_t obj) {
		return ((T (*)(IndividuationPlayTaskBase*, int32_t, uintptr_t))(Il2CppBase() + 0x1F06EDC))(this, assetid, obj);
	}
	template <typename T = void> T TickEffectTimer(float deltaTime) {
		return ((T (*)(IndividuationPlayTaskBase*, float))(Il2CppBase() + 0x1F07420))(this, deltaTime);
	}
	template <typename T = void> T ClearIndividuationEffect() {
		return ((T (*)(IndividuationPlayTaskBase*))(Il2CppBase() + 0x1F06D54))(this);
	}

};

}
