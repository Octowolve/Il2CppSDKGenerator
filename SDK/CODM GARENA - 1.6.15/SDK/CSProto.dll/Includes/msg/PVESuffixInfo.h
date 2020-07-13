#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVESuffixInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVESuffixInfo"));
	}

	template <typename T = int32_t> T& _max_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _suffix_items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_max_level() {
		return ((T (*)(PVESuffixInfo*))(Il2CppBase() + 0x506FD14))(this);
	}
	template <typename T = void> T set_max_level(int32_t value) {
		return ((T (*)(PVESuffixInfo*, int32_t))(Il2CppBase() + 0x506FD1C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_suffix_items() {
		return ((T (*)(PVESuffixInfo*))(Il2CppBase() + 0x506FD24))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVESuffixInfo*, bool))(Il2CppBase() + 0x506FD2C))(this, createIfMissing);
	}

};

}
