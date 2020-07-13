#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HookAndSlashConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HookAndSlashConfig"));
	}

	template <typename T = uintptr_t> T& hookPrepareAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& hookAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& hookMaxRangeTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& hookBackTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& maxHookRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& hookBackDistance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_totalDuration() {
		return ((T (*)(HookAndSlashConfig*))(Il2CppBase() + 0x4600524))(this);
	}
	template <typename T = float> T get_prepareTime() {
		return ((T (*)(HookAndSlashConfig*))(Il2CppBase() + 0x460056C))(this);
	}
	template <typename T = float> T get_hookTime() {
		return ((T (*)(HookAndSlashConfig*))(Il2CppBase() + 0x460057C))(this);
	}
	template <typename T = float> T get_AbsEndHookTime() {
		return ((T (*)(HookAndSlashConfig*))(Il2CppBase() + 0x460058C))(this);
	}
	template <typename T = float> T get_AbsHookBackTime() {
		return ((T (*)(HookAndSlashConfig*))(Il2CppBase() + 0x46005BC))(this);
	}

};

}
