#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CDKeyExchangeMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CDKeyExchangeMainView"));
	}

	template <typename T = uintptr_t> T& BtnTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BtnExchange() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Input() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& RED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& WHITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCDKeyColorRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCDKeyColorWHITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T ResetUI() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291A850))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291E92C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291EA04))(this);
	}
	template <typename T = void> T SetCDKeyColorRed() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291D964))(this);
	}
	template <typename T = void> T SetCDKeyColorWHITE() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291E7C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291EBE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainView*))(Il2CppBase() + 0x291EBEC))(this);
	}

};

}
