#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetSundryConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetSundryConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mode_entrances() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetSundryConfRes*))(Il2CppBase() + 0x5218708))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetSundryConfRes*, int32_t))(Il2CppBase() + 0x5218710))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mode_entrances() {
		return ((T (*)(CSGetSundryConfRes*))(Il2CppBase() + 0x5218718))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetSundryConfRes*, bool))(Il2CppBase() + 0x5218720))(this, createIfMissing);
	}

};

}
