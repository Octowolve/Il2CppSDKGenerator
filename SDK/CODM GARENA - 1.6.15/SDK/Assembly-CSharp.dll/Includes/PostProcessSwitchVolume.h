#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostProcessSwitchVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostProcessSwitchVolume"));
	}

	template <typename T = uintptr_t> T& profile() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PostProcessSwitchVolume*))(Il2CppBase() + 0x48006A8))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(PostProcessSwitchVolume*, uintptr_t, bool))(Il2CppBase() + 0x4800798))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PostProcessSwitchVolume*))(Il2CppBase() + 0x48008F4))(this);
	}

};

}
