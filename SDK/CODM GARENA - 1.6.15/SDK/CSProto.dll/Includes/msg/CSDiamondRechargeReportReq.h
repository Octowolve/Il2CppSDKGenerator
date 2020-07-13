#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDiamondRechargeReportReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDiamondRechargeReportReq"));
	}

	template <typename T = int32_t> T& _recharge_count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_recharge_count() {
		return ((T (*)(CSDiamondRechargeReportReq*))(Il2CppBase() + 0x51D1530))(this);
	}
	template <typename T = void> T set_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportReq*, int32_t))(Il2CppBase() + 0x51D1538))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDiamondRechargeReportReq*, bool))(Il2CppBase() + 0x51D1540))(this, createIfMissing);
	}

};

}
