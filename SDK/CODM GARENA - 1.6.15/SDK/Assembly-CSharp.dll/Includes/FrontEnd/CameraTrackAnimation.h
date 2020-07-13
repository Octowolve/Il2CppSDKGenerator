#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CameraTrackAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CameraTrackAnimation"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& TrajectoryPoints() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& AutoPlayNext() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CurrIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& mDefaultPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& mDefaultRot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mPosTweener() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mRotTweener() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mCacheTransform() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mEventDelegate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteOnFinishCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CameraTrackAnimation*))(Il2CppBase() + 0x28FA704))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CameraTrackAnimation*))(Il2CppBase() + 0x28FA91C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CameraTrackAnimation*))(Il2CppBase() + 0x28FAA5C))(this);
	}
	template <typename T = void> T Move(uintptr_t from, uintptr_t to) {
		return ((T (*)(CameraTrackAnimation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28FAB24))(this, from, to);
	}
	template <typename T = void> T Play() {
		return ((T (*)(CameraTrackAnimation*))(Il2CppBase() + 0x28FAE34))(this);
	}
	template <typename T = void> T ExecuteOnFinishCallBack() {
		return ((T (*)(CameraTrackAnimation*))(Il2CppBase() + 0x28FB05C))(this);
	}

};

}
