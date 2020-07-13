#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropSkillProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropSkillProperty"));
	}

	template <typename T = int32_t> T& _property_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _star() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_property_id() {
		return ((T (*)(PropSkillProperty*))(Il2CppBase() + 0x506F028))(this);
	}
	template <typename T = void> T set_property_id(int32_t value) {
		return ((T (*)(PropSkillProperty*, int32_t))(Il2CppBase() + 0x506F030))(this, value);
	}
	template <typename T = int32_t> T get_star() {
		return ((T (*)(PropSkillProperty*))(Il2CppBase() + 0x506F038))(this);
	}
	template <typename T = void> T set_star(int32_t value) {
		return ((T (*)(PropSkillProperty*, int32_t))(Il2CppBase() + 0x506F040))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropSkillProperty*, bool))(Il2CppBase() + 0x506F048))(this, createIfMissing);
	}

};

}
