#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMailDelMailsNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMailDelMailsNtf"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _indexs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSMailDelMailsNtf*))(Il2CppBase() + 0x51EFED0))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSMailDelMailsNtf*, int32_t))(Il2CppBase() + 0x51EFED8))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_indexs() {
		return ((T (*)(CSMailDelMailsNtf*))(Il2CppBase() + 0x51EFEE0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMailDelMailsNtf*, bool))(Il2CppBase() + 0x51EFEE8))(this, createIfMissing);
	}

};

}
