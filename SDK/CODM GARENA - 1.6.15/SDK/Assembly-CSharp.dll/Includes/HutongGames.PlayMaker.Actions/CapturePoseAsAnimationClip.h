#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CapturePoseAsAnimationClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CapturePoseAsAnimationClip"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& scale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeAnimationClip() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CapturePoseAsAnimationClip*))(Il2CppBase() + 0x4F391E0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CapturePoseAsAnimationClip*))(Il2CppBase() + 0x4F39238))(this);
	}
	template <typename T = void> T DoCaptureAnimationClip() {
		return ((T (*)(CapturePoseAsAnimationClip*))(Il2CppBase() + 0x4F39258))(this);
	}
	template <typename T = void> T CaptureTransform(uintptr_t transform, Il2CppString* path, uintptr_t clip) {
		return ((T (*)(CapturePoseAsAnimationClip*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4F3975C))(this, transform, path, clip);
	}
	template <typename T = void> T CapturePosition(uintptr_t transform, Il2CppString* path, uintptr_t clip) {
		return ((T (*)(CapturePoseAsAnimationClip*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4F39CA4))(this, transform, path, clip);
	}
	template <typename T = void> T CaptureRotation(uintptr_t transform, Il2CppString* path, uintptr_t clip) {
		return ((T (*)(CapturePoseAsAnimationClip*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4F39DD0))(this, transform, path, clip);
	}
	template <typename T = void> T CaptureScale(uintptr_t transform, Il2CppString* path, uintptr_t clip) {
		return ((T (*)(CapturePoseAsAnimationClip*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4F39F30))(this, transform, path, clip);
	}
	template <typename T = void> T SetConstantCurve(uintptr_t clip, Il2CppString* childPath, Il2CppString* propertyPath, float value) {
		return ((T (*)(CapturePoseAsAnimationClip*, uintptr_t, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x4F3A05C))(this, clip, childPath, propertyPath, value);
	}

};

}
