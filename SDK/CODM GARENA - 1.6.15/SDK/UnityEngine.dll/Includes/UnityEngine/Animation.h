#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Animation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Animation"));
	}


	template <typename T = void> T set_playAutomatically(bool value) {
		return ((T (*)(Animation*, bool))(Il2CppBase() + 0x468DE8C))(this, value);
	}
	template <typename T = void> T set_wrapMode(uintptr_t value) {
		return ((T (*)(Animation*, uintptr_t))(Il2CppBase() + 0x468DF2C))(this, value);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468DFCC))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_Stop(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DFD4))(0, self);
	}
	template <typename T = void> T Stop_1(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E06C))(this, name);
	}
	template <typename T = void> T Internal_StopByName(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E070))(this, name);
	}
	template <typename T = void> T Rewind(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E110))(this, name);
	}
	template <typename T = void> T Internal_RewindByName(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E114))(this, name);
	}
	template <typename T = void> T Sample() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468E1B4))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_Sample(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468E1BC))(0, self);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468E254))(this);
	}
	template <typename T = bool> T IsPlaying(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E2EC))(this, name);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E38C))(this, name);
	}
	template <typename T = bool> T Play() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468E430))(this);
	}
	template <typename T = bool> T Play_1(uintptr_t mode) {
		return ((T (*)(Animation*, uintptr_t))(Il2CppBase() + 0x468E438))(this, mode);
	}
	template <typename T = bool> T Play_2(Il2CppString* animation, uintptr_t mode) {
		return ((T (*)(Animation*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x468E4DC))(this, animation, mode);
	}
	template <typename T = bool> T Play_3(Il2CppString* animation) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E584))(this, animation);
	}
	template <typename T = void> T CrossFade(Il2CppString* animation, float fadeLength, uintptr_t mode) {
		return ((T (*)(Animation*, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x468E58C))(this, animation, fadeLength, mode);
	}
	template <typename T = void> T CrossFade_1(Il2CppString* animation, float fadeLength) {
		return ((T (*)(Animation*, Il2CppString*, float))(Il2CppBase() + 0x468E63C))(this, animation, fadeLength);
	}
	template <typename T = void> T CrossFade_2(Il2CppString* animation) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E658))(this, animation);
	}
	template <typename T = void> T Blend(Il2CppString* animation, float targetWeight, float fadeLength) {
		return ((T (*)(Animation*, Il2CppString*, float, float))(Il2CppBase() + 0x468E67C))(this, animation, targetWeight, fadeLength);
	}
	template <typename T = uintptr_t> T PlayQueued(Il2CppString* animation, uintptr_t queue, uintptr_t mode) {
		return ((T (*)(Animation*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x468E72C))(this, animation, queue, mode);
	}
	template <typename T = uintptr_t> T PlayQueued_1(Il2CppString* animation) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E7DC))(this, animation);
	}
	template <typename T = void> T AddClip(uintptr_t clip, Il2CppString* newName) {
		return ((T (*)(Animation*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x468E7FC))(this, clip, newName);
	}
	template <typename T = void> T AddClip_1(uintptr_t clip, Il2CppString* newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame) {
		return ((T (*)(Animation*, uintptr_t, Il2CppString*, int32_t, int32_t, bool))(Il2CppBase() + 0x468E848))(this, clip, newName, firstFrame, lastFrame, addLoopFrame);
	}
	template <typename T = void> T AddClip_2(uintptr_t clip, Il2CppString* newName, int32_t firstFrame, int32_t lastFrame) {
		return ((T (*)(Animation*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x468E824))(this, clip, newName, firstFrame, lastFrame);
	}
	template <typename T = int32_t> T GetClipCount() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468E910))(this);
	}
	template <typename T = bool> T PlayDefaultAnimation(uintptr_t mode) {
		return ((T (*)(Animation*, uintptr_t))(Il2CppBase() + 0x468E43C))(this, mode);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468E9A8))(this);
	}
	template <typename T = uintptr_t> T GetState(Il2CppString* name) {
		return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x468E390))(this, name);
	}
	template <typename T = uintptr_t> T GetStateAtIndex(int32_t index) {
		return ((T (*)(Animation*, int32_t))(Il2CppBase() + 0x468EA74))(this, index);
	}
	template <typename T = int32_t> T GetStateCount() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468EB14))(this);
	}
	template <typename T = bool> T get_animatePhysics() {
		return ((T (*)(Animation*))(Il2CppBase() + 0x468EBAC))(this);
	}

};

}
