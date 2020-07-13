#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FixedPointMoveCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FixedPointMoveCamera"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& MoveCfg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MoveCurve() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RotateCurve() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mIsMoving() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mEscapedTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& mStartPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mStartRot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& mMoveOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& mRotateOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mDefaultPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& mDefaultRot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FixedPointMoveCamera*))(Il2CppBase() + 0x3676058))(this);
	}
	template <typename T = void> T Move(Il2CppVector3 newPos, Il2CppVector3 newRot, float duration) {
		return ((T (*)(FixedPointMoveCamera*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x36761A4))(this, newPos, newRot, duration);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FixedPointMoveCamera*))(Il2CppBase() + 0x3676450))(this);
	}
	template <typename T = void> T Play(Il2CppString* name, uintptr_t callback) {
		return ((T (*)(FixedPointMoveCamera*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x36766D4))(this, name, callback);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FixedPointMoveCamera*))(Il2CppBase() + 0x3676898))(this);
	}

};

}
