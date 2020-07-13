#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageSelection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageSelection"));
	}

	template <typename T = uintptr_t> T& mList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LanguageSelection*))(Il2CppBase() + 0x492C87C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LanguageSelection*))(Il2CppBase() + 0x492CC28))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(LanguageSelection*))(Il2CppBase() + 0x492C948))(this);
	}
	template <typename T = void> static T Startm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x492CD98))(0);
	}

};

}
