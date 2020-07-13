#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class IndividuationAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "IndividuationAction"));
	}

	template <typename T = uintptr_t> T& mclip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& AnimationLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& aniEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mStopSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mEventLib() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheEventLib() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& timeLost() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mPawn() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__initAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__playAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__stopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__runAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_preAnimationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Clip() {
		return ((T (*)(IndividuationAction*))(Il2CppBase() + 0x3708A24))(this);
	}
	template <typename T = void> T set_Clip(uintptr_t value) {
		return ((T (*)(IndividuationAction*, uintptr_t))(Il2CppBase() + 0x3708A2C))(this, value);
	}
	template <typename T = bool> T _initAction(uintptr_t inActor) {
		return ((T (*)(IndividuationAction*, uintptr_t))(Il2CppBase() + 0x1B9E7FC))(this, inActor);
	}
	template <typename T = bool> T _playAction(uintptr_t inActor, float inFadeTime) {
		return ((T (*)(IndividuationAction*, uintptr_t, float))(Il2CppBase() + 0x1B9EAFC))(this, inActor, inFadeTime);
	}
	template <typename T = bool> T _stopAction(uintptr_t inActor) {
		return ((T (*)(IndividuationAction*, uintptr_t))(Il2CppBase() + 0x1B9EEF4))(this, inActor);
	}
	template <typename T = bool> T _runAction(float delta, uintptr_t inActor) {
		return ((T (*)(IndividuationAction*, float, uintptr_t))(Il2CppBase() + 0x1B9ED4C))(this, delta, inActor);
	}
	template <typename T = void> T preAnimationEvent(float delta, uintptr_t inActor) {
		return ((T (*)(IndividuationAction*, float, uintptr_t))(Il2CppBase() + 0x3708A34))(this, delta, inActor);
	}
	template <typename T = bool> T OnAnimationEvent(uintptr_t inEvent, uintptr_t inActor) {
		return ((T (*)(IndividuationAction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3708E7C))(this, inEvent, inActor);
	}

};

}
