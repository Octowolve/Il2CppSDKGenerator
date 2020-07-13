#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UltStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UltStatis"));
	}

	template <typename T = uint32_t> T& _ult_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ult_use_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ult_total_kills() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_ult_id() {
		return ((T (*)(UltStatis*))(Il2CppBase() + 0x51AA8BC))(this);
	}
	template <typename T = void> T set_ult_id(uint32_t value) {
		return ((T (*)(UltStatis*, uint32_t))(Il2CppBase() + 0x51AA8C4))(this, value);
	}
	template <typename T = uint32_t> T get_ult_use_times() {
		return ((T (*)(UltStatis*))(Il2CppBase() + 0x51AA8CC))(this);
	}
	template <typename T = void> T set_ult_use_times(uint32_t value) {
		return ((T (*)(UltStatis*, uint32_t))(Il2CppBase() + 0x51AA8D4))(this, value);
	}
	template <typename T = uint32_t> T get_ult_total_kills() {
		return ((T (*)(UltStatis*))(Il2CppBase() + 0x51AA8DC))(this);
	}
	template <typename T = void> T set_ult_total_kills(uint32_t value) {
		return ((T (*)(UltStatis*, uint32_t))(Il2CppBase() + 0x51AA8E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UltStatis*, bool))(Il2CppBase() + 0x51AA8EC))(this, createIfMissing);
	}

};

}
