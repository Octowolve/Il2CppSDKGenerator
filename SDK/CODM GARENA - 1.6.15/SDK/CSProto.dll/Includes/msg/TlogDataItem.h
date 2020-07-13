#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TlogDataItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TlogDataItem"));
	}

	template <typename T = int64_t> T& _int_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _str_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int64_t> T get_int_data() {
		return ((T (*)(TlogDataItem*))(Il2CppBase() + 0x51AA68C))(this);
	}
	template <typename T = void> T set_int_data(int64_t value) {
		return ((T (*)(TlogDataItem*, int64_t))(Il2CppBase() + 0x51AA694))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_str_data() {
		return ((T (*)(TlogDataItem*))(Il2CppBase() + 0x51AA6A4))(this);
	}
	template <typename T = void> T set_str_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TlogDataItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA6AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TlogDataItem*, bool))(Il2CppBase() + 0x51AA6B4))(this, createIfMissing);
	}

};

}
