#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelUpTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelUpTask"));
	}

	template <typename T = int32_t> T& _award_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _award_status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _update_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_award_level() {
		return ((T (*)(LevelUpTask*))(Il2CppBase() + 0x4EA2968))(this);
	}
	template <typename T = void> T set_award_level(int32_t value) {
		return ((T (*)(LevelUpTask*, int32_t))(Il2CppBase() + 0x4EA2970))(this, value);
	}
	template <typename T = uintptr_t> T get_award_status() {
		return ((T (*)(LevelUpTask*))(Il2CppBase() + 0x4EA2978))(this);
	}
	template <typename T = void> T set_award_status(uintptr_t value) {
		return ((T (*)(LevelUpTask*, uintptr_t))(Il2CppBase() + 0x4EA2980))(this, value);
	}
	template <typename T = uintptr_t> T get_update_flag() {
		return ((T (*)(LevelUpTask*))(Il2CppBase() + 0x4EA2988))(this);
	}
	template <typename T = void> T set_update_flag(uintptr_t value) {
		return ((T (*)(LevelUpTask*, uintptr_t))(Il2CppBase() + 0x4EA2990))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelUpTask*, bool))(Il2CppBase() + 0x4EA2998))(this, createIfMissing);
	}

};

}
