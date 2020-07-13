#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ZMGoldAddNumberHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ZMGoldAddNumberHUD"));
	}

	template <typename T = uintptr_t> T& Widget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& YOffsetRandom() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& XOffsetRandom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& INTERVAL_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_ShowTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Unused() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PositionTween() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_UseTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_UseCounting() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T CanUse() {
		return ((T (*)(ZMGoldAddNumberHUD*))(Il2CppBase() + 0x49EDBF0))(this);
	}
	template <typename T = void> T Begin(int32_t value) {
		return ((T (*)(ZMGoldAddNumberHUD*, int32_t))(Il2CppBase() + 0x49EDC98))(this, value);
	}
	template <typename T = void> T OnFinish() {
		return ((T (*)(ZMGoldAddNumberHUD*))(Il2CppBase() + 0x49EE1D0))(this);
	}
	template <typename T = void> T BeginUse() {
		return ((T (*)(ZMGoldAddNumberHUD*))(Il2CppBase() + 0x49EE0D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMGoldAddNumberHUD*))(Il2CppBase() + 0x49EE2C8))(this);
	}

};

}
