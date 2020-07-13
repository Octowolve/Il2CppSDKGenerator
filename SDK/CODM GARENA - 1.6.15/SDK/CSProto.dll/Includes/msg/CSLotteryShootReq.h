#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryShootReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryShootReq"));
	}

	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _is_free() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _desc_md5() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(CSLotteryShootReq*))(Il2CppBase() + 0x51EF184))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(CSLotteryShootReq*, int32_t))(Il2CppBase() + 0x51EF18C))(this, value);
	}
	template <typename T = int32_t> T get_is_free() {
		return ((T (*)(CSLotteryShootReq*))(Il2CppBase() + 0x51EF194))(this);
	}
	template <typename T = void> T set_is_free(int32_t value) {
		return ((T (*)(CSLotteryShootReq*, int32_t))(Il2CppBase() + 0x51EF19C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_desc_md5() {
		return ((T (*)(CSLotteryShootReq*))(Il2CppBase() + 0x51EF1A4))(this);
	}
	template <typename T = void> T set_desc_md5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLotteryShootReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51EF1AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryShootReq*, bool))(Il2CppBase() + 0x51EF1B4))(this, createIfMissing);
	}

};

}
