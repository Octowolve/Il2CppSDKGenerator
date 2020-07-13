#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _lottery_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _desc_extreme_price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLotteryInfoRes*))(Il2CppBase() + 0x51EF148))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLotteryInfoRes*, int32_t))(Il2CppBase() + 0x51EF150))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_lottery_info() {
		return ((T (*)(CSLotteryInfoRes*))(Il2CppBase() + 0x51EF158))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_desc_extreme_price() {
		return ((T (*)(CSLotteryInfoRes*))(Il2CppBase() + 0x51EF160))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryInfoRes*, bool))(Il2CppBase() + 0x51EF168))(this, createIfMissing);
	}

};

}
