#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetRechargeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetRechargeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recharge_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _channel_recharge_limit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetRechargeRes*))(Il2CppBase() + 0x5217FF4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetRechargeRes*, int32_t))(Il2CppBase() + 0x5217FFC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recharge_info() {
		return ((T (*)(CSGetRechargeRes*))(Il2CppBase() + 0x5218004))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_channel_recharge_limit() {
		return ((T (*)(CSGetRechargeRes*))(Il2CppBase() + 0x521800C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetRechargeRes*, bool))(Il2CppBase() + 0x5218014))(this, createIfMissing);
	}

};

}
