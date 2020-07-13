#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGrenadeEndRoundHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGrenadeEndRoundHud"));
	}

	template <typename T = uintptr_t> T& WinWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LoseWidget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ResultLabels() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Win() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Win() {
		return ((T (*)(SPGrenadeEndRoundHud*))(Il2CppBase() + 0x391C848))(this);
	}
	template <typename T = void> T Lose() {
		return ((T (*)(SPGrenadeEndRoundHud*))(Il2CppBase() + 0x391CA7C))(this);
	}
	template <typename T = void> T SetText(Il2CppString* str) {
		return ((T (*)(SPGrenadeEndRoundHud*, Il2CppString*))(Il2CppBase() + 0x391E4D8))(this, str);
	}

};

}
