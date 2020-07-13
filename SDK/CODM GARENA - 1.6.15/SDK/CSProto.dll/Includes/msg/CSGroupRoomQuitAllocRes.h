#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomQuitAllocRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomQuitAllocRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomQuitAllocRes*))(Il2CppBase() + 0x51DEF34))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomQuitAllocRes*, int32_t))(Il2CppBase() + 0x51DEF3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomQuitAllocRes*, bool))(Il2CppBase() + 0x51DEF44))(this, createIfMissing);
	}

};

}
