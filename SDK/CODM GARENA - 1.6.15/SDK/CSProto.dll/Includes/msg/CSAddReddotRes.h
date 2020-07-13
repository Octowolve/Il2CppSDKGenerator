#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAddReddotRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAddReddotRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAddReddotRes*))(Il2CppBase() + 0x51E437C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAddReddotRes*, int32_t))(Il2CppBase() + 0x51E4384))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_data() {
		return ((T (*)(CSAddReddotRes*))(Il2CppBase() + 0x51E438C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAddReddotRes*, bool))(Il2CppBase() + 0x51E4394))(this, createIfMissing);
	}

};

}
