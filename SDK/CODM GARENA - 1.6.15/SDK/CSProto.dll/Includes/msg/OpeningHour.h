#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OpeningHour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OpeningHour"));
	}

	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _start_weekday() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _end_weekday() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(OpeningHour*))(Il2CppBase() + 0x4EA5BB8))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(OpeningHour*, uint32_t))(Il2CppBase() + 0x4EA5BC0))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(OpeningHour*))(Il2CppBase() + 0x4EA5BC8))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(OpeningHour*, uint32_t))(Il2CppBase() + 0x4EA5BD0))(this, value);
	}
	template <typename T = uint32_t> T get_start_weekday() {
		return ((T (*)(OpeningHour*))(Il2CppBase() + 0x4EA5BD8))(this);
	}
	template <typename T = void> T set_start_weekday(uint32_t value) {
		return ((T (*)(OpeningHour*, uint32_t))(Il2CppBase() + 0x4EA5BE0))(this, value);
	}
	template <typename T = uint32_t> T get_end_weekday() {
		return ((T (*)(OpeningHour*))(Il2CppBase() + 0x4EA5BE8))(this);
	}
	template <typename T = void> T set_end_weekday(uint32_t value) {
		return ((T (*)(OpeningHour*, uint32_t))(Il2CppBase() + 0x4EA5BF0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_tips() {
		return ((T (*)(OpeningHour*))(Il2CppBase() + 0x4EA5BF8))(this);
	}
	template <typename T = void> T set_tips(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(OpeningHour*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5C00))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OpeningHour*, bool))(Il2CppBase() + 0x4EA5C08))(this, createIfMissing);
	}

};

}
