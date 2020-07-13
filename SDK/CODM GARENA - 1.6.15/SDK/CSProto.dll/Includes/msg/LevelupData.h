#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelupData"));
	}

	template <typename T = int32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_old_level() {
		return ((T (*)(LevelupData*))(Il2CppBase() + 0x4EA2924))(this);
	}
	template <typename T = void> T set_old_level(int32_t value) {
		return ((T (*)(LevelupData*, int32_t))(Il2CppBase() + 0x4EA292C))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(LevelupData*))(Il2CppBase() + 0x4EA2934))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(LevelupData*, int32_t))(Il2CppBase() + 0x4EA293C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelupData*, bool))(Il2CppBase() + 0x4EA2944))(this, createIfMissing);
	}

};

}
