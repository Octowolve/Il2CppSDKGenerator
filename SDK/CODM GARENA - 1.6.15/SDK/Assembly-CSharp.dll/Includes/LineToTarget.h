#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LineToTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LineToTarget"));
	}

	template <typename T = uintptr_t> T& Line() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Spot_A() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Spot_B() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ShowOnlyActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_A() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsAOnUI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_OffsetA() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_AttTarget_A() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_AttTargetAlived_A() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_B() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsBOnUI() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_OffsetB() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_AttTarget_B() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_AttTargetAlived_B() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_ShowOnlyActive() {
		return ((T (*)(LineToTarget*))(Il2CppBase() + 0x4939870))(this);
	}
	template <typename T = void> T set_ShowOnlyActive(bool value) {
		return ((T (*)(LineToTarget*, bool))(Il2CppBase() + 0x4939878))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LineToTarget*))(Il2CppBase() + 0x4939880))(this);
	}
	template <typename T = void> T SetTargetA(uintptr_t A, Il2CppVector3 offsetA, bool isOnUI) {
		return ((T (*)(LineToTarget*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x493999C))(this, A, offsetA, isOnUI);
	}
	template <typename T = void> T SetTargetB(uintptr_t B, Il2CppVector3 offsetB, bool isOnUI) {
		return ((T (*)(LineToTarget*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x4939AC0))(this, B, offsetB, isOnUI);
	}
	template <typename T = Il2CppVector3> T GetUIPos(uintptr_t trans, Il2CppVector3 offset, bool isOnUI) {
		return ((T (*)(LineToTarget*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x4939BE4))(this, trans, offset, isOnUI);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LineToTarget*))(Il2CppBase() + 0x493A094))(this);
	}

};

}
