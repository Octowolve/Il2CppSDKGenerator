#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class HalfJoinSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "HalfJoinSetting"));
	}

	template <typename T = int32_t> T& _forbid_join_round() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _forbid_join_kills() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_forbid_join_round() {
		return ((T (*)(HalfJoinSetting*))(Il2CppBase() + 0x50D02EC))(this);
	}
	template <typename T = void> T set_forbid_join_round(int32_t value) {
		return ((T (*)(HalfJoinSetting*, int32_t))(Il2CppBase() + 0x50D02F4))(this, value);
	}
	template <typename T = int32_t> T get_forbid_join_kills() {
		return ((T (*)(HalfJoinSetting*))(Il2CppBase() + 0x50D02FC))(this);
	}
	template <typename T = void> T set_forbid_join_kills(int32_t value) {
		return ((T (*)(HalfJoinSetting*, int32_t))(Il2CppBase() + 0x50D0304))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(HalfJoinSetting*, bool))(Il2CppBase() + 0x50D030C))(this, createIfMissing);
	}

};

}
