#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRChipMachineSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRChipMachineSignboard"));
	}

	template <typename T = float> T& max_scale() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& min_scale() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& showDistance() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& maxScaleDistance() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_Machine() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> static T& m_RaycastIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Off() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& On() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CheckNear() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87444))(this);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87A3C))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87ADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNear() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87B84))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedClamp() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87B8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLabelImpl() {
		return ((T (*)(BRChipMachineSignboard*))(Il2CppBase() + 0x2D87B94))(this);
	}

};

}
