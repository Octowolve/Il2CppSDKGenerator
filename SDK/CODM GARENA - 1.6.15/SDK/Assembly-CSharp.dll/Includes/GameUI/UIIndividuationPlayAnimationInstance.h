#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIIndividuationPlayAnimationInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIIndividuationPlayAnimationInstance"));
	}

	template <typename T = int32_t> T& IndividuationPlayType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CurrentUIIndividuationPlayAnimationInstanceStage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_CurrentStateName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& animFinishCallBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_InTick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateClipLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T get_CurrentStateName() {
		return ((T (*)(UIIndividuationPlayAnimationInstance*))(Il2CppBase() + 0x3AEC9DC))(this);
	}
	template <typename T = void> T Init(uintptr_t targetAnimator, int32_t playType, uintptr_t callBack) {
		return ((T (*)(UIIndividuationPlayAnimationInstance*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3AEC9E4))(this, targetAnimator, playType, callBack);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* stateName) {
		return ((T (*)(UIIndividuationPlayAnimationInstance*, Il2CppString*))(Il2CppBase() + 0x3AECAB4))(this, stateName);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(UIIndividuationPlayAnimationInstance*))(Il2CppBase() + 0x3AECB6C))(this);
	}
	template <typename T = bool> T TickEnabled() {
		return ((T (*)(UIIndividuationPlayAnimationInstance*))(Il2CppBase() + 0x3AECC10))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIIndividuationPlayAnimationInstance*, float))(Il2CppBase() + 0x3AECCB8))(this, deltaTime);
	}
	template <typename T = float> T GetStateClipLength(Il2CppString* stateName) {
		return ((T (*)(UIIndividuationPlayAnimationInstance*, Il2CppString*))(Il2CppBase() + 0x3AECDFC))(this, stateName);
	}

};

}
