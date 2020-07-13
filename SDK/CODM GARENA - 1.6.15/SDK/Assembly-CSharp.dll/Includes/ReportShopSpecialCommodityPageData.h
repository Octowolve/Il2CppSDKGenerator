#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportShopSpecialCommodityPageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportShopSpecialCommodityPageData"));
	}

	template <typename T = Il2CppString*> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& GoodType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Currency() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C1598))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF58))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemId() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C15A0))(this);
	}
	template <typename T = void> T set_ItemId(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF60))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoodType() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C15A8))(this);
	}
	template <typename T = void> T set_GoodType(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF80))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemType() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C15B0))(this);
	}
	template <typename T = void> T set_ItemType(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF68))(this, value);
	}
	template <typename T = Il2CppString*> T get_Price() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C15B8))(this);
	}
	template <typename T = void> T set_Price(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Currency() {
		return ((T (*)(ReportShopSpecialCommodityPageData*))(Il2CppBase() + 0x23C15C0))(this);
	}
	template <typename T = void> T set_Currency(Il2CppString* value) {
		return ((T (*)(ReportShopSpecialCommodityPageData*, Il2CppString*))(Il2CppBase() + 0x236EF78))(this, value);
	}

};

}
