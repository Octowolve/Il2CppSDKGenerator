#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIIndividuationPlayAnimationInstanceCrackingSkull
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIIndividuationPlayAnimationInstance_CrackingSkull"));
	}

	template <typename T = uintptr_t> T& m_CrackingSkullGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_FX_Skull_DisGo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_FX_Skull_ParticleGo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_CrackingSkullId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_HeartFingerAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& RootBone() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AnimationTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_PostAnimtionTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_SkullAnimator() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& FPlay() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkullPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_revise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T PlayAnimation(Il2CppString* stateName) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, Il2CppString*))(Il2CppBase() + 0x3AEDAA4))(this, stateName);
	}
	template <typename T = void> T OnLoad(Il2CppArray<uintptr_t>* assetIDs, uintptr_t obj) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3AEDD04))(this, assetIDs, obj);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x3AEE148))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x3AEE1EC))(this);
	}
	template <typename T = void> T SkullPlay(float time) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x3AEE3E0))(this, time);
	}
	template <typename T = void> T StopPlay(float time) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x3AEE634))(this, time);
	}
	template <typename T = void> T NullPlay(float time) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x3AEE8B8))(this, time);
	}
	template <typename T = void> T revise(uintptr_t obj, uintptr_t Bone) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AEE958))(this, obj, Bone);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x3AEEB0C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnimation(Il2CppString* P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, Il2CppString*))(Il2CppBase() + 0x3AEF0E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x3AEF0EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UIIndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x3AEF0F0))(this, P0);
	}

};

}
