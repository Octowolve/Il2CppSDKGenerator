#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNMidasGetInfoCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNMidasGetInfoCallback"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasGetInfoCallback_GetInfoFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T MidasPay_MidasGetInfoCallback_GetInfoFinished(Il2CppString* type, int32_t retCode, Il2CppString* json) {
		return ((T (*)(WNMidasGetInfoCallback*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x16D79A0))(this, type, retCode, json);
	}

};

}
