#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckMoveForwardAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheckMoveForwardAction"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnUpdate() {
		return ((T (*)(CheckMoveForwardAction*))(Il2CppBase() + 0x3A20A58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(CheckMoveForwardAction*))(Il2CppBase() + 0x3A20D54))(this);
	}

};

}
