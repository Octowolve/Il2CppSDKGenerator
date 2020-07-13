#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class ZombieModeDescWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "ZombieModeDescWindowView"));
	}

	template <typename T = uintptr_t> T& tableModeDesc() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ModeDescItemTemplate() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent() {
		return ((T (*)(ZombieModeDescWindowView*))(Il2CppBase() + 0x446AFF0))(this);
	}

};

}
