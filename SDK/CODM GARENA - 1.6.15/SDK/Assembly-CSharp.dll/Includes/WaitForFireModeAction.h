#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForFireModeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaitForFireModeAction"));
	}

	template <typename T = uintptr_t> T& FireMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnUpdate() {
		return ((T (*)(WaitForFireModeAction*))(Il2CppBase() + 0x48906B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(WaitForFireModeAction*))(Il2CppBase() + 0x4890800))(this);
	}

};

}
