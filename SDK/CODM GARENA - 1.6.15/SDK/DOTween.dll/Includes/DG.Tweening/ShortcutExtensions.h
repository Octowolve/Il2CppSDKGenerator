#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class ShortcutExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "ShortcutExtensions"));
	}


	template <typename T = uintptr_t> static T DOFade(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C2260))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOPitch(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C245C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOAspect(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C262C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOColor(uintptr_t target, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C27FC))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOFarClipPlane(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C29E0))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOFieldOfView(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C2BA8))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DONearClipPlane(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C2D70))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOOrthoSize(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C2F38))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOPixelRect(uintptr_t target, Il2CppRect endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, float))(Il2CppBase() + 0x44C3100))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DORect(uintptr_t target, Il2CppRect endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, float))(Il2CppBase() + 0x44C32E4))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOShakePosition(uintptr_t target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t, float, bool))(Il2CppBase() + 0x44C34C8))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakePosition_1(uintptr_t target, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, int32_t, float, bool))(Il2CppBase() + 0x44C36E0))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeRotation(uintptr_t target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t, float, bool))(Il2CppBase() + 0x44C38FC))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeRotation_1(uintptr_t target, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, int32_t, float, bool))(Il2CppBase() + 0x44C3B14))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOColor_1(uintptr_t target, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C3D30))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOIntensity(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C3F1C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOShadowStrength(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C40EC))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOColor_2(uintptr_t target, uintptr_t startValue, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C42BC))(0, target, startValue, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOColor_3(uintptr_t target, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C4504))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOColor_4(uintptr_t target, uintptr_t endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x44C46F0))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOFade_1(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C4940))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOFade_2(uintptr_t target, float endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, float, Il2CppString*, float))(Il2CppBase() + 0x44C4B08))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOFloat(uintptr_t target, float endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, float, Il2CppString*, float))(Il2CppBase() + 0x44C4D34))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOOffset(uintptr_t target, Il2CppVector2 endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x44C4F60))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOOffset_1(uintptr_t target, Il2CppVector2 endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, Il2CppString*, float))(Il2CppBase() + 0x44C5134))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOTiling(uintptr_t target, Il2CppVector2 endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x44C536C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOTiling_1(uintptr_t target, Il2CppVector2 endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, Il2CppString*, float))(Il2CppBase() + 0x44C5540))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOVector(uintptr_t target, uintptr_t endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x44C5778))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOMove(uintptr_t target, Il2CppVector3 endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x44C59C0))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveX(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C5BB4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveY(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C5DD8))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveZ(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C5FFC))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DORotate(uintptr_t target, Il2CppVector3 endValue, float duration, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x44C6220))(0, target, endValue, duration, mode);
	}
	template <typename T = uintptr_t> static T DOLookAt(uintptr_t target, Il2CppVector3 towards, float duration, uintptr_t axisConstraint, void* up) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t, void*))(Il2CppBase() + 0x44C6414))(0, target, towards, duration, axisConstraint, up);
	}
	template <typename T = uintptr_t> static T DOJump(uintptr_t target, Il2CppVector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float, bool))(Il2CppBase() + 0x44C66C0))(0, target, endValue, jumpPower, numJumps, duration, snapping);
	}
	template <typename T = void*> static T DOPath(uintptr_t target, Il2CppArray<uintptr_t>* path, float duration, uintptr_t pathType, uintptr_t pathMode, int32_t resolution, void* gizmoColor) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x44C6C5C))(0, target, path, duration, pathType, pathMode, resolution, gizmoColor);
	}
	template <typename T = void*> static T DOLocalPath(uintptr_t target, Il2CppArray<uintptr_t>* path, float duration, uintptr_t pathType, uintptr_t pathMode, int32_t resolution, void* gizmoColor) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x44C6EE4))(0, target, path, duration, pathType, pathMode, resolution, gizmoColor);
	}
	template <typename T = void*> static T DOPath_1(uintptr_t target, uintptr_t path, float duration, uintptr_t pathMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44C7184))(0, target, path, duration, pathMode);
	}
	template <typename T = void*> static T DOLocalPath_1(uintptr_t target, uintptr_t path, float duration, uintptr_t pathMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44C7394))(0, target, path, duration, pathMode);
	}
	template <typename T = uintptr_t> static T DOResize(uintptr_t target, float toStartWidth, float toEndWidth, float duration) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x44C75B4))(0, target, toStartWidth, toEndWidth, duration);
	}
	template <typename T = uintptr_t> static T DOTime(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C77AC))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOMove_1(uintptr_t target, Il2CppVector3 endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x44C7974))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveX_1(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C7B64))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveY_1(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C7D84))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOMoveZ_1(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C7FA4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOLocalMove(uintptr_t target, Il2CppVector3 endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x44C81C4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOLocalMoveX(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C83B4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOLocalMoveY(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C85D4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOLocalMoveZ(uintptr_t target, float endValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, float, float, bool))(Il2CppBase() + 0x44C87F4))(0, target, endValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DORotate_1(uintptr_t target, Il2CppVector3 endValue, float duration, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x44C8A14))(0, target, endValue, duration, mode);
	}
	template <typename T = uintptr_t> static T DORotateQuaternion(uintptr_t target, Il2CppQuaternion endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, float))(Il2CppBase() + 0x44C8C04))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOLocalRotate(uintptr_t target, Il2CppVector3 endValue, float duration, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x44C8E18))(0, target, endValue, duration, mode);
	}
	template <typename T = uintptr_t> static T DOLocalRotateQuaternion(uintptr_t target, Il2CppQuaternion endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, float))(Il2CppBase() + 0x44C9008))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOScale(uintptr_t target, Il2CppVector3 endValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x44C921C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOScale_1(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C93F8))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOScaleX(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C95F8))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOScaleY(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C9818))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOScaleZ(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44C9A38))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOLookAt_1(uintptr_t target, Il2CppVector3 towards, float duration, uintptr_t axisConstraint, void* up) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t, void*))(Il2CppBase() + 0x44C9C58))(0, target, towards, duration, axisConstraint, up);
	}
	template <typename T = uintptr_t> static T DOPunchPosition(uintptr_t target, Il2CppVector3 punch, float duration, int32_t vibrato, float elasticity, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float, bool))(Il2CppBase() + 0x44C9F00))(0, target, punch, duration, vibrato, elasticity, snapping);
	}
	template <typename T = uintptr_t> static T DOPunchScale(uintptr_t target, Il2CppVector3 punch, float duration, int32_t vibrato, float elasticity) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float))(Il2CppBase() + 0x44CA100))(0, target, punch, duration, vibrato, elasticity);
	}
	template <typename T = uintptr_t> static T DOPunchRotation(uintptr_t target, Il2CppVector3 punch, float duration, int32_t vibrato, float elasticity) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float))(Il2CppBase() + 0x44CA2EC))(0, target, punch, duration, vibrato, elasticity);
	}
	template <typename T = uintptr_t> static T DOShakePosition_2(uintptr_t target, float duration, float strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t, float, bool, bool))(Il2CppBase() + 0x44CA4D8))(0, target, duration, strength, vibrato, randomness, snapping, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakePosition_3(uintptr_t target, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, int32_t, float, bool, bool))(Il2CppBase() + 0x44CA6FC))(0, target, duration, strength, vibrato, randomness, snapping, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeRotation_2(uintptr_t target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t, float, bool))(Il2CppBase() + 0x44CA924))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeRotation_3(uintptr_t target, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, int32_t, float, bool))(Il2CppBase() + 0x44CAB34))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeScale(uintptr_t target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t, float, bool))(Il2CppBase() + 0x44CAD48))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOShakeScale_1(uintptr_t target, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, int32_t, float, bool))(Il2CppBase() + 0x44CAF58))(0, target, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = uintptr_t> static T DOJump_1(uintptr_t target, Il2CppVector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float, bool))(Il2CppBase() + 0x44CB16C))(0, target, endValue, jumpPower, numJumps, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOLocalJump(uintptr_t target, Il2CppVector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, int32_t, float, bool))(Il2CppBase() + 0x44CB704))(0, target, endValue, jumpPower, numJumps, duration, snapping);
	}
	template <typename T = void*> static T DOPath_2(uintptr_t target, Il2CppArray<uintptr_t>* path, float duration, uintptr_t pathType, uintptr_t pathMode, int32_t resolution, void* gizmoColor) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x44CBC9C))(0, target, path, duration, pathType, pathMode, resolution, gizmoColor);
	}
	template <typename T = void*> static T DOLocalPath_2(uintptr_t target, Il2CppArray<uintptr_t>* path, float duration, uintptr_t pathType, uintptr_t pathMode, int32_t resolution, void* gizmoColor) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x44CBEFC))(0, target, path, duration, pathType, pathMode, resolution, gizmoColor);
	}
	template <typename T = void*> static T DOPath_3(uintptr_t target, uintptr_t path, float duration, uintptr_t pathMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44CC164))(0, target, path, duration, pathMode);
	}
	template <typename T = void*> static T DOLocalPath_3(uintptr_t target, uintptr_t path, float duration, uintptr_t pathMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44CC364))(0, target, path, duration, pathMode);
	}
	template <typename T = uintptr_t> static T DOTimeScale(uintptr_t target, float endValue, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x44CC56C))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOBlendableColor(uintptr_t target, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44CC734))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOBlendableColor_1(uintptr_t target, uintptr_t endValue, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44CC9C8))(0, target, endValue, duration);
	}
	template <typename T = uintptr_t> static T DOBlendableColor_2(uintptr_t target, uintptr_t endValue, Il2CppString* property, float duration) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x44CCC5C))(0, target, endValue, property, duration);
	}
	template <typename T = uintptr_t> static T DOBlendableMoveBy(uintptr_t target, Il2CppVector3 byValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x44CCF5C))(0, target, byValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOBlendableLocalMoveBy(uintptr_t target, Il2CppVector3 byValue, float duration, bool snapping) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x44CD190))(0, target, byValue, duration, snapping);
	}
	template <typename T = uintptr_t> static T DOBlendableRotateBy(uintptr_t target, Il2CppVector3 byValue, float duration, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x44CD3C4))(0, target, byValue, duration, mode);
	}
	template <typename T = uintptr_t> static T DOBlendableLocalRotateBy(uintptr_t target, Il2CppVector3 byValue, float duration, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x44CD5EC))(0, target, byValue, duration, mode);
	}
	template <typename T = uintptr_t> static T DOBlendableScaleBy(uintptr_t target, Il2CppVector3 byValue, float duration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x44CD814))(0, target, byValue, duration);
	}
	template <typename T = int32_t> static T DOComplete(uintptr_t target, bool withCallbacks) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CDA34))(0, target, withCallbacks);
	}
	template <typename T = int32_t> static T DOComplete_1(uintptr_t target, bool withCallbacks) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CDADC))(0, target, withCallbacks);
	}
	template <typename T = int32_t> static T DOKill(uintptr_t target, bool complete) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CDB84))(0, target, complete);
	}
	template <typename T = int32_t> static T DOKill_1(uintptr_t target, bool complete) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CDC2C))(0, target, complete);
	}
	template <typename T = int32_t> static T DOFlip(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CDCD4))(0, target);
	}
	template <typename T = int32_t> static T DOFlip_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CDD74))(0, target);
	}
	template <typename T = int32_t> static T DOGoto(uintptr_t target, float to, bool andPlay) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x44CDE14))(0, target, to, andPlay);
	}
	template <typename T = int32_t> static T DOGoto_1(uintptr_t target, float to, bool andPlay) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x44CDECC))(0, target, to, andPlay);
	}
	template <typename T = int32_t> static T DOPause(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CDF84))(0, target);
	}
	template <typename T = int32_t> static T DOPause_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE024))(0, target);
	}
	template <typename T = int32_t> static T DOPlay(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE0C4))(0, target);
	}
	template <typename T = int32_t> static T DOPlay_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE164))(0, target);
	}
	template <typename T = int32_t> static T DOPlayBackwards(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE204))(0, target);
	}
	template <typename T = int32_t> static T DOPlayBackwards_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE2A4))(0, target);
	}
	template <typename T = int32_t> static T DOPlayForward(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE344))(0, target);
	}
	template <typename T = int32_t> static T DOPlayForward_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE3E4))(0, target);
	}
	template <typename T = int32_t> static T DORestart(uintptr_t target, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CE484))(0, target, includeDelay);
	}
	template <typename T = int32_t> static T DORestart_1(uintptr_t target, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CE53C))(0, target, includeDelay);
	}
	template <typename T = int32_t> static T DORewind(uintptr_t target, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CE5F4))(0, target, includeDelay);
	}
	template <typename T = int32_t> static T DORewind_1(uintptr_t target, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44CE69C))(0, target, includeDelay);
	}
	template <typename T = int32_t> static T DOSmoothRewind(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE744))(0, target);
	}
	template <typename T = int32_t> static T DOSmoothRewind_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE7E4))(0, target);
	}
	template <typename T = int32_t> static T DOTogglePause(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE884))(0, target);
	}
	template <typename T = int32_t> static T DOTogglePause_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CE924))(0, target);
	}

};

}
