#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SafeInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SafeInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SafeInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_SafeInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeBeginInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T SafeInvoke(uintptr_t act) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A13254))(0, act);
	}
	template <typename T = void> static T SafeInvoke_1(void* act, uintptr_t arg) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x1E7B5AC))(0, act, arg);
	}
	template <typename T = void> static T SafeInvoke_2(void* act, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7B478))(0, act, arg1, arg2);
	}
	template <typename T = void> static T SafeInvoke_3(void* act, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7B318))(0, act, arg1, arg2, arg3);
	}
	template <typename T = void> static T SafeInvoke_4(void* act, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7B198))(0, act, arg1, arg2, arg3, arg4);
	}
	template <typename T = void> static T SafeBeginInvoke(uintptr_t act) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A13304))(0, act);
	}

};

}
