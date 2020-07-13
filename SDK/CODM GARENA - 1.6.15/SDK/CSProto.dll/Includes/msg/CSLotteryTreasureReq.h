#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryTreasureReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryTreasureReq"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<int32_t>*> T get_lottery_id() {
		return ((T (*)(CSLotteryTreasureReq*))(Il2CppBase() + 0x51EF3B8))(this);
	}
	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSLotteryTreasureReq*))(Il2CppBase() + 0x51EF3C0))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSLotteryTreasureReq*, uintptr_t))(Il2CppBase() + 0x51EF3C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryTreasureReq*, bool))(Il2CppBase() + 0x51EF3D0))(this, createIfMissing);
	}

};

}
