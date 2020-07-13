#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomExitRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomExitRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GspRoomExitRes*))(Il2CppBase() + 0x50CF118))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GspRoomExitRes*, int32_t))(Il2CppBase() + 0x50CF120))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomExitRes*, bool))(Il2CppBase() + 0x50CF128))(this, createIfMissing);
	}

};

}
