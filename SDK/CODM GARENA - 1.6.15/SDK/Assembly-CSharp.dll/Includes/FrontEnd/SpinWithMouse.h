#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SpinWithMouse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SpinWithMouse"));
	}

	template <typename T = bool> T& m_SmoothRotate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_MinSpin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MaxSpin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_CurrentOmega() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TargetOmega() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpinWithMouse*))(Il2CppBase() + 0x3867768))(this);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(SpinWithMouse*, Il2CppVector2))(Il2CppBase() + 0x3867820))(this, delta);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(SpinWithMouse*))(Il2CppBase() + 0x38678EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpinWithMouse*))(Il2CppBase() + 0x38679D4))(this);
	}

};

}
