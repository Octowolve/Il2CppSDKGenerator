#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToggleSplineMoveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleSplineMoveVolume"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& splineMoveList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ToggleSplineMoveVolume*))(Il2CppBase() + 0x49670B4))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t localPawn, bool enter) {
		return ((T (*)(ToggleSplineMoveVolume*, uintptr_t, bool))(Il2CppBase() + 0x4967320))(this, localPawn, enter);
	}
	template <typename T = bool> static T Awakem__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496746C))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ToggleSplineMoveVolume*))(Il2CppBase() + 0x4967518))(this);
	}

};

}
