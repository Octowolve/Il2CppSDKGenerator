#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayListOpenTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayListOpenTime"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _cd_active_second() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _cool_down_second() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DD64))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayListOpenTime*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506DD6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DD74))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayListOpenTime*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506DD7C))(this, value);
	}
	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DD84))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(PlayListOpenTime*, uint32_t))(Il2CppBase() + 0x506DD8C))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DD94))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(PlayListOpenTime*, uint32_t))(Il2CppBase() + 0x506DD9C))(this, value);
	}
	template <typename T = uint32_t> T get_cd_active_second() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DDA4))(this);
	}
	template <typename T = void> T set_cd_active_second(uint32_t value) {
		return ((T (*)(PlayListOpenTime*, uint32_t))(Il2CppBase() + 0x506DDAC))(this, value);
	}
	template <typename T = uint32_t> T get_cool_down_second() {
		return ((T (*)(PlayListOpenTime*))(Il2CppBase() + 0x506DDB4))(this);
	}
	template <typename T = void> T set_cool_down_second(uint32_t value) {
		return ((T (*)(PlayListOpenTime*, uint32_t))(Il2CppBase() + 0x506DDBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayListOpenTime*, bool))(Il2CppBase() + 0x506DDC4))(this, createIfMissing);
	}

};

}
