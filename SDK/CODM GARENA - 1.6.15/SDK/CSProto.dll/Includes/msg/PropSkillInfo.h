#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropSkillInfo"));
	}

	template <typename T = int32_t> T& _skill_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skill_property() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _refresh_position() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _refresh_skill_property() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_skill_id() {
		return ((T (*)(PropSkillInfo*))(Il2CppBase() + 0x506EFDC))(this);
	}
	template <typename T = void> T set_skill_id(int32_t value) {
		return ((T (*)(PropSkillInfo*, int32_t))(Il2CppBase() + 0x506EFE4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skill_property() {
		return ((T (*)(PropSkillInfo*))(Il2CppBase() + 0x506EFEC))(this);
	}
	template <typename T = int32_t> T get_refresh_position() {
		return ((T (*)(PropSkillInfo*))(Il2CppBase() + 0x506EFF4))(this);
	}
	template <typename T = void> T set_refresh_position(int32_t value) {
		return ((T (*)(PropSkillInfo*, int32_t))(Il2CppBase() + 0x506EFFC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_refresh_skill_property() {
		return ((T (*)(PropSkillInfo*))(Il2CppBase() + 0x506F004))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropSkillInfo*, bool))(Il2CppBase() + 0x506F00C))(this, createIfMissing);
	}

};

}
