#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameProfiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameProfiler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllSampleEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDeepSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BeginDeepSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndDeepSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T SetAllSampleEnabled(bool enabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2551DC4))(0, enabled);
	}
	template <typename T = void> static T BeginDeepSample(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2551E5C))(0, format, args);
	}
	template <typename T = void> static T BeginDeepSample_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2551EFC))(0, obj);
	}
	template <typename T = void> static T EndDeepSample() {
		return ((T (*)(void *))(Il2CppBase() + 0x2551F94))(0);
	}
	template <typename T = void> static T BeginSample(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2552024))(0, name);
	}
	template <typename T = void> static T EndSample() {
		return ((T (*)(void *))(Il2CppBase() + 0x25520BC))(0);
	}

};

}
