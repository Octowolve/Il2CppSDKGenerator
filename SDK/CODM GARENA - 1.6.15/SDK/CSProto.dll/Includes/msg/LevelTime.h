#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelTime"));
	}

	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_level() {
		return ((T (*)(LevelTime*))(Il2CppBase() + 0x4EA2818))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(LevelTime*, int32_t))(Il2CppBase() + 0x4EA2820))(this, value);
	}
	template <typename T = uint64_t> T get_time() {
		return ((T (*)(LevelTime*))(Il2CppBase() + 0x4EA2828))(this);
	}
	template <typename T = void> T set_time(uint64_t value) {
		return ((T (*)(LevelTime*, uint64_t))(Il2CppBase() + 0x4EA2830))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelTime*, bool))(Il2CppBase() + 0x4EA2840))(this, createIfMissing);
	}

};

}
