#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PunishItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PunishItem"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _until_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(PunishItem*))(Il2CppBase() + 0x506F064))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(PunishItem*, uint32_t))(Il2CppBase() + 0x506F06C))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(PunishItem*))(Il2CppBase() + 0x506F074))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(PunishItem*, int32_t))(Il2CppBase() + 0x506F07C))(this, value);
	}
	template <typename T = uint32_t> T get_until_time() {
		return ((T (*)(PunishItem*))(Il2CppBase() + 0x506F084))(this);
	}
	template <typename T = void> T set_until_time(uint32_t value) {
		return ((T (*)(PunishItem*, uint32_t))(Il2CppBase() + 0x506F08C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(PunishItem*))(Il2CppBase() + 0x506F094))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PunishItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506F09C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PunishItem*, bool))(Il2CppBase() + 0x506F0A4))(this, createIfMissing);
	}

};

}
