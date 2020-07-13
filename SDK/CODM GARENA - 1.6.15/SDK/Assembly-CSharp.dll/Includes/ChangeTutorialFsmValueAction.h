#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeTutorialFsmValueAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeTutorialFsmValueAction"));
	}

	template <typename T = Il2CppString*> T& valueName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ChangeTutorialFsmValueAction*))(Il2CppBase() + 0x1D1E894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(ChangeTutorialFsmValueAction*))(Il2CppBase() + 0x1D1E9F4))(this);
	}

};

}
