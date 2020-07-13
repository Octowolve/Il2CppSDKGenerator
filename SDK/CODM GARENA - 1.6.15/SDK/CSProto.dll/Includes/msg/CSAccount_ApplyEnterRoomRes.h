#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountApplyEnterRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_ApplyEnterRoomRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountApplyEnterRoomRes*))(Il2CppBase() + 0x516F220))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountApplyEnterRoomRes*, uint32_t))(Il2CppBase() + 0x516F228))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountApplyEnterRoomRes*, bool))(Il2CppBase() + 0x516F230))(this, createIfMissing);
	}

};

}
