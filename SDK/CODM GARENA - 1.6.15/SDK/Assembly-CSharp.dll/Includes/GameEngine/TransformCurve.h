#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TransformCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TransformCurve"));
	}

	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Running() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_UseUnscaledTime() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_GetElapsedTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Space() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Pos_X() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Pos_Y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Pos_Z() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Rot_X() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Rot_Y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Rot_Z() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& UseUniqueScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Scale_U() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Scale_X() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Scale_Y() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& Scale_Z() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnscaledElapsedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScaledElapsedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Modify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T GetUnscaledElapsedTime() {
		return ((T (*)(TransformCurve*))(Il2CppBase() + 0x343A94C))(this);
	}
	template <typename T = float> T GetScaledElapsedTime() {
		return ((T (*)(TransformCurve*))(Il2CppBase() + 0x343AA04))(this);
	}
	template <typename T = void> T Begin() {
		return ((T (*)(TransformCurve*))(Il2CppBase() + 0x343AABC))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(TransformCurve*))(Il2CppBase() + 0x343AC5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TransformCurve*))(Il2CppBase() + 0x343AD00))(this);
	}
	template <typename T = void> T Modify(float inElapsedTime) {
		return ((T (*)(TransformCurve*, float))(Il2CppBase() + 0x343AE70))(this, inElapsedTime);
	}

};

}
