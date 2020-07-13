#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BpExpSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BpExpSource"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _src_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _exp_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_src_list() {
		return ((T (*)(BpExpSource*))(Il2CppBase() + 0x510DE54))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_exp_list() {
		return ((T (*)(BpExpSource*))(Il2CppBase() + 0x510DE5C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BpExpSource*, bool))(Il2CppBase() + 0x510DE64))(this, createIfMissing);
	}

};

}
