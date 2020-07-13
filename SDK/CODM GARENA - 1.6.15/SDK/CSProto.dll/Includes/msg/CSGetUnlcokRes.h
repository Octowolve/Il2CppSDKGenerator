#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetUnlcokRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetUnlcokRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _unlock_items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetUnlcokRes*))(Il2CppBase() + 0x52187E0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetUnlcokRes*, int32_t))(Il2CppBase() + 0x52187E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_unlock_items() {
		return ((T (*)(CSGetUnlcokRes*))(Il2CppBase() + 0x52187F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetUnlcokRes*, bool))(Il2CppBase() + 0x52187F8))(this, createIfMissing);
	}

};

}
