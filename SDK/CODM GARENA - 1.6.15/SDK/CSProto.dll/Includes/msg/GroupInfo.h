#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupInfo"));
	}

	template <typename T = int32_t> T& _squad_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ovr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _waves() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_squad_id() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE03C))(this);
	}
	template <typename T = void> T set_squad_id(int32_t value) {
		return ((T (*)(GroupInfo*, int32_t))(Il2CppBase() + 0x50CE044))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE04C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(GroupInfo*, int32_t))(Il2CppBase() + 0x50CE054))(this, value);
	}
	template <typename T = int32_t> T get_ovr() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE05C))(this);
	}
	template <typename T = void> T set_ovr(int32_t value) {
		return ((T (*)(GroupInfo*, int32_t))(Il2CppBase() + 0x50CE064))(this, value);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE06C))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(GroupInfo*, Il2CppString*))(Il2CppBase() + 0x50CE074))(this, value);
	}
	template <typename T = int32_t> T get_create_time() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE07C))(this);
	}
	template <typename T = void> T set_create_time(int32_t value) {
		return ((T (*)(GroupInfo*, int32_t))(Il2CppBase() + 0x50CE084))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_waves() {
		return ((T (*)(GroupInfo*))(Il2CppBase() + 0x50CE08C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupInfo*, bool))(Il2CppBase() + 0x50CE094))(this, createIfMissing);
	}

};

}
