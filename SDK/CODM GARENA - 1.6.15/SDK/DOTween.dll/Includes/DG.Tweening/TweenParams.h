#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class TweenParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "TweenParams"));
	}

	template <typename T = uintptr_t> static T& Params() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& updateType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isIndependentUpdate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onPlay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& onRewind() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onUpdate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& onStepComplete() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& onComplete() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& onKill() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onWaypointChange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isRecyclable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isSpeedBased() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& autoKill() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = int32_t> T& loops() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isRelative() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& customEase() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& easeOvershootOrAmplitude() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& easePeriod() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T Clear() {
		return ((T (*)(TweenParams*))(Il2CppBase() + 0x51D8974))(this);
	}
	template <typename T = uintptr_t> T SetAutoKill(bool autoKillOnCompletion) {
		return ((T (*)(TweenParams*, bool))(Il2CppBase() + 0x51D8AE0))(this, autoKillOnCompletion);
	}
	template <typename T = uintptr_t> T SetId(uintptr_t id) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8AE8))(this, id);
	}
	template <typename T = uintptr_t> T SetTarget(uintptr_t target) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8AF0))(this, target);
	}
	template <typename T = uintptr_t> T SetLoops(int32_t loops, void* loopType) {
		return ((T (*)(TweenParams*, int32_t, void*))(Il2CppBase() + 0x51D8AF8))(this, loops, loopType);
	}
	template <typename T = uintptr_t> T SetEase(uintptr_t ease, void* overshootOrAmplitude, void* period) {
		return ((T (*)(TweenParams*, uintptr_t, void*, void*))(Il2CppBase() + 0x51D8BDC))(this, ease, overshootOrAmplitude, period);
	}
	template <typename T = uintptr_t> T SetEase_1(uintptr_t animCurve) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8DB8))(this, animCurve);
	}
	template <typename T = uintptr_t> T SetEase_2(uintptr_t customEase) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8E94))(this, customEase);
	}
	template <typename T = uintptr_t> T SetRecyclable(bool recyclable) {
		return ((T (*)(TweenParams*, bool))(Il2CppBase() + 0x51D8EA4))(this, recyclable);
	}
	template <typename T = uintptr_t> T SetUpdate(bool isIndependentUpdate) {
		return ((T (*)(TweenParams*, bool))(Il2CppBase() + 0x51D8EAC))(this, isIndependentUpdate);
	}
	template <typename T = uintptr_t> T SetUpdate_1(uintptr_t updateType, bool isIndependentUpdate) {
		return ((T (*)(TweenParams*, uintptr_t, bool))(Il2CppBase() + 0x51D8F70))(this, updateType, isIndependentUpdate);
	}
	template <typename T = uintptr_t> T OnStart(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8F7C))(this, action);
	}
	template <typename T = uintptr_t> T OnPlay(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8F84))(this, action);
	}
	template <typename T = uintptr_t> T OnRewind(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8F8C))(this, action);
	}
	template <typename T = uintptr_t> T OnUpdate(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8F94))(this, action);
	}
	template <typename T = uintptr_t> T OnStepComplete(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8F9C))(this, action);
	}
	template <typename T = uintptr_t> T OnComplete(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8FA4))(this, action);
	}
	template <typename T = uintptr_t> T OnKill(uintptr_t action) {
		return ((T (*)(TweenParams*, uintptr_t))(Il2CppBase() + 0x51D8FAC))(this, action);
	}
	template <typename T = uintptr_t> T OnWaypointChange(void* action) {
		return ((T (*)(TweenParams*, void*))(Il2CppBase() + 0x51D8FB4))(this, action);
	}
	template <typename T = uintptr_t> T SetDelay(float delay) {
		return ((T (*)(TweenParams*, float))(Il2CppBase() + 0x51D8FBC))(this, delay);
	}
	template <typename T = uintptr_t> T SetRelative(bool isRelative) {
		return ((T (*)(TweenParams*, bool))(Il2CppBase() + 0x51D8FC4))(this, isRelative);
	}
	template <typename T = uintptr_t> T SetSpeedBased(bool isSpeedBased) {
		return ((T (*)(TweenParams*, bool))(Il2CppBase() + 0x51D8FCC))(this, isSpeedBased);
	}

};

}
