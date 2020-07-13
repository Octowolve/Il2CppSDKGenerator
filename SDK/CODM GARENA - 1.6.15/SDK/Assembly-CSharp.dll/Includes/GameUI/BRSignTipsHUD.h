#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSignTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSignTipsHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSignTipsHUD*))(Il2CppBase() + 0x3DBEB98))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSignTipsHUD*))(Il2CppBase() + 0x3DBEBA0))(this);
	}

};

}
