#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AnimationClipData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "AnimationClipData"));
	}

	template <typename T = bool> T& crossFade() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& transitionDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& playbackDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& stateDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& stateName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& track() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& dirty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RunningLayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_CrossFade() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C20))(this);
	}
	template <typename T = void> T set_CrossFade(bool value) {
		return ((T (*)(AnimationClipData*, bool))(Il2CppBase() + 0x4853C28))(this, value);
	}
	template <typename T = float> T get_TransitionDuration() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C30))(this);
	}
	template <typename T = void> T set_TransitionDuration(float value) {
		return ((T (*)(AnimationClipData*, float))(Il2CppBase() + 0x4853C38))(this, value);
	}
	template <typename T = float> T get_StartTime() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C40))(this);
	}
	template <typename T = void> T set_StartTime(float value) {
		return ((T (*)(AnimationClipData*, float))(Il2CppBase() + 0x4853C48))(this, value);
	}
	template <typename T = float> T get_PlaybackDuration() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C58))(this);
	}
	template <typename T = void> T set_PlaybackDuration(float value) {
		return ((T (*)(AnimationClipData*, float))(Il2CppBase() + 0x4853C60))(this, value);
	}
	template <typename T = float> T get_StateDuration() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C70))(this);
	}
	template <typename T = void> T set_StateDuration(float value) {
		return ((T (*)(AnimationClipData*, float))(Il2CppBase() + 0x4853C78))(this, value);
	}
	template <typename T = Il2CppString*> T get_StateName() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853C88))(this);
	}
	template <typename T = void> T set_StateName(Il2CppString* value) {
		return ((T (*)(AnimationClipData*, Il2CppString*))(Il2CppBase() + 0x4853C90))(this, value);
	}
	template <typename T = uintptr_t> T get_Track() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853D9C))(this);
	}
	template <typename T = void> T set_Track(uintptr_t value) {
		return ((T (*)(AnimationClipData*, uintptr_t))(Il2CppBase() + 0x4853DA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FriendlyName() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853DB4))(this);
	}
	template <typename T = void> T set_FriendlyName(Il2CppString* value) {
		return ((T (*)(AnimationClipData*, Il2CppString*))(Il2CppBase() + 0x4853D98))(this, value);
	}
	template <typename T = uintptr_t> T get_TargetObject() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853DBC))(this);
	}
	template <typename T = void> T set_TargetObject(uintptr_t value) {
		return ((T (*)(AnimationClipData*, uintptr_t))(Il2CppBase() + 0x4853DC4))(this, value);
	}
	template <typename T = bool> T get_Dirty() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853DD4))(this);
	}
	template <typename T = void> T set_Dirty(bool value) {
		return ((T (*)(AnimationClipData*, bool))(Il2CppBase() + 0x4853DDC))(this, value);
	}
	template <typename T = float> T get_EndTime() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853DE4))(this);
	}
	template <typename T = void> T set_EndTime(float value) {
		return ((T (*)(AnimationClipData*, float))(Il2CppBase() + 0x4853DF8))(this, value);
	}
	template <typename T = int32_t> T get_RunningLayer() {
		return ((T (*)(AnimationClipData*))(Il2CppBase() + 0x4853DFC))(this);
	}
	template <typename T = void> T set_RunningLayer(int32_t value) {
		return ((T (*)(AnimationClipData*, int32_t))(Il2CppBase() + 0x4853E04))(this, value);
	}
	template <typename T = bool> static T IsClipNotRunning(float sequencerTime, uintptr_t clipData) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4853E0C))(0, sequencerTime, clipData);
	}
	template <typename T = bool> static T IsClipRunning(float sequencerTime, uintptr_t clipData) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4853E44))(0, sequencerTime, clipData);
	}
	template <typename T = bool> static T IsClipFinished(float sequencerTime, uintptr_t clipData) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4853E94))(0, sequencerTime, clipData);
	}
	template <typename T = Il2CppString*> static T MakeFriendlyStateName(Il2CppString* stateName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4853CB0))(0, stateName);
	}

};

}
