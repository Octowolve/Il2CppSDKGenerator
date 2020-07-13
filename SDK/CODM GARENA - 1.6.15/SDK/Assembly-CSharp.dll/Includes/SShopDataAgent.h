#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SShopDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SShopDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_SShopDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mPaymentVM() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSShopGetReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSShopGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSShopBuyReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSShopBuyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_SShopDataStore() {
		return ((T (*)(SShopDataAgent*))(Il2CppBase() + 0x394D40C))(this);
	}
	template <typename T = uintptr_t> T get_PaymentVM() {
		return ((T (*)(SShopDataAgent*))(Il2CppBase() + 0x394D4BC))(this);
	}
	template <typename T = bool> T SendSShopGetReq() {
		return ((T (*)(SShopDataAgent*))(Il2CppBase() + 0x394D56C))(this);
	}
	template <typename T = bool> T OnSShopGetResponse(uintptr_t message) {
		return ((T (*)(SShopDataAgent*, uintptr_t))(Il2CppBase() + 0x394D63C))(this, message);
	}
	template <typename T = bool> T SendSShopBuyReq(int32_t mshopID, int32_t mshopType) {
		return ((T (*)(SShopDataAgent*, int32_t, int32_t))(Il2CppBase() + 0x394D714))(this, mshopID, mshopType);
	}
	template <typename T = bool> T OnSShopBuyResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SShopDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x394D8B4))(this, message, err);
	}

};

}
