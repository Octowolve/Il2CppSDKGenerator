#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SkillInfo"));
	}

	template <typename T = uint32_t> T& _skill_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_skill_id() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x5073514))(this);
	}
	template <typename T = void> T set_skill_id(uint32_t value) {
		return ((T (*)(SkillInfo*, uint32_t))(Il2CppBase() + 0x507351C))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x5073524))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(SkillInfo*, bool))(Il2CppBase() + 0x507352C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SkillInfo*, bool))(Il2CppBase() + 0x5073534))(this, createIfMissing);
	}

};

}
