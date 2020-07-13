#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBoxConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBoxConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _box_group_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_box_group_list() {
		return ((T (*)(SafeBoxConfig*))(Il2CppBase() + 0x5072228))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBoxConfig*, bool))(Il2CppBase() + 0x5072230))(this, createIfMissing);
	}

};

}
