#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxCheckRecordRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxCheckRecordRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _box_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLuckyBoxCheckRecordRes*))(Il2CppBase() + 0x51EF53C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLuckyBoxCheckRecordRes*, int32_t))(Il2CppBase() + 0x51EF544))(this, value);
	}
	template <typename T = uintptr_t> T get_box_info() {
		return ((T (*)(CSLuckyBoxCheckRecordRes*))(Il2CppBase() + 0x51EF54C))(this);
	}
	template <typename T = void> T set_box_info(uintptr_t value) {
		return ((T (*)(CSLuckyBoxCheckRecordRes*, uintptr_t))(Il2CppBase() + 0x51EF554))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxCheckRecordRes*, bool))(Il2CppBase() + 0x51EF55C))(this, createIfMissing);
	}

};

}
