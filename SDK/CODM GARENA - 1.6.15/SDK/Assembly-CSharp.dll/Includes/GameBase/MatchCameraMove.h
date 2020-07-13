#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchCameraMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchCameraMove"));
	}

	template <typename T = uintptr_t> static T& Cached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& MoveCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bHasPlayOnce() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bStart() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> static T& PROTECT_FINISH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraAndUIVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProtectFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnRoundStart() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AE264))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AE5C8))(this);
	}
	template <typename T = uintptr_t> T GetUIRoot() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AE7B0))(this);
	}
	template <typename T = void> T SetCameraAndUIVisible(bool bVisible) {
		return ((T (*)(MatchCameraMove*, bool))(Il2CppBase() + 0x19AE974))(this, bVisible);
	}
	template <typename T = uintptr_t> T DelayHide() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AED88))(this);
	}
	template <typename T = void> T MoveStart() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AEE70))(this);
	}
	template <typename T = void> T MoveFinish() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AE310))(this);
	}
	template <typename T = void> T ProtectFinish() {
		return ((T (*)(MatchCameraMove*))(Il2CppBase() + 0x19AF184))(this);
	}

};

}
