#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SPveFightSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SPveFightSkillInfo"));
	}

	template <typename T = int32_t> T& _skill_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _skill_entry_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _skill_entry_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_skill_id() {
		return ((T (*)(SPveFightSkillInfo*))(Il2CppBase() + 0x51A8550))(this);
	}
	template <typename T = void> T set_skill_id(int32_t value) {
		return ((T (*)(SPveFightSkillInfo*, int32_t))(Il2CppBase() + 0x51A8558))(this, value);
	}
	template <typename T = int32_t> T get_skill_entry_id() {
		return ((T (*)(SPveFightSkillInfo*))(Il2CppBase() + 0x51A8560))(this);
	}
	template <typename T = void> T set_skill_entry_id(int32_t value) {
		return ((T (*)(SPveFightSkillInfo*, int32_t))(Il2CppBase() + 0x51A8568))(this, value);
	}
	template <typename T = int32_t> T get_skill_entry_level() {
		return ((T (*)(SPveFightSkillInfo*))(Il2CppBase() + 0x51A8570))(this);
	}
	template <typename T = void> T set_skill_entry_level(int32_t value) {
		return ((T (*)(SPveFightSkillInfo*, int32_t))(Il2CppBase() + 0x51A8578))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SPveFightSkillInfo*, bool))(Il2CppBase() + 0x51A8580))(this, createIfMissing);
	}

};

}
