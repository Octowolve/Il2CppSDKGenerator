#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstanceCrackingSkull
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_CrackingSkull"));
	}

	template <typename T = int32_t> T& m_CrackingSkullId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CrackingSkullGo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_FX_Skull_DisGo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_FX_Skull_ParticleGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TimeTick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& RootBone() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_SkullAnimator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FPlay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPostPlayAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkullPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_revise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterIndividuationPlayTaskStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = float> T GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1EFF820))(this);
	}
	template <typename T = void> T OnLoad(Il2CppArray<uintptr_t>* assetIDs, uintptr_t obj) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1EFF8C0))(this, assetIDs, obj);
	}
	template <typename T = void> T SkullPlay(float time) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x1EFFD30))(this, time);
	}
	template <typename T = void> T StopPlay(float time) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x1EFFF98))(this, time);
	}
	template <typename T = void> T NullPlay(float time) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, float))(Il2CppBase() + 0x1F00210))(this, time);
	}
	template <typename T = void> T revise(uintptr_t obj, uintptr_t Bone) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F002B0))(this, obj, Bone);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1F00464))(this);
	}
	template <typename T = bool> T TryEnterIndividuationPlayTaskStage(uintptr_t stage) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, uintptr_t))(Il2CppBase() + 0x1F005B0))(this, stage);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1F00B28))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetPostPlayAnimTime() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1F00F4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1F00F50))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryEnterIndividuationPlayTaskStage(uintptr_t P0) {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*, uintptr_t))(Il2CppBase() + 0x1F00F54))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Cleanup() {
		return ((T (*)(IndividuationPlayAnimationInstanceCrackingSkull*))(Il2CppBase() + 0x1F00F58))(this);
	}

};

}
