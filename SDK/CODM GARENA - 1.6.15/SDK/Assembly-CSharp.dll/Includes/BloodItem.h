#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodItem"));
	}

	template <typename T = Il2CppVector3> T& Source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Update(float dt, float fadeOutTime) {
		return ((T (*)(BloodItem*, float, float))(Il2CppBase() + 0x3D995F8))(this, dt, fadeOutTime);
	}
	template <typename T = void> T Init(Il2CppVector3 source, float time) {
		return ((T (*)(BloodItem*, Il2CppVector3, float))(Il2CppBase() + 0x3D9A328))(this, source, time);
	}
	template <typename T = void> T CalcRotation() {
		return ((T (*)(BloodItem*))(Il2CppBase() + 0x3D9A450))(this);
	}
	template <typename T = void> T UpdateRotation() {
		return ((T (*)(BloodItem*))(Il2CppBase() + 0x3D99D30))(this);
	}
	template <typename T = void> T SetButtonEvent() {
		return ((T (*)(BloodItem*))(Il2CppBase() + 0x3D99044))(this);
	}
	template <typename T = void> T SetButtonEventm__0(uintptr_t go) {
		return ((T (*)(BloodItem*, uintptr_t))(Il2CppBase() + 0x3D9A658))(this, go);
	}

};

}
