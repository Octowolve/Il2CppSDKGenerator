#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenTransform"));
	}

	template <typename T = uintptr_t> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& parentWhenFinished() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& mPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppQuaternion> T& mRot() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& mScale() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenTransform*, float, bool))(Il2CppBase() + 0x425776C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x4257E30))(0, go, duration, to);
	}
	template <typename T = uintptr_t> static T Begin_1(uintptr_t go, float duration, uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4257F00))(0, go, duration, from, to);
	}

};

}
