#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class Tween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "Tween"));
	}

	template <typename T = float> T& timeScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isBackwards() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& updateType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isIndependentUpdate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& onPlay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onPause() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onRewind() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onUpdate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& onStepComplete() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onComplete() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& onKill() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& onWaypointChange() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isFrom() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isBlendable() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& isRecyclable() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& isSpeedBased() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = bool> T& autoKill() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& loops() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& isRelative() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& customEase() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& easeOvershootOrAmplitude() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& easePeriod() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& typeofT1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& typeofT2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& typeofTPlugOptions() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& isSequenced() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = uintptr_t> T& sequenceParent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& activeId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& specialStartupMode() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& creationLocked() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& startupDone() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& playedOnce() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = float> T& position() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& fullDuration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& completedLoops() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& isPlaying() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isComplete() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = float> T& elapsedDelay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& delayComplete() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& miscInt() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = float> T get_fullPosition() {
		return ((T (*)(Tween*))(Il2CppBase() + 0x51D5164))(this);
	}
	template <typename T = void> T set_fullPosition(float value) {
		return ((T (*)(Tween*, float))(Il2CppBase() + 0x51D5278))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Tween*))(Il2CppBase() + 0x51D5478))(this);
	}
	template <typename T = bool> T Validate() {
		return ((T (*)(Tween*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T UpdateDelay(float elapsed) {
		return ((T (*)(Tween*, float))(Il2CppBase() + 0x51D5504))(this, elapsed);
	}
	template <typename T = bool> T Startup() {
		return ((T (*)(Tween*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, uintptr_t updateMode, uintptr_t updateNotice) {
		return ((T (*)(Tween*, float, int32_t, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
	}
	template <typename T = bool> static T DoGoto(uintptr_t t, float toPosition, int32_t toCompletedLoops, uintptr_t updateMode) {
		return ((T (*)(void *, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x51D550C))(0, t, toPosition, toCompletedLoops, updateMode);
	}
	template <typename T = bool> static T OnTweenCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D58C4))(0, callback);
	}
	template <typename T = bool> static T OnTweenCallback_1(void* callback, uintptr_t param) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x1B8A6E0))(0, callback, param);
	}

};

}
