#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNMidasPayCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNMidasPayCallback"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasPayCallback_OnMidasLoginExpired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginExpired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasPayCallback_OnMidasPayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T MidasPay_MidasPayCallback_OnMidasLoginExpired() {
		return ((T (*)(WNMidasPayCallback*))(Il2CppBase() + 0x16D895C))(this);
	}
	template <typename T = void> T LoginExpired(uintptr_t result, int32_t userContext) {
		return ((T (*)(WNMidasPayCallback*, uintptr_t, int32_t))(Il2CppBase() + 0x16D8B3C))(this, result, userContext);
	}
	template <typename T = void> T MidasPay_MidasPayCallback_OnMidasPayFinished(uintptr_t result) {
		return ((T (*)(WNMidasPayCallback*, uintptr_t))(Il2CppBase() + 0x16D8D68))(this, result);
	}

};

}
