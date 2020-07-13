#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterLadderBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterLadderBtnView"));
	}

	template <typename T = uintptr_t> T& EnterLadderBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(EnterLadderBtnView*))(Il2CppBase() + 0x4BCFBC4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(EnterLadderBtnView*))(Il2CppBase() + 0x4BCFBCC))(this);
	}
	template <typename T = uint64_t> T GetActiveGameHudState() {
		return ((T (*)(EnterLadderBtnView*))(Il2CppBase() + 0x4BCFBE0))(this);
	}
	template <typename T = uint64_t> T xLuaBaseProxy_GetActiveGameHudState() {
		return ((T (*)(EnterLadderBtnView*))(Il2CppBase() + 0x4BCFC84))(this);
	}

};

}
