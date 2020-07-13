#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelInfo"));
	}

	template <typename T = uint32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _upgrade_deadline() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _peak_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _peak_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _peak_upgrade_deadline() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_exp() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA26C4))(this);
	}
	template <typename T = void> T set_exp(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA26CC))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA26D4))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA26DC))(this, value);
	}
	template <typename T = uint32_t> T get_upgrade_deadline() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA26E4))(this);
	}
	template <typename T = void> T set_upgrade_deadline(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA26EC))(this, value);
	}
	template <typename T = uint32_t> T get_peak_exp() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA26F4))(this);
	}
	template <typename T = void> T set_peak_exp(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA26FC))(this, value);
	}
	template <typename T = uint32_t> T get_peak_level() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA2704))(this);
	}
	template <typename T = void> T set_peak_level(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA270C))(this, value);
	}
	template <typename T = uint32_t> T get_peak_upgrade_deadline() {
		return ((T (*)(LevelInfo*))(Il2CppBase() + 0x4EA2714))(this);
	}
	template <typename T = void> T set_peak_upgrade_deadline(uint32_t value) {
		return ((T (*)(LevelInfo*, uint32_t))(Il2CppBase() + 0x4EA271C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelInfo*, bool))(Il2CppBase() + 0x4EA2724))(this, createIfMissing);
	}

};

}
