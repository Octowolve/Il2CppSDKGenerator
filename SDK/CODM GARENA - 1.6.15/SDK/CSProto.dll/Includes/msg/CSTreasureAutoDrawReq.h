#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTreasureAutoDrawReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTreasureAutoDrawReq"));
	}

	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(CSTreasureAutoDrawReq*))(Il2CppBase() + 0x51B63C4))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(CSTreasureAutoDrawReq*, int32_t))(Il2CppBase() + 0x51B63CC))(this, value);
	}
	template <typename T = int32_t> T get_ex_vip_flag() {
		return ((T (*)(CSTreasureAutoDrawReq*))(Il2CppBase() + 0x51B63D4))(this);
	}
	template <typename T = void> T set_ex_vip_flag(int32_t value) {
		return ((T (*)(CSTreasureAutoDrawReq*, int32_t))(Il2CppBase() + 0x51B63DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTreasureAutoDrawReq*, bool))(Il2CppBase() + 0x51B63E4))(this, createIfMissing);
	}

};

}
