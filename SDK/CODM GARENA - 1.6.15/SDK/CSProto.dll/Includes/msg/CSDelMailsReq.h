#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDelMailsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDelMailsReq"));
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
		return ((T (*)(CSDelMailsReq*))(Il2CppBase() + 0x51D05BC))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSDelMailsReq*, int32_t))(Il2CppBase() + 0x51D05C4))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_indexs() {
		return ((T (*)(CSDelMailsReq*))(Il2CppBase() + 0x51D05CC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDelMailsReq*, bool))(Il2CppBase() + 0x51D05D4))(this, createIfMissing);
	}

};

}
