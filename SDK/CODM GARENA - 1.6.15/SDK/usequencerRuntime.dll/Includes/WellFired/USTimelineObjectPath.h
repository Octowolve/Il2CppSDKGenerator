#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineObjectPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineObjectPath"));
	}

	template <typename T = uintptr_t> T& easingType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& shakeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& splineOrientationMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& lookAtTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& lookAtTargetPath() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& sourcePosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& sourceRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& objectSpline() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& keyframes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Shake() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& shakeSpeedPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& shakeRangePosition() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& shakeSpeedRotation() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& shakeRangeRotation() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& seed() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SmoothedQuaternion() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = uintptr_t> T get_EasingType() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877804))(this);
	}
	template <typename T = void> T set_EasingType(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x487780C))(this, value);
	}
	template <typename T = uintptr_t> T get_ShakeType() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877814))(this);
	}
	template <typename T = void> T set_ShakeType(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x487781C))(this, value);
	}
	template <typename T = uintptr_t> T get_SplineOrientationMode() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877824))(this);
	}
	template <typename T = void> T set_SplineOrientationMode(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x487782C))(this, value);
	}
	template <typename T = uintptr_t> T get_LookAtTarget() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877834))(this);
	}
	template <typename T = void> T set_LookAtTarget(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x487783C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_SourcePosition() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877858))(this);
	}
	template <typename T = void> T set_SourcePosition(Il2CppVector3 value) {
		return ((T (*)(USTimelineObjectPath*, Il2CppVector3))(Il2CppBase() + 0x487786C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_SourceRotation() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877878))(this);
	}
	template <typename T = void> T set_SourceRotation(Il2CppQuaternion value) {
		return ((T (*)(USTimelineObjectPath*, Il2CppQuaternion))(Il2CppBase() + 0x4877888))(this, value);
	}
	template <typename T = uintptr_t> T get_ObjectSpline() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778A0))(this);
	}
	template <typename T = void> T set_ObjectSpline(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x48778A8))(this, value);
	}
	template <typename T = float> T get_StartTime() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778B0))(this);
	}
	template <typename T = void> T set_StartTime(float value) {
		return ((T (*)(USTimelineObjectPath*, float))(Il2CppBase() + 0x48778B8))(this, value);
	}
	template <typename T = float> T get_EndTime() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778C0))(this);
	}
	template <typename T = void> T set_EndTime(float value) {
		return ((T (*)(USTimelineObjectPath*, float))(Il2CppBase() + 0x48778C8))(this, value);
	}
	template <typename T = int32_t> T get_Seed() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778D0))(this);
	}
	template <typename T = void> T set_Seed(int32_t value) {
		return ((T (*)(USTimelineObjectPath*, int32_t))(Il2CppBase() + 0x48778D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Keyframes() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778E0))(this);
	}
	template <typename T = void> T set_Keyframes(Il2CppList<uintptr_t>* value) {
		return ((T (*)(USTimelineObjectPath*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x48778E8))(this, value);
	}
	template <typename T = uintptr_t> T get_FirstNode() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877920))(this);
	}
	template <typename T = void> T set_FirstNode(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x48779D0))(this, value);
	}
	template <typename T = uintptr_t> T get_LastNode() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48779D4))(this);
	}
	template <typename T = void> T set_LastNode(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x4877AA0))(this, value);
	}
	template <typename T = uintptr_t> T get_PathColor() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877AA4))(this);
	}
	template <typename T = void> T set_PathColor(uintptr_t value) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x4877AD4))(this, value);
	}
	template <typename T = float> T get_DisplayResolution() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877B00))(this);
	}
	template <typename T = void> T set_DisplayResolution(float value) {
		return ((T (*)(USTimelineObjectPath*, float))(Il2CppBase() + 0x4877B24))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877B4C))(this);
	}
	template <typename T = void> T SetKeyframes(Il2CppList<uintptr_t>* keyframes) {
		return ((T (*)(USTimelineObjectPath*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4877B64))(this, keyframes);
	}
	template <typename T = void> T Build() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877B50))(this);
	}
	template <typename T = void> T BuildShake() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877DCC))(this);
	}
	template <typename T = void> T AddKeyframe(uintptr_t keyframe) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x4877E80))(this, keyframe);
	}
	template <typename T = void> T AddAfterKeyframe(uintptr_t keyframe, int32_t index) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t, int32_t))(Il2CppBase() + 0x4877F28))(this, keyframe, index);
	}
	template <typename T = void> T AddBeforeKeyframe(uintptr_t keyframe, int32_t index) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t, int32_t))(Il2CppBase() + 0x4877FD8))(this, keyframe, index);
	}
	template <typename T = void> T AlterKeyframe(Il2CppVector3 position, int32_t keyframeIndex) {
		return ((T (*)(USTimelineObjectPath*, Il2CppVector3, int32_t))(Il2CppBase() + 0x4878088))(this, position, keyframeIndex);
	}
	template <typename T = void> T RemoveKeyframe(uintptr_t keyframe) {
		return ((T (*)(USTimelineObjectPath*, uintptr_t))(Il2CppBase() + 0x487814C))(this, keyframe);
	}
	template <typename T = void> T BuildCurveFromKeyframes() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48778F0))(this);
	}
	template <typename T = void> T CreateEmpty() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4877B84))(this);
	}
	template <typename T = void> T SetStartingOrientation() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48781F4))(this);
	}
	template <typename T = void> T StartTimeline() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x48783D8))(this);
	}
	template <typename T = void> T StopTimeline() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4878514))(this);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USTimelineObjectPath*, float))(Il2CppBase() + 0x487859C))(this, time);
	}
	template <typename T = void> T Process(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineObjectPath*, float, float))(Il2CppBase() + 0x48785B0))(this, sequencerTime, playbackRate);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4878EC8))(this);
	}
	template <typename T = void> T FixupAdditionalObjects() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4870328))(this);
	}
	template <typename T = void> T RecordAdditionalObjects() {
		return ((T (*)(USTimelineObjectPath*))(Il2CppBase() + 0x4878EE4))(this);
	}

};

}
