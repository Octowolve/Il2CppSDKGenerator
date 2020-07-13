#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAllConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAllConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _conf_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetAllConfRes*))(Il2CppBase() + 0x5215CF8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetAllConfRes*, int32_t))(Il2CppBase() + 0x5215D00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_conf_list() {
		return ((T (*)(CSGetAllConfRes*))(Il2CppBase() + 0x5215D08))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAllConfRes*, bool))(Il2CppBase() + 0x5215D10))(this, createIfMissing);
	}

};

}
