#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLocalPlayerVisibilityAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetLocalPlayerVisibilityAction"));
	}

	template <typename T = bool> T& visible() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLocalPlayerVisibilityAction*))(Il2CppBase() + 0x3C0B450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(SetLocalPlayerVisibilityAction*))(Il2CppBase() + 0x3C0B608))(this);
	}

};

}
