#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSConciseRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSConciseRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ConciseResult() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSConciseRes*))(Il2CppBase() + 0x51D03E4))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSConciseRes*, int32_t))(Il2CppBase() + 0x51D03EC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ConciseResult() {
		return ((T (*)(CSConciseRes*))(Il2CppBase() + 0x51D03F4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSConciseRes*, bool))(Il2CppBase() + 0x51D03FC))(this, createIfMissing);
	}

};

}
