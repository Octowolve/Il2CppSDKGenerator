#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateItemStateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateItemStateListener"));
	}

	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRTeamMateItemStateListener*))(Il2CppBase() + 0x3DD5720))(this);
	}

};

}
