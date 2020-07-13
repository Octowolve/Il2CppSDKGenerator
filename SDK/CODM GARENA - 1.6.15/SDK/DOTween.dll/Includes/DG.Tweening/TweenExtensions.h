#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class TweenExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "TweenExtensions"));
	}


	template <typename T = void> static T Complete(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D5E20))(0, t);
	}
	template <typename T = void> static T Complete_1(uintptr_t t, bool withCallbacks) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D5E28))(0, t, withCallbacks);
	}
	template <typename T = void> static T Flip(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D5FD0))(0, t);
	}
	template <typename T = void> static T ForceInit(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D6154))(0, t);
	}
	template <typename T = void> static T Goto(uintptr_t t, float to, bool andPlay) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x51D529C))(0, t, to, andPlay);
	}
	template <typename T = void> static T Kill(uintptr_t t, bool complete) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D62DC))(0, t, complete);
	}
	template <typename T = uintptr_t> static T Pause(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x334921C))(0, t);
	}
	template <typename T = uintptr_t> static T Play(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33493A0))(0, t);
	}
	template <typename T = void> static T PlayBackwards(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D6538))(0, t);
	}
	template <typename T = void> static T PlayForward(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D66BC))(0, t);
	}
	template <typename T = void> static T Restart(uintptr_t t, bool includeDelay, float changeDelayTo) {
		return ((T (*)(void *, uintptr_t, bool, float))(Il2CppBase() + 0x51D6840))(0, t, includeDelay, changeDelayTo);
	}
	template <typename T = void> static T Rewind(uintptr_t t, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D69E8))(0, t, includeDelay);
	}
	template <typename T = void> static T SmoothRewind(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D6B74))(0, t);
	}
	template <typename T = void> static T TogglePause(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D6CF8))(0, t);
	}
	template <typename T = void> static T GotoWaypoint(uintptr_t t, int32_t waypointIndex, bool andPlay) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x51D6E7C))(0, t, waypointIndex, andPlay);
	}
	template <typename T = uintptr_t> static T WaitForCompletion(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7240))(0, t);
	}
	template <typename T = uintptr_t> static T WaitForRewind(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D738C))(0, t);
	}
	template <typename T = uintptr_t> static T WaitForKill(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D74D8))(0, t);
	}
	template <typename T = uintptr_t> static T WaitForElapsedLoops(uintptr_t t, int32_t elapsedLoops) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x51D7624))(0, t, elapsedLoops);
	}
	template <typename T = uintptr_t> static T WaitForPosition(uintptr_t t, float position) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x51D7778))(0, t, position);
	}
	template <typename T = uintptr_t> static T WaitForStart(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D78CC))(0, t);
	}
	template <typename T = int32_t> static T CompletedLoops(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7A0C))(0, t);
	}
	template <typename T = float> static T Delay(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7ADC))(0, t);
	}
	template <typename T = float> static T Duration(uintptr_t t, bool includeLoops) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D7BB4))(0, t, includeLoops);
	}
	template <typename T = float> static T Elapsed(uintptr_t t, bool includeLoops) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D5170))(0, t, includeLoops);
	}
	template <typename T = float> static T ElapsedPercentage(uintptr_t t, bool includeLoops) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x51D7CC4))(0, t, includeLoops);
	}
	template <typename T = float> static T ElapsedDirectionalPercentage(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D2CC0))(0, t);
	}
	template <typename T = bool> static T IsActive(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7DD4))(0, t);
	}
	template <typename T = bool> static T IsBackwards(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7DF4))(0, t);
	}
	template <typename T = bool> static T IsComplete(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7ECC))(0, t);
	}
	template <typename T = bool> static T IsInitialized(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D7FA4))(0, t);
	}
	template <typename T = bool> static T IsPlaying(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D807C))(0, t);
	}
	template <typename T = int32_t> static T Loops(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D8154))(0, t);
	}
	template <typename T = Il2CppVector3> static T PathGetPoint(uintptr_t t, float pathPercentage) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x51D8224))(0, t, pathPercentage);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T PathGetDrawPoints(uintptr_t t, int32_t subdivisionsXSegment) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x51D84B8))(0, t, subdivisionsXSegment);
	}
	template <typename T = float> static T PathLength(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51D8700))(0, t);
	}

};

}
