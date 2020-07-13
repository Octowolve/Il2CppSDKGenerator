#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryTreasureRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryTreasureRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_delta() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLotteryTreasureRes*))(Il2CppBase() + 0x51EF4C4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLotteryTreasureRes*, int32_t))(Il2CppBase() + 0x51EF4CC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_lottery_id() {
		return ((T (*)(CSLotteryTreasureRes*))(Il2CppBase() + 0x51EF4D4))(this);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSLotteryTreasureRes*))(Il2CppBase() + 0x51EF4DC))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSLotteryTreasureRes*, uintptr_t))(Il2CppBase() + 0x51EF4E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_delta() {
		return ((T (*)(CSLotteryTreasureRes*))(Il2CppBase() + 0x51EF4EC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryTreasureRes*, bool))(Il2CppBase() + 0x51EF4F4))(this, createIfMissing);
	}

};

}
