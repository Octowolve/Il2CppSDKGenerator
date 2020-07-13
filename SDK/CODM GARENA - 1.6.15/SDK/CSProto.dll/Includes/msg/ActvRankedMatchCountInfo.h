#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActvRankedMatchCountInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActvRankedMatchCountInfo"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _type_infos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _start_second() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _end_second() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(ActvRankedMatchCountInfo*))(Il2CppBase() + 0x510B398))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(ActvRankedMatchCountInfo*, uint64_t))(Il2CppBase() + 0x510B3A0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_type_infos() {
		return ((T (*)(ActvRankedMatchCountInfo*))(Il2CppBase() + 0x510B3B0))(this);
	}
	template <typename T = uint64_t> T get_start_second() {
		return ((T (*)(ActvRankedMatchCountInfo*))(Il2CppBase() + 0x510B3B8))(this);
	}
	template <typename T = void> T set_start_second(uint64_t value) {
		return ((T (*)(ActvRankedMatchCountInfo*, uint64_t))(Il2CppBase() + 0x510B3C0))(this, value);
	}
	template <typename T = uint64_t> T get_end_second() {
		return ((T (*)(ActvRankedMatchCountInfo*))(Il2CppBase() + 0x510B3D0))(this);
	}
	template <typename T = void> T set_end_second(uint64_t value) {
		return ((T (*)(ActvRankedMatchCountInfo*, uint64_t))(Il2CppBase() + 0x510B3D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActvRankedMatchCountInfo*, bool))(Il2CppBase() + 0x510B3E8))(this, createIfMissing);
	}

};

}
