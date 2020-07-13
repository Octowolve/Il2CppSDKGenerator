#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallGetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallGetRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _malls() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMallGetRes*))(Il2CppBase() + 0x51F0424))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMallGetRes*, int32_t))(Il2CppBase() + 0x51F042C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_malls() {
		return ((T (*)(CSMallGetRes*))(Il2CppBase() + 0x51F0434))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallGetRes*, bool))(Il2CppBase() + 0x51F043C))(this, createIfMissing);
	}

};

}
