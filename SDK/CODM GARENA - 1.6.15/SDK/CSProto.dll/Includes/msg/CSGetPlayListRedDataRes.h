#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayListRedDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayListRedDataRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pvp_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _create_timestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayListRedDataRes*))(Il2CppBase() + 0x5217DB8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayListRedDataRes*, int32_t))(Il2CppBase() + 0x5217DC0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_data() {
		return ((T (*)(CSGetPlayListRedDataRes*))(Il2CppBase() + 0x5217DC8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pvp_data() {
		return ((T (*)(CSGetPlayListRedDataRes*))(Il2CppBase() + 0x5217DD0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_data() {
		return ((T (*)(CSGetPlayListRedDataRes*))(Il2CppBase() + 0x5217DD8))(this);
	}
	template <typename T = uint32_t> T get_create_timestamp() {
		return ((T (*)(CSGetPlayListRedDataRes*))(Il2CppBase() + 0x5217DE0))(this);
	}
	template <typename T = void> T set_create_timestamp(uint32_t value) {
		return ((T (*)(CSGetPlayListRedDataRes*, uint32_t))(Il2CppBase() + 0x5217DE8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayListRedDataRes*, bool))(Il2CppBase() + 0x5217DF0))(this, createIfMissing);
	}

};

}
