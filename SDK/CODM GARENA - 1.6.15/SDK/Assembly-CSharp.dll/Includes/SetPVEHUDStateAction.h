#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPVEHUDStateAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetPVEHUDStateAction"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecretMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SetPVEHUDStateAction*))(Il2CppBase() + 0x3C0B6B4))(this);
	}
	template <typename T = void> T PlaySecretMessage(uintptr_t stateValue, uintptr_t stateValue2, uintptr_t stateValue3, bool bPrinter) {
		return ((T (*)(SetPVEHUDStateAction*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3C0DDFC))(this, stateValue, stateValue2, stateValue3, bPrinter);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(SetPVEHUDStateAction*))(Il2CppBase() + 0x3C0E2A4))(this);
	}

};

}
