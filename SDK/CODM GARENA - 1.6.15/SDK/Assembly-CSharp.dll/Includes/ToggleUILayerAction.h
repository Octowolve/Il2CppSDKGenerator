#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToggleUILayerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleUILayerAction"));
	}

	template <typename T = Il2CppString*> T& layer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& toggle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ToggleUILayerAction*))(Il2CppBase() + 0x49675C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(ToggleUILayerAction*))(Il2CppBase() + 0x4967680))(this);
	}

};

}
