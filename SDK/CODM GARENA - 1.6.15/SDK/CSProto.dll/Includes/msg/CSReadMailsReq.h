#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSReadMailsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSReadMailsReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _indexs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _del_flg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _read_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSReadMailsReq*))(Il2CppBase() + 0x51E02F8))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSReadMailsReq*, int32_t))(Il2CppBase() + 0x51E0300))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_indexs() {
		return ((T (*)(CSReadMailsReq*))(Il2CppBase() + 0x51E0308))(this);
	}
	template <typename T = bool> T get_del_flg() {
		return ((T (*)(CSReadMailsReq*))(Il2CppBase() + 0x51E0310))(this);
	}
	template <typename T = void> T set_del_flg(bool value) {
		return ((T (*)(CSReadMailsReq*, bool))(Il2CppBase() + 0x51E0318))(this, value);
	}
	template <typename T = int32_t> T get_read_type() {
		return ((T (*)(CSReadMailsReq*))(Il2CppBase() + 0x51E0320))(this);
	}
	template <typename T = void> T set_read_type(int32_t value) {
		return ((T (*)(CSReadMailsReq*, int32_t))(Il2CppBase() + 0x51E0328))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSReadMailsReq*, bool))(Il2CppBase() + 0x51E0330))(this, createIfMissing);
	}

};

}
