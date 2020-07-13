#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class CallBackUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "CallBackUtils"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasLoginExpiredCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetLocalPriceCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetIntroPriceCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetShortOpenidCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasReProvidetCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasQueryPromotionCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T MidasPayCallback(Il2CppString* result) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D1218))(this, result);
	}
	template <typename T = void> T MidasLoginExpiredCallback() {
		return ((T (*)(CallBackUtils*))(Il2CppBase() + 0x41D1918))(this);
	}
	template <typename T = void> T MidasGetLocalPriceCallback(Il2CppString* json) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D1BB0))(this, json);
	}
	template <typename T = void> T MidasGetIntroPriceCallback(Il2CppString* json) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D1E88))(this, json);
	}
	template <typename T = void> T MidasInitCallback(Il2CppString* result) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D2160))(this, result);
	}
	template <typename T = void> T MidasGetInfoCallback(Il2CppString* json) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D2430))(this, json);
	}
	template <typename T = void> T MidasGetShortOpenidCallback(Il2CppString* json) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D2810))(this, json);
	}
	template <typename T = void> T MidasReProvidetCallback(Il2CppString* result) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D2A04))(this, result);
	}
	template <typename T = void> T MidasQueryPromotionCallback(Il2CppString* result) {
		return ((T (*)(CallBackUtils*, Il2CppString*))(Il2CppBase() + 0x41D2CD4))(this, result);
	}

};

}
