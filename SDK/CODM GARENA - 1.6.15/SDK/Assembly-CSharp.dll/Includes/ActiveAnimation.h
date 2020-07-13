#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveAnimation"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& callWhenFinished() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mAnim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mLastDirection() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mDisableDirection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mNotify() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mAnimator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& mClip() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = float> T get_playbackTime() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A134EC))(this);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A1361C))(this);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A13B88))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A140D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A14614))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ActiveAnimation*))(Il2CppBase() + 0x4A14764))(this);
	}
	template <typename T = void> T Play(Il2CppString* clipName, uintptr_t playDirection) {
		return ((T (*)(ActiveAnimation*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A1500C))(this, clipName, playDirection);
	}
	template <typename T = uintptr_t> static T Play_1(uintptr_t anim, Il2CppString* clipName, uintptr_t playDirection, uintptr_t enableBeforePlay, uintptr_t disableCondition) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A1589C))(0, anim, clipName, playDirection, enableBeforePlay, disableCondition);
	}
	template <typename T = uintptr_t> static T Play_2(uintptr_t anim, Il2CppString* clipName, uintptr_t playDirection) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A15D28))(0, anim, clipName, playDirection);
	}
	template <typename T = uintptr_t> static T Play_3(uintptr_t anim, uintptr_t playDirection) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A15E00))(0, anim, playDirection);
	}
	template <typename T = uintptr_t> static T Play_4(uintptr_t anim, Il2CppString* clipName, uintptr_t playDirection, uintptr_t enableBeforePlay, uintptr_t disableCondition) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A15ECC))(0, anim, clipName, playDirection, enableBeforePlay, disableCondition);
	}

};

}
