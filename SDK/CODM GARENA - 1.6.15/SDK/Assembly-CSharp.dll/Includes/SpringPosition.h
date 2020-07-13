#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpringPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpringPosition"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& strength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& worldSpace() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ignoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& updateScrollView() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& callWhenFinished() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mThreshold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mSv() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyListeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpringPosition*))(Il2CppBase() + 0x42ECBF0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SpringPosition*))(Il2CppBase() + 0x42ECD1C))(this);
	}
	template <typename T = void> T ResetThreshold() {
		return ((T (*)(SpringPosition*))(Il2CppBase() + 0x42ECDC0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpringPosition*))(Il2CppBase() + 0x42ECE64))(this);
	}
	template <typename T = void> T NotifyListeners() {
		return ((T (*)(SpringPosition*))(Il2CppBase() + 0x42ED344))(this);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, Il2CppVector3 pos, float strength) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x42ED58C))(0, go, pos, strength);
	}

};

}
