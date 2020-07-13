#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowEffectAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowEffectAction"));
	}

	template <typename T = Il2CppString*> T& assetIDString() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& effectObejct() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ShowEffectAction*))(Il2CppBase() + 0x38DBC90))(this);
	}
	template <typename T = void> T OnEnterm__0(uintptr_t effect) {
		return ((T (*)(ShowEffectAction*, uintptr_t))(Il2CppBase() + 0x38DBED8))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(ShowEffectAction*))(Il2CppBase() + 0x38DBFE0))(this);
	}

};

}
