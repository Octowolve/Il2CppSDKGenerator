#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportViewOfferShopCommodityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportViewOfferShopCommodityData"));
	}

	template <typename T = Il2CppString*> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(ReportViewOfferShopCommodityData*))(Il2CppBase() + 0x23C166C))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(ReportViewOfferShopCommodityData*, Il2CppString*))(Il2CppBase() + 0x23C1674))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemId() {
		return ((T (*)(ReportViewOfferShopCommodityData*))(Il2CppBase() + 0x23C167C))(this);
	}
	template <typename T = void> T set_ItemId(Il2CppString* value) {
		return ((T (*)(ReportViewOfferShopCommodityData*, Il2CppString*))(Il2CppBase() + 0x23C1684))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemType() {
		return ((T (*)(ReportViewOfferShopCommodityData*))(Il2CppBase() + 0x23C168C))(this);
	}
	template <typename T = void> T set_ItemType(Il2CppString* value) {
		return ((T (*)(ReportViewOfferShopCommodityData*, Il2CppString*))(Il2CppBase() + 0x23C1694))(this, value);
	}

};

}
