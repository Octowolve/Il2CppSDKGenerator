#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNMidasReprovideCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNMidasReprovideCallback"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasReprovideCallback_OnMidasReprovideFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T MidasPay_MidasReprovideCallback_OnMidasReprovideFinished(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(WNMidasReprovideCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x16D94E0))(this, result);
	}

};

}
