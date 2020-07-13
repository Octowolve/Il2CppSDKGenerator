#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTreasureInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTreasureInfoRes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _lottery_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_lottery_info() {
		return ((T (*)(CSTreasureInfoRes*))(Il2CppBase() + 0x51B64EC))(this);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTreasureInfoRes*))(Il2CppBase() + 0x51B64F4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTreasureInfoRes*, int32_t))(Il2CppBase() + 0x51B64FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTreasureInfoRes*, bool))(Il2CppBase() + 0x51B6504))(this, createIfMissing);
	}

};

}
