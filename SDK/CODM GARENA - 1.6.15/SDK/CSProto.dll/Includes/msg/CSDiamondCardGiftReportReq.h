#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDiamondCardGiftReportReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDiamondCardGiftReportReq"));
	}

	template <typename T = Il2CppString*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _gift_days() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_product_id() {
		return ((T (*)(CSDiamondCardGiftReportReq*))(Il2CppBase() + 0x51D122C))(this);
	}
	template <typename T = void> T set_product_id(Il2CppString* value) {
		return ((T (*)(CSDiamondCardGiftReportReq*, Il2CppString*))(Il2CppBase() + 0x51D1234))(this, value);
	}
	template <typename T = int32_t> T get_gift_days() {
		return ((T (*)(CSDiamondCardGiftReportReq*))(Il2CppBase() + 0x51D123C))(this);
	}
	template <typename T = void> T set_gift_days(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportReq*, int32_t))(Il2CppBase() + 0x51D1244))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDiamondCardGiftReportReq*, bool))(Il2CppBase() + 0x51D124C))(this, createIfMissing);
	}

};

}
