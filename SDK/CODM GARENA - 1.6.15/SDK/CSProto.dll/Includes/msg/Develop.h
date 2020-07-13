#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Develop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Develop"));
	}

	template <typename T = uint32_t> T& _develop_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _attr_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_develop_type() {
		return ((T (*)(Develop*))(Il2CppBase() + 0x52265CC))(this);
	}
	template <typename T = void> T set_develop_type(uint32_t value) {
		return ((T (*)(Develop*, uint32_t))(Il2CppBase() + 0x52265D4))(this, value);
	}
	template <typename T = uint32_t> T get_attr_type() {
		return ((T (*)(Develop*))(Il2CppBase() + 0x52265DC))(this);
	}
	template <typename T = void> T set_attr_type(uint32_t value) {
		return ((T (*)(Develop*, uint32_t))(Il2CppBase() + 0x52265E4))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(Develop*))(Il2CppBase() + 0x52265EC))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(Develop*, uint32_t))(Il2CppBase() + 0x52265F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Develop*, bool))(Il2CppBase() + 0x52265FC))(this, createIfMissing);
	}

};

}
