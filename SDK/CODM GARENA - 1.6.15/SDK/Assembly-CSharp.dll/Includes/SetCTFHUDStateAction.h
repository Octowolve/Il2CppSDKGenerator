#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetCTFHUDStateAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetCTFHUDStateAction"));
	}

	template <typename T = uintptr_t> T& hudState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stateValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& stateValue2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& stateValue3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SetCTFHUDStateAction*))(Il2CppBase() + 0x3C0AB28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(SetCTFHUDStateAction*))(Il2CppBase() + 0x3C0B3A4))(this);
	}

};

}
