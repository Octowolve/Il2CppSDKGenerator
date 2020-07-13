#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PrologueDroppedPickUpConfirmButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PrologueDroppedPickUpConfirmButton"));
	}

	template <typename T = uintptr_t> T& UIEventListener() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUIEventListenerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PrologueDroppedPickUpConfirmButton*))(Il2CppBase() + 0x3A99F4C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PrologueDroppedPickUpConfirmButton*))(Il2CppBase() + 0x3A9A050))(this);
	}
	template <typename T = void> T OnUIEventListenerClick(uintptr_t go) {
		return ((T (*)(PrologueDroppedPickUpConfirmButton*, uintptr_t))(Il2CppBase() + 0x3A9A114))(this, go);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PrologueDroppedPickUpConfirmButton*))(Il2CppBase() + 0x3A9A218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PrologueDroppedPickUpConfirmButton*))(Il2CppBase() + 0x3A9A220))(this);
	}

};

}
