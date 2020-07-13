#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMReviveHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMReviveHud"));
	}

	template <typename T = uintptr_t> T& TargetArrow() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ReviveSlider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& mTaragetPostion() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& IsStart() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& CurDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ZMReviveHud*))(Il2CppBase() + 0x4DDBED8))(this);
	}
	template <typename T = void> T UpdateSlider() {
		return ((T (*)(ZMReviveHud*))(Il2CppBase() + 0x4DDC01C))(this);
	}
	template <typename T = void> T UpdateTargetArraw(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(ZMReviveHud*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x4DDC148))(this, worldPos, clampRect);
	}
	template <typename T = void> T StartShow(uintptr_t reviveInfo) {
		return ((T (*)(ZMReviveHud*, uintptr_t))(Il2CppBase() + 0x4DDAFFC))(this, reviveInfo);
	}

};

}
