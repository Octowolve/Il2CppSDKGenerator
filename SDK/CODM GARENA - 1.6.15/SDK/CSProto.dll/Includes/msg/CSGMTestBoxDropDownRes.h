#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGMTestBoxDropDownRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGMTestBoxDropDownRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _msg_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGMTestBoxDropDownRes*))(Il2CppBase() + 0x51DD3C8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGMTestBoxDropDownRes*, int32_t))(Il2CppBase() + 0x51DD3D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_msg_info() {
		return ((T (*)(CSGMTestBoxDropDownRes*))(Il2CppBase() + 0x51DD3D8))(this);
	}
	template <typename T = void> T set_msg_info(Il2CppString* value) {
		return ((T (*)(CSGMTestBoxDropDownRes*, Il2CppString*))(Il2CppBase() + 0x51DD3E0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGMTestBoxDropDownRes*, bool))(Il2CppBase() + 0x51DD3E8))(this, createIfMissing);
	}

};

}
