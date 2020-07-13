#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RoomSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RoomSetting"));
	}

	template <typename T = int32_t> T& _time_limit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _score_limit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_time_limit() {
		return ((T (*)(RoomSetting*))(Il2CppBase() + 0x5071E00))(this);
	}
	template <typename T = void> T set_time_limit(int32_t value) {
		return ((T (*)(RoomSetting*, int32_t))(Il2CppBase() + 0x5071E08))(this, value);
	}
	template <typename T = int32_t> T get_score_limit() {
		return ((T (*)(RoomSetting*))(Il2CppBase() + 0x5071E10))(this);
	}
	template <typename T = void> T set_score_limit(int32_t value) {
		return ((T (*)(RoomSetting*, int32_t))(Il2CppBase() + 0x5071E18))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RoomSetting*, bool))(Il2CppBase() + 0x5071E20))(this, createIfMissing);
	}

};

}
