#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIPerspectiveSelectEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIPerspectiveSelectEffect"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& kDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& kHighPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> static T& kHighScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& mTwScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mTwPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPerspectiveSelectEffect*))(Il2CppBase() + 0x3B01C58))(this);
	}
	template <typename T = void> T CreateTween() {
		return ((T (*)(UIPerspectiveSelectEffect*))(Il2CppBase() + 0x3B01D2C))(this);
	}
	template <typename T = void> T ConfigureTween(bool forward) {
		return ((T (*)(UIPerspectiveSelectEffect*, bool))(Il2CppBase() + 0x3B01F8C))(this, forward);
	}
	template <typename T = void> T Play(bool forward) {
		return ((T (*)(UIPerspectiveSelectEffect*, bool))(Il2CppBase() + 0x3B02364))(this, forward);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(UIPerspectiveSelectEffect*))(Il2CppBase() + 0x3B025B0))(this);
	}

};

}
